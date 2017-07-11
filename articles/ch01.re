= シュタインズゲート世界線に至るまでの道のり

GitをGitHubの開発の流れに沿って使った場合、masterブランチはいつでもリリース可能なものとなります@<fn>{github-flow-japanese}。
//footnote[github-flow-japanese][https://gist.github.com/Gab-km/3705015]
Steins;Gateはmasterブランチを「シュタインズゲート」バージョンとしてリリース可能にするために岡部倫太郎が試行錯誤し、ブランチという世界線間を@<code>{git checkout}していきます。

Steins;Gateは、アトラクタフィールドβから始まりました。これはGitのタグで `beta` というタグが作られた状態です。
1.130426ブランチに岡部倫太郎の「紅莉栖が刺された」というDメールをコミットして電話レンジ（仮）というリモートリポジトリにプッシュしたあと、`alpha` というタグが作られました@<fn>{software-version}。
//footnote[software-version][ソフトウェアのバージョンはα→β→RC→GAと進んでいきますがSteins;Gateのストーリー上これに依らない流れになっています]
これでアトラクタフィールドαへ移動した状態です。
