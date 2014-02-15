#ifndef INCLUDED_CHARACTER_H
#define INCLUDED_CHARACTER_H

class Character{
private:
	// 画像情報
	int witdh;
	int height;
	// 描画対象へのインデクス
	int ghIndex;
	// グラフィックハンドラ
	int gh[12];
	// 現在位置(中心座標)
	double posX;
	double posY;
	int flag;	// フラグ
	int cnt;	// カウンタ
	int power;	// パワー
	int point;	// ポイント
	int score;	// スコア
	int num;	// 残機数
	int mutelicnt; // 無敵状態とカウント
	int muney;	// お金
	int slow;	// スローか否か
public:
	Character();
	Character(int x, int y);
	~Character();
	void init();
	void draw();	// 現在位置に描画
	void update();

	void setPosX(double x){posX = x;}
	void setPosY(double y){posY = y;}
	double getPosX(){return posX;}
	double getPosY(){return posY;}
};

#endif