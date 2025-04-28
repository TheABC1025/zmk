#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/init.h>

static const struct device *led_dev;

static int led_on_init(void)
{
    led_dev = DEVICE_DT_GET(DT_NODELABEL(gpio0)); // GPIOコントローラを取得
    if (!device_is_ready(led_dev)) {
        return -ENODEV;
    }

    gpio_pin_configure(led_dev, 13, GPIO_OUTPUT_ACTIVE); // ピン番号は自分に合わせる
    gpio_pin_set(led_dev, 13, 0); // Active Lowなら0にする（点灯）

    // gpio_pin_configure(led_dev, 14, GPIO_OUTPUT_ACTIVE); // ピン番号は自分に合わせる
    // gpio_pin_set(led_dev, 14, 0); // Active Lowなら0にする（点灯）

    // gpio_pin_configure(led_dev, 15, GPIO_OUTPUT_ACTIVE); // ピン番号は自分に合わせる
    // gpio_pin_set(led_dev, 15, 0); // Active Lowなら0にする（点灯）
    return 0;
}

SYS_INIT(led_on_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);