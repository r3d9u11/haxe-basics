package;

import kha.System;

class Main {
	public static function main() : Void {
		System.init({ title: "Test", width: 320, height: 250 }, function () : Void {
			new KhaApplication();
		});
	}
}
