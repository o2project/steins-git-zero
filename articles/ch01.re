= シュタインズゲート世界線に至るまでの道のり

GitをGitHubの開発の流れに沿って使った場合、masterブランチはいつでもリリース可能なものとなります@<fn>{github-flow-japanese}。
//footnote[github-flow-japanese][https://gist.github.com/Gab-km/3705015]
Steins;Gateはmasterブランチを「シュタインズゲート」バージョンとしてリリース可能にするために岡部倫太郎が試行錯誤し、ブランチという世界線間を@<code>{git checkout}していきます。

Steins;Gateは、アトラクタフィールドβから始まりました。これはGitのタグで `beta` というタグが作られた状態です。
1.130426ブランチに岡部倫太郎の「紅莉栖が刺された」というDメールをコミットして電話レンジ（仮）というリモートリポジトリにプッシュしたあと、`alpha` というタグが作られました@<fn>{software-version}。
//footnote[software-version][ソフトウェアのバージョンはα→β→RC→GAと進んでいきますがSteins;Gateのストーリー上これに依らない流れになっています]
これでアトラクタフィールドαへ移動した状態です。

そこから電話レンジ（仮）がリモートリポジトリとして動くのか試すべく、岡部倫太郎はロト6を買うように薦めるコミットをして電話レンジ（仮）へプッシュします。
結果、0.571024ブランチを元に0.571015ブランチが新しく作られます。

0.571015ブランチでは柳林神社からIBN5100を未来ガジェット研究所へ@<code>{git clone}します。
なお@<code>{git clone}はリポジトリのコピーを作るコマンドです。
今回の場合、柳林神社から未来ガジェット研究所へIBN5100をコピーするのではなく移動したため、@<code>{git clone}とは違いますがご了承ください。

IBN5100を未来ガジェット研究所へ@<code>{git clone}したのはいいのですが、その後桐生萌郁に電話レンジ（仮）の存在が知られてしまい、桐生萌郁が電話レンジ（仮）へ柳林神社にIBN5100がある旨のコミットをしたあとにプッシュします。
これにより0.523299ブランチが新しく作られ、先ほど@<code>{git clone}したIBN5100が無くなります。
