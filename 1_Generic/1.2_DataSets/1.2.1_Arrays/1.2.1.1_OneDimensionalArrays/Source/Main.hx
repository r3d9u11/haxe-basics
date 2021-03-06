package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- DECLARATIVE SYNTAX ---');
		
		var a = ['abc', 'def', 'jhi'];
		trace(a);
		
		var i = 0;
		var b = [];
		while(i < 20) {
			b.push(i++);
		}
		trace(b);
		
		//----------------------------------------------------------------------
		trace('--- KEYWORD new AND USING THE CONSTRUCTOR  ---');
		
		var c = new Array(); // https://haxe.org/manual/expression-new.html
		c.push(1);
		c.push(2);
		c.push(3);
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- TECHNIQUE OF THE "SMART" DECLARATION ---');
		
		i = 0;
		var d = [while(i < 10) i++];
		trace(d);
		
		var e = [for (i in 0...10) if (i % 2 == 0) i];
		trace(e);
		
		var f = [
			for (i in 1...11)
				for(j in 2...4)
					if (i % j == 0)
						i + "/" + j
		];
		trace(f);
	}
}
