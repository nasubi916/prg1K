### ゲームの説明
このゲームは
元に制作した"Connect-force"というゲームです｡
私はこのゲームに重力要素を強化したため､fourとforce(重力)と掛けて名付けました｡

コネクト･フォーは別名､重力付き四目並べとも言われており､非常に歴史のある人気なゲームです｡
プレイヤーは交互に駒を落としていき､縦横斜めのどれかで揃えば勝利｡
元にしたゲームのルールはこちらのリンクから確認できます｡説明を省略します｡

[四目並べ](https://www.wikiwand.com/ja/%E5%9B%9B%E7%9B%AE%E4%B8%A6%E3%81%B9)

私はこのゲームをCLIで実装してみたいと思い､制作するにあたり重力は下向きである必要はないと考え､何ターンごとに重力が上下左右に変化するシステムを考えつきました｡
このシステムにより戦略の幅が広がり非常にシンプルながら新しい駆け引きが生まれています｡
通常のコネクトフォーでは一見リーチしていないように見えても､Connect-forceでは重力の変化を利用することでリーチを作ることができます｡
重力に対応したプレイヤーが有利になるため､プレイヤーは重力の変化を予測し､そのタイミングで駒を置くことが重要です｡

### 遊び方
1. 2プレイヤー目を人間かAI(ランダムに動作するだけ)を選択する
2. nターンに一度重力が変化するか設定する
3. ゲーム開始
4. プレイヤーは交互に駒を置く
5. 1~7の数字を入力してcolumnを選択してその場所に自駒を置く
6. nターンに一度重力が変化するとともに選択するのがcolumnからrowへと変化する
7. ルールはただの4目並べと同じく揃うかテーブルが埋まるかでゲームは終了する
	1. 4つ並んで縦横斜めのどれかが揃えば勝ち

### 隠しコマンド
遊び方の2.で"nasubi"と入力すると､ASCIIアートが表示されます｡