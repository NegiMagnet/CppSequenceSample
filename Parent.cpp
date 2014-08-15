#include "Parent.hpp"
#include "Child.hpp"
#include "Scene1.hpp"

Parent::Parent() {
	// 初期化
	// 最初の遷移先をnew
	_child = new Scene1();
}

void Parent::MainLoop() {
	while(1) {
		// 入力

		// 更新
		Child* next = _child->Update();
		if( next != _child ) {
			delete _child;
			_child = next;
		}

		// 描画
		_child->Draw();

		// フレームレート調整
	}
}
