# .venv が作成されていなかったら .venv を作成する
if [ ! -d ".venv" ]; then
    python3 -m venv .venv
fi

# .venv をアクティベートする
source .venv/bin/activate

# pyOCD をインストールする
pip install pyocd
