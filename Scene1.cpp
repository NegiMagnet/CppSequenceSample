#include "Scene1.hpp"
#include "Scene2.hpp"

Child* Scene1::Update() {
	Child* next = this;

	if( /* 移動トリガー */ ) {
		next = new Scene2();
	}

	return next;
}

void Scene1::Draw() {
	// 画面描画
}
