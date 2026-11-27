# backhaul-sdk（非公開）

backhaul（https://github.com/kajisho5/backhaul）のビルドに使う Zoom Meeting SDK の置き場です。

- このリポは**公開しない**でください。Zoom Meeting SDK は再配布できる前提で置いていません。
- SDK本体（zip）はリリースの添付ファイルとして保管します。
- `headers/` には SDK のヘッダーファイルだけを、`inventory/` には zip の中身の一覧を置きます。
- Zoomの鍵類（Client ID/Secret、ZAK、会議のパスコード）はここにも置きません。

## 取り込み方

Actions の「SDKを取り込む」を、Google Drive のファイルIDを指定して実行します。
実行中だけ、そのファイルが「リンクを知っている全員」に見える設定になっている必要があります。
