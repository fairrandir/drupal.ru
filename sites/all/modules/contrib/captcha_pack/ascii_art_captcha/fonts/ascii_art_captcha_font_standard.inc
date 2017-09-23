<?php
// Font definition based on figlet font "standard" (http://www.figlet.org/)
// as distributed by pyfiglet (http://sourceforge.net/projects/pyfiglet/)

function ASCII_art_captcha_font_standard() {
  $font = array();
  $font['height'] = 6;
  $font['name'] = 'standard';
  $font['comment'] = 'Standard by Glenn Chappell & Ian Chai 3/93 -- based on Frank\'s .sigIncludes ISO Latin-1figlet release 2.1 -- 12 Aug 1994Modified for figlet 2.2 by John Cowan <cowan@ccil.org>  to add Latin-{2,3,4,5} support (Unicode U+0100-017F).Permission is hereby given to modify this font, as long as themodifier\'s name is placed on a comment line.Modified by Paul Burton <solution@earthlink.net> 12/96 to include new parametersupported by FIGlet and FIGWin.  May also be slightly modified for better useof new full-width/kern/smush alternatives, but default output is NOT changed.';
  $font['a'] = array(
    '       ',
    '  __ _ ',
    ' / _` |',
    '| (_| |',
    ' \\__,_|',
    '       ',
  );
  $font['b'] = array(
    ' _     ',
    '| |__  ',
    '| \'_ \\ ',
    '| |_) |',
    '|_.__/ ',
    '       ',
  );
  $font['c'] = array(
    '      ',
    '  ___ ',
    ' / __|',
    '| (__ ',
    ' \\___|',
    '      ',
  );
  $font['d'] = array(
    '     _ ',
    '  __| |',
    ' / _` |',
    '| (_| |',
    ' \\__,_|',
    '       ',
  );
  $font['e'] = array(
    '      ',
    '  ___ ',
    ' / _ \\',
    '|  __/',
    ' \\___|',
    '      ',
  );
  $font['f'] = array(
    '  __ ',
    ' / _|',
    '| |_ ',
    '|  _|',
    '|_|  ',
    '     ',
  );
  $font['g'] = array(
    '       ',
    '  __ _ ',
    ' / _` |',
    '| (_| |',
    ' \\__, |',
    ' |___/ ',
  );
  $font['h'] = array(
    ' _     ',
    '| |__  ',
    '| \'_ \\ ',
    '| | | |',
    '|_| |_|',
    '       ',
  );
  $font['i'] = array(
    ' _ ',
    '(_)',
    '| |',
    '| |',
    '|_|',
    '   ',
  );
  $font['j'] = array(
    '   _ ',
    '  (_)',
    '  | |',
    '  | |',
    ' _/ |',
    '|__/ ',
  );
  $font['k'] = array(
    ' _    ',
    '| | __',
    '| |/ /',
    '|   < ',
    '|_|\\_\\',
    '      ',
  );
  $font['l'] = array(
    ' _ ',
    '| |',
    '| |',
    '| |',
    '|_|',
    '   ',
  );
  $font['m'] = array(
    '           ',
    ' _ __ ___  ',
    '| \'_ ` _ \\ ',
    '| | | | | |',
    '|_| |_| |_|',
    '           ',
  );
  $font['n'] = array(
    '       ',
    ' _ __  ',
    '| \'_ \\ ',
    '| | | |',
    '|_| |_|',
    '       ',
  );
  $font['o'] = array(
    '       ',
    '  ___  ',
    ' / _ \\ ',
    '| (_) |',
    ' \\___/ ',
    '       ',
  );
  $font['p'] = array(
    '       ',
    ' _ __  ',
    '| \'_ \\ ',
    '| |_) |',
    '| .__/ ',
    '|_|    ',
  );
  $font['q'] = array(
    '       ',
    '  __ _ ',
    ' / _` |',
    '| (_| |',
    ' \\__, |',
    '    |_|',
  );
  $font['r'] = array(
    '      ',
    ' _ __ ',
    '| \'__|',
    '| |   ',
    '|_|   ',
    '      ',
  );
  $font['s'] = array(
    '     ',
    ' ___ ',
    '/ __|',
    '\\__ \\',
    '|___/',
    '     ',
  );
  $font['t'] = array(
    ' _   ',
    '| |_ ',
    '| __|',
    '| |_ ',
    ' \\__|',
    '     ',
  );
  $font['u'] = array(
    '       ',
    ' _   _ ',
    '| | | |',
    '| |_| |',
    ' \\__,_|',
    '       ',
  );
  $font['v'] = array(
    '       ',
    '__   __',
    '\\ \\ / /',
    ' \\ V / ',
    '  \\_/  ',
    '       ',
  );
  $font['w'] = array(
    '          ',
    '__      __',
    '\\ \\ /\\ / /',
    ' \\ V  V / ',
    '  \\_/\\_/  ',
    '          ',
  );
  $font['x'] = array(
    '      ',
    '__  __',
    '\\ \\/ /',
    ' >  < ',
    '/_/\\_\\',
    '      ',
  );
  $font['y'] = array(
    '       ',
    ' _   _ ',
    '| | | |',
    '| |_| |',
    ' \\__, |',
    ' |___/ ',
  );
  $font['z'] = array(
    '     ',
    ' ____',
    '|_  /',
    ' / / ',
    '/___|',
    '     ',
  );
  $font['A'] = array(
    '    _    ',
    '   / \\   ',
    '  / _ \\  ',
    ' / ___ \\ ',
    '/_/   \\_\\',
    '         ',
  );
  $font['B'] = array(
    ' ____  ',
    '| __ ) ',
    '|  _ \\ ',
    '| |_) |',
    '|____/ ',
    '       ',
  );
  $font['C'] = array(
    '  ____ ',
    ' / ___|',
    '| |    ',
    '| |___ ',
    ' \\____|',
    '       ',
  );
  $font['D'] = array(
    ' ____  ',
    '|  _ \\ ',
    '| | | |',
    '| |_| |',
    '|____/ ',
    '       ',
  );
  $font['E'] = array(
    ' _____ ',
    '| ____|',
    '|  _|  ',
    '| |___ ',
    '|_____|',
    '       ',
  );
  $font['F'] = array(
    ' _____ ',
    '|  ___|',
    '| |_   ',
    '|  _|  ',
    '|_|    ',
    '       ',
  );
  $font['G'] = array(
    '  ____ ',
    ' / ___|',
    '| |  _ ',
    '| |_| |',
    ' \\____|',
    '       ',
  );
  $font['H'] = array(
    ' _   _ ',
    '| | | |',
    '| |_| |',
    '|  _  |',
    '|_| |_|',
    '       ',
  );
  $font['I'] = array(
    ' ___ ',
    '|_ _|',
    ' | | ',
    ' | | ',
    '|___|',
    '     ',
  );
  $font['J'] = array(
    '     _ ',
    '    | |',
    ' _  | |',
    '| |_| |',
    ' \\___/ ',
    '       ',
  );
  $font['K'] = array(
    ' _  __',
    '| |/ /',
    '| \' / ',
    '| . \\ ',
    '|_|\\_\\',
    '      ',
  );
  $font['L'] = array(
    ' _     ',
    '| |    ',
    '| |    ',
    '| |___ ',
    '|_____|',
    '       ',
  );
  $font['M'] = array(
    ' __  __ ',
    '|  \\/  |',
    '| |\\/| |',
    '| |  | |',
    '|_|  |_|',
    '        ',
  );
  $font['N'] = array(
    ' _   _ ',
    '| \\ | |',
    '|  \\| |',
    '| |\\  |',
    '|_| \\_|',
    '       ',
  );
  $font['O'] = array(
    '  ___  ',
    ' / _ \\ ',
    '| | | |',
    '| |_| |',
    ' \\___/ ',
    '       ',
  );
  $font['P'] = array(
    ' ____  ',
    '|  _ \\ ',
    '| |_) |',
    '|  __/ ',
    '|_|    ',
    '       ',
  );
  $font['Q'] = array(
    '  ___  ',
    ' / _ \\ ',
    '| | | |',
    '| |_| |',
    ' \\__\\_\\',
    '       ',
  );
  $font['R'] = array(
    ' ____  ',
    '|  _ \\ ',
    '| |_) |',
    '|  _ < ',
    '|_| \\_\\',
    '       ',
  );
  $font['S'] = array(
    ' ____  ',
    '/ ___| ',
    '\\___ \\ ',
    ' ___) |',
    '|____/ ',
    '       ',
  );
  $font['T'] = array(
    ' _____ ',
    '|_   _|',
    '  | |  ',
    '  | |  ',
    '  |_|  ',
    '       ',
  );
  $font['U'] = array(
    ' _   _ ',
    '| | | |',
    '| | | |',
    '| |_| |',
    ' \\___/ ',
    '       ',
  );
  $font['V'] = array(
    '__     __',
    '\\ \\   / /',
    ' \\ \\ / / ',
    '  \\ V /  ',
    '   \\_/   ',
    '         ',
  );
  $font['W'] = array(
    '__        __',
    '\\ \\      / /',
    ' \\ \\ /\\ / / ',
    '  \\ V  V /  ',
    '   \\_/\\_/   ',
    '            ',
  );
  $font['X'] = array(
    '__  __',
    '\\ \\/ /',
    ' \\  / ',
    ' /  \\ ',
    '/_/\\_\\',
    '      ',
  );
  $font['Y'] = array(
    '__   __',
    '\\ \\ / /',
    ' \\ V / ',
    '  | |  ',
    '  |_|  ',
    '       ',
  );
  $font['Z'] = array(
    ' _____',
    '|__  /',
    '  / / ',
    ' / /_ ',
    '/____|',
    '      ',
  );
  $font['0'] = array(
    '  ___  ',
    ' / _ \\ ',
    '| | | |',
    '| |_| |',
    ' \\___/ ',
    '       ',
  );
  $font['1'] = array(
    ' _ ',
    '/ |',
    '| |',
    '| |',
    '|_|',
    '   ',
  );
  $font['2'] = array(
    ' ____  ',
    '|___ \\ ',
    '  __) |',
    ' / __/ ',
    '|_____|',
    '       ',
  );
  $font['3'] = array(
    ' _____ ',
    '|___ / ',
    '  |_ \\ ',
    ' ___) |',
    '|____/ ',
    '       ',
  );
  $font['4'] = array(
    ' _  _   ',
    '| || |  ',
    '| || |_ ',
    '|__   _|',
    '   |_|  ',
    '        ',
  );
  $font['5'] = array(
    ' ____  ',
    '| ___| ',
    '|___ \\ ',
    ' ___) |',
    '|____/ ',
    '       ',
  );
  $font['6'] = array(
    '  __   ',
    ' / /_  ',
    '| \'_ \\ ',
    '| (_) |',
    ' \\___/ ',
    '       ',
  );
  $font['7'] = array(
    ' _____ ',
    '|___  |',
    '   / / ',
    '  / /  ',
    ' /_/   ',
    '       ',
  );
  $font['8'] = array(
    '  ___  ',
    ' ( _ ) ',
    ' / _ \\ ',
    '| (_) |',
    ' \\___/ ',
    '       ',
  );
  $font['9'] = array(
    '  ___  ',
    ' / _ \\ ',
    '| (_) |',
    ' \\__, |',
    '   /_/ ',
    '       ',
  );

  return $font;
}