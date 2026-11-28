# backhaul-sdk（非公開）

backhaul（https://github.com/kajisho5/backhaul）のビルドに使う Zoom Meeting SDK の置き場です。

- このリポは**公開しない**でください。Zoom Meeting SDK は再配布できる前提で置いていません。
- SDK本体（zip）はリリースの添付ファイルとして保管します。
- `headers/` には SDK のヘッダーファイルだけを、`inventory/` には zip の中身の一覧を置きます。
- Zoomの鍵類（Client ID/Secret、ZAK、会議のパスコード）はここにも置きません。

## 取り込み方

Actions の「SDKを取り込む」を、Google Drive のファイルIDを指定して実行します。
実行中だけ、そのファイルが「リンクを知っている全員」に見える設定になっている必要があります。

## インストーラーと更新

「SDK入りでビルドを確かめる」は、毎回インストーラー（`backhaul-<バージョン>-setup.exe`）も作り、入れて起動するところまで確かめます（できたものは実行結果の添付に入ります）。

`asio` を外して `update_release` を入れると、インストーラーに署名して、リリース `updates` にインストーラー・`appcast.xml`・`latest.json` を置きます。配ったアプリはこれを見て更新します。

- 署名の鍵は「秘密の値」`UPDATE_SIGNING_KEY` に置きます（無いと止まります）。
- 今出ているバージョンより新しくないと止まります。
- 手順とファイルの説明は backhaul の `packaging/README.md` にあります。
