#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	struct<18> Local_18 = { 0, -1474589744, 391506844, -294392875, 0, 0, 0, 0, 0, 0, 1050253722, 1036831949, 1090519040, 1092616192, 1065353216, 1065353216, 1073741824, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1097859072;
	var uLocal_54 = 1000;
	var uLocal_55 = 1067450368;
	var uLocal_56 = 5000;
	var uLocal_57 = 42;
	var uLocal_58 = 1103626240;
	var uLocal_59 = 1077936128;
	var uLocal_60 = 1106247680;
	var uLocal_61 = 1103101952;
	var uLocal_62 = 1097859072;
	var uLocal_63 = 1103626240;
	var uLocal_64 = 0;
	struct<4> Local_65 = { 0, 0, 0, 0 } ;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	struct<4> Local_77 = { 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<4> Local_89 = { 0, 0, 0, 0 } ;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<4> Local_101 = { 0, 0, 0, 0 } ;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<4> Local_113 = { 0, 0, 0, 0 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<4> Local_125 = { 0, 0, 0, 0 } ;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = false;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = false;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = false;
	int iLocal_162 = 0;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	bool bLocal_168 = false;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_179[2] = { 0, 0 };
	int iLocal_182 = 0;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	float fLocal_187 = 0f;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	struct<22> Local_198 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_220 = 3;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	struct<22> Local_223 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	struct<22> Local_248 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_270 = 3;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282[2] = { 0, 0 };
	int iLocal_285[5] = { 0, 0, 0, 0, 0 };
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	var uLocal_310[2] = { 0, 0 };
	int iLocal_313 = 0;
	var uLocal_314 = -1;
	var uLocal_315 = 0;
	var uLocal_316 = -1;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = -1;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 1073741824;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 1;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1106247680;
	var uLocal_340 = 1067450368;
	var uLocal_341 = 0;
	var uLocal_342 = 1092616192;
	var uLocal_343 = 1112014848;
	var uLocal_344 = 1106247680;
	var uLocal_345 = 1101529088;
	var uLocal_346 = 1101004800;
	var uLocal_347 = 1084227584;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	struct<17> Local_374[1];
	int iLocal_392 = 0;
	var uLocal_393 = -1;
	var uLocal_394 = 0;
	var uLocal_395 = -1;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = -1;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 1073741824;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 1;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 1106247680;
	var uLocal_419 = 1067450368;
	var uLocal_420 = 0;
	var uLocal_421 = 1092616192;
	var uLocal_422 = 1112014848;
	var uLocal_423 = 1106247680;
	var uLocal_424 = 1101529088;
	var uLocal_425 = 1101004800;
	var uLocal_426 = 1084227584;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	struct<17> Local_453[1];
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	char* sLocal_479 = NULL;
	char* sLocal_480 = NULL;
	char* sLocal_481 = NULL;
	char* sLocal_482 = NULL;
	char* sLocal_483 = NULL;
	char* sLocal_484 = NULL;
	char* sLocal_485 = NULL;
	char* sLocal_486 = NULL;
	char* sLocal_487 = NULL;
	char* sLocal_488 = NULL;
	char* sLocal_489 = NULL;
	char* sLocal_490 = NULL;
	char* sLocal_491 = NULL;
	char* sLocal_492 = NULL;
	char* sLocal_493 = NULL;
	char* sLocal_494 = NULL;
	char* sLocal_495 = NULL;
	char* sLocal_496 = NULL;
	char* sLocal_497 = NULL;
	char* sLocal_498 = NULL;
	char* sLocal_499 = NULL;
	char* sLocal_500 = NULL;
	char* sLocal_501 = NULL;
	char* sLocal_502 = NULL;
	char* sLocal_503 = NULL;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561[2] = { 0, 0 };
	vector3 vLocal_564 = { 0f, 0f, 0f };
	float fLocal_567 = 0f;
	vector3 vLocal_568 = { 0f, 0f, 0f };
	float fLocal_571 = 0f;
	vector3 vLocal_572 = { 0f, 0f, 0f };
	vector3 vLocal_575 = { 0f, 0f, 0f };
	float fLocal_578 = 0f;
	vector3 vLocal_579 = { 0f, 0f, 0f };
	float fLocal_582 = 0f;
	vector3 vLocal_583 = { 0f, 0f, 0f };
	float fLocal_586 = 0f;
	vector3 vLocal_587 = { 0f, 0f, 0f };
	float fLocal_590 = 0f;
	vector3 vLocal_591 = { 0f, 0f, 0f };
	vector3 vLocal_594 = { 0f, 0f, 0f };
	float fLocal_597 = 0f;
	vector3 vLocal_598 = { 0f, 0f, 0f };
	float fLocal_601 = 0f;
	vector3 vLocal_602 = { 0f, 0f, 0f };
	vector3 vLocal_605 = { 0f, 0f, 0f };
	float fLocal_608 = 0f;
	vector3 vLocal_609 = { 0f, 0f, 0f };
	float fLocal_612 = 0f;
	vector3 vLocal_613[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_620[2] = { 0f, 0f };
	vector3 vLocal_623[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_642[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_649[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_668[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_675 = { 0f, 0f, 0f };
	vector3 vLocal_678 = { 0f, 0f, 0f };
	vector3 vLocal_681 = { 0f, 0f, 0f };
	vector3 vLocal_684 = { 0f, 0f, 0f };
	float fLocal_687 = 0f;
	vector3 vLocal_688 = { 0f, 0f, 0f };
	vector3 vLocal_691 = { 0f, 0f, 0f };
	float fLocal_694 = 0f;
	vector3 vLocal_695 = { 0f, 0f, 0f };
	float fLocal_698 = 0f;
	vector3 vLocal_699 = { 0f, 0f, 0f };
	float fLocal_702 = 0f;
	vector3 vLocal_703 = { 0f, 0f, 0f };
	vector3 vLocal_706 = { 0f, 0f, 0f };
	vector3 vLocal_709 = { 0f, 0f, 0f };
	vector3 vLocal_712 = { 0f, 0f, 0f };
	vector3 vLocal_715 = { 0f, 0f, 0f };
	vector3 vLocal_718 = { 0f, 0f, 0f };
	vector3 vLocal_721 = { 0f, 0f, 0f };
	vector3 vLocal_724 = { 0f, 0f, 0f };
	vector3 vLocal_727 = { 0f, 0f, 0f };
	vector3 vLocal_730 = { 0f, 0f, 0f };
	vector3 vLocal_733 = { 0f, 0f, 0f };
	vector3 vLocal_736 = { 0f, 0f, 0f };
	vector3 vLocal_739 = { 0f, 0f, 0f };
	vector3 vLocal_742 = { 0f, 0f, 0f };
	vector3 vLocal_745 = { 0f, 0f, 0f };
	vector3 vLocal_748 = { 0f, 0f, 0f };
	vector3 vLocal_751 = { 0f, 0f, 0f };
	vector3 vLocal_754 = { 0f, 0f, 0f };
	vector3 vLocal_757 = { 0f, 0f, 0f };
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	char* sLocal_815[3] = { NULL, NULL, NULL };
	int iLocal_819[3] = { 0, 0, 0 };
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	struct<9> Local_825[11];
	float fLocal_925 = 0f;
	struct<6> Local_926[13];
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	vector3 vLocal_1007 = { 0f, 0f, 0f };
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	int iLocal_1014 = 0;
	bool bLocal_1015 = false;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	vector3 vLocal_1019 = { 0f, 0f, 0f };
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	float fLocal_1028 = 0f;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	int iLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	vector3 vLocal_1038 = { 0f, 0f, 0f };
	int iLocal_1041 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;
	
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	bLocal_161 = true;
	iLocal_167 = 1;
	fLocal_185 = 0f;
	fLocal_187 = 1000f;
	iLocal_273 = 388126459;
	iLocal_274 = -1367341904;
	iLocal_275 = 1785480577;
	iLocal_276 = 1789147356;
	iLocal_277 = -1629442620;
	iLocal_278 = -1018099626;
	iLocal_279 = 918835244;
	iLocal_280 = -2102031605;
	iLocal_281 = -1250098797;
	sLocal_479 = "NULL";
	sLocal_480 = "NULL";
	sLocal_481 = "p_cs_flowernecklace";
	sLocal_482 = "P_CS_FLOWERS01X";
	sLocal_483 = "s_inv_yarrow01cx";
	sLocal_484 = "p_fishingpole01x";
	sLocal_485 = "P_STICK02X";
	sLocal_486 = "P_CS_SOCK01X";
	sLocal_490 = "mini_games@fishing@shore_child";
	sLocal_491 = "script_rc@abi1@ig@rabi1_bait_rod_jack_child";
	sLocal_492 = "base_2h_2_idle";
	sLocal_493 = "base_2h_idle_a";
	sLocal_494 = "bait_rod_jack_child_ig_jackmarston";
	sLocal_495 = "bait_rod_jack_child_p_fishingpole01x";
	sLocal_496 = "idle_2_base_2h";
	sLocal_497 = "cast_intro";
	sLocal_498 = "cast_action";
	sLocal_499 = "base_reel_idle_a";
	sLocal_500 = "base_reel_idle_c";
	sLocal_501 = "base_reel_idle_d";
	sLocal_502 = "base_reel_idle_e";
	sLocal_503 = "reel_in";
	vLocal_564 = { -147.8866f, -14.662f, 95.3018f };
	fLocal_567 = 96.3018f;
	vLocal_568 = { -121.3928f, -15.9465f, 95.1901f };
	fLocal_571 = 164.8433f;
	vLocal_572 = { -148.3965f, -14.4253f, 95.4101f };
	vLocal_575 = { -151.3511f, -17.5629f, 95.2518f };
	fLocal_578 = 311.6641f;
	vLocal_579 = { -166.702f, -34.8575f, 93.8508f };
	fLocal_582 = 267.9794f;
	vLocal_583 = { -131.2237f, -31.2469f, 95.1752f };
	fLocal_586 = 209.4253f;
	vLocal_587 = { -472.1521f, 200.4329f, 41.0107f };
	fLocal_590 = 227.3212f;
	vLocal_591 = { 2f, 0f, 0f };
	vLocal_594 = { -110.6658f, -24.1952f, 94.7146f };
	fLocal_597 = 298.6764f;
	vLocal_598 = { -116.7768f, -21.0371f, 94.9108f };
	fLocal_601 = 26.3152f;
	vLocal_602 = { -465.4346f, 187.5489f, 40.5736f };
	vLocal_605 = { -467.3456f, 202.6058f, 41.4f };
	fLocal_608 = 0f;
	vLocal_609 = { -468.628f, 190.187f, 41.2516f };
	fLocal_612 = 17.8276f;
	vLocal_675 = { -468.2877f, 188.7003f, 40.4181f };
	vLocal_678 = { -455.052f, 203.816f, 42.72f };
	vLocal_684 = { -114.63f, -18.7636f, 94.9146f };
	fLocal_687 = 75.3856f;
	vLocal_688 = { -468.128f, 202.924f, 41.43834f };
	vLocal_691 = { -115.1909f, -18.3412f, 94.9308f };
	fLocal_694 = 72.8093f;
	vLocal_695 = { -108.3717f, -34.1668f, 94.9754f };
	fLocal_698 = 338.3777f;
	vLocal_699 = { -106.8982f, -34.3779f, 94.9737f };
	fLocal_702 = 342.2831f;
	vLocal_703 = { 0f, 0f, 0f };
	vLocal_706 = { 0f, 0f, 0f };
	vLocal_709 = { 0f, 0f, 0f };
	vLocal_712 = { 0f, 0f, 0f };
	vLocal_715 = { 0f, -0.08f, -0.254f };
	vLocal_718 = { 0f, 0f, 0f };
	vLocal_721 = { 0.29f, -0.022f, -0.078f };
	vLocal_724 = { 75.996f, 0f, -2.8f };
	vLocal_727 = { -118.61f, -16.68f, 95.16f };
	vLocal_730 = { 6.42f, -23.01f, -158.2f };
	vLocal_733 = { -118.786f, -25.294f, 97.227f };
	vLocal_736 = { 0f, 0f, 150f };
	vLocal_739 = { 19f, 25f, 5f };
	vLocal_742 = { -458.917f, 183.647f, 40.418f };
	vLocal_745 = { 22f, 8f, 14f };
	vLocal_748 = { -455.204f, 182.101f, 40.418f };
	vLocal_751 = { 30f, 8f, 14f };
	vLocal_754 = { 0f, 0f, 157.4f };
	vLocal_757 = { -147.8866f, -14.662f, 95.3018f };
	fLocal_1028 = 8f;
	vLocal_1038 = { -168.8901f, -38.2667f, 92.8671f };
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		func_1(&(Var0.f_172), 4096);
	}
	else
	{
		func_2(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (func_6(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					func_8(&Var0);
					break;
				
				case 1:
					func_9(&Var0);
					break;
				
				case 3:
					func_10(&Var0);
					break;
				
				case 4:
					func_11(&Var0);
					break;
				
				case 2:
					func_12(&Var0);
					break;
				
				case 5:
					func_13(&Var0);
					break;
				
				case 6:
					func_14(&Var0);
					break;
				
				case 7:
					func_15(&Var0);
					break;
				
				case 8:
					func_16(&Var0);
					break;
				
				case 9:
					func_17(&Var0, 0);
					break;
				
				case 10:
					func_18(&Var0);
					break;
				
				case 11:
					if (Var0.f_174 == func_19())
					{
						func_20();
						func_21();
					}
					func_22(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_3(var uParam0)
{
	int iVar0;
	
	if (&Global_1879534 == 1)
	{
		func_23(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	if (func_6(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_24(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		func_25(uParam0);
	}
	func_26(&(uParam0->f_753));
	func_22(uParam0);
}

void func_4(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (uParam0->f_174 == func_19())
	{
		bVar0 = true;
	}
	else if (func_27(uParam0))
	{
		bVar0 = true;
		func_28(uParam0, 128);
	}
	if (bVar0)
	{
		func_28(uParam0, 64);
		if (func_29())
		{
			func_28(uParam0, 128);
		}
		func_30(0, 0);
	}
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!func_32(uParam0, 64))
	{
		func_33(uParam0->f_174, 1);
		func_34(uParam0->f_174, 1);
	}
	func_35(uParam0->f_174);
	func_36(uParam0);
	func_37(uParam0);
	func_38(uParam0, 0, 0, 0, -1, -1, 0);
	func_39(uParam0, 0, 0, 0, -1, -1, 0);
	func_40(&(uParam0->f_178));
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 != 0)
	{
		func_41(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, 7);
	}
	func_42(uParam0);
	func_43(uParam0, 1);
	iVar1 = func_44(uParam0);
	if (!func_6(uParam0->f_172, 8388608) && func_45(uParam0))
	{
		iVar1 = 4;
	}
	if (!func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !func_45(uParam0))
		{
			func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		}
	}
	func_48();
	func_49(uParam0, iVar1);
}

void func_5(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	
	if (func_6(uParam0->f_172, 50331648))
	{
		return;
	}
	if (func_50())
	{
		func_1(&(uParam0->f_172), 16777216);
		if (!func_6(uParam0->f_172, 8))
		{
			func_51(uParam0, 14);
		}
		return;
	}
	else if (func_52())
	{
		func_1(&(uParam0->f_172), 33554432);
		if (!func_6(uParam0->f_172, 8))
		{
			func_51(uParam0, 15);
		}
		return;
	}
	if (func_53(uParam0))
	{
		return;
	}
	func_2(&(uParam0->f_172), 64);
	func_2(&(uParam0->f_172), 128);
	if (func_6(uParam0->f_172, 67108864))
	{
		func_54(1);
		func_2(&(uParam0->f_172), 67108864);
	}
	func_55(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (func_6(uParam0->f_172, 4096))
	{
		iVar0 = func_56(0);
		if (!func_57(iVar0) || ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15 == iVar0)
		{
			func_2(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!func_6(uParam0->f_172, 8) && func_58())
	{
		if (uParam0->f_174 != 59 || !func_59(97))
		{
			if (uParam0->f_174 != 155 || !func_59(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (func_32(uParam0, 32))
			{
				if (!func_32(uParam0, 64))
				{
					if (!func_60(32768))
					{
						Var1 = { func_61(0) };
						if (func_62(&Var1))
						{
							func_63(uParam0, 32);
						}
					}
					else
					{
						func_63(uParam0, 32);
					}
				}
				else
				{
					func_63(uParam0, 32);
				}
			}
			if (func_64(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_49(uParam0, 9);
					return;
				}
			}
			else if (func_65(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_49(uParam0, 8);
					return;
				}
			}
			if (!func_6(uParam0->f_172, 131072))
			{
				if (!Global_1935630->f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_6(uParam0->f_172, 268435456))
			{
				func_66();
			}
			if (!func_6(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_6(uParam0->f_172, 1073741824))
			{
				func_67(1, 0);
			}
			func_68(uParam0);
		}
		else if (!func_32(uParam0, 64) && !func_27(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(func_69(uParam0->f_174), Global_36);
			if (func_70(uParam0))
			{
				if (func_71(uParam0) == 2 || func_71(uParam0) == 12)
				{
					func_22(uParam0);
					return;
				}
				func_72(uParam0);
				func_49(uParam0, 10);
				return;
			}
			else
			{
				func_73(uParam0);
			}
			func_74(uParam0);
		}
	}
	func_75(uParam0);
	if (func_6(uParam0->f_172, 32))
	{
		func_77(uParam0, func_76(uParam0));
	}
	else if (func_6(uParam0->f_172, 8))
	{
		if (func_78(uParam0))
		{
		}
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_7(var uParam0)
{
	if (func_6(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!func_79(&(uParam0->f_2597)))
		{
			func_80(&(uParam0->f_2597), 0);
		}
		func_81(uParam0);
		if (func_82(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				func_25(uParam0);
			}
			else
			{
				func_72(uParam0);
			}
			func_22(uParam0);
		}
	}
}

void func_8(var uParam0)
{
	if (!func_83(64))
	{
		return;
	}
	if (func_84())
	{
		if (Global_1310720->f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && func_27(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 8192))
	{
		func_49(uParam0, 1);
	}
}

void func_9(var uParam0)
{
	if (func_85(uParam0))
	{
		if (func_32(uParam0, 64))
		{
			func_86(uParam0);
			func_49(uParam0, 2);
			func_78(uParam0);
		}
		else if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			func_49(uParam0, 3);
		}
		else
		{
			func_87(uParam0);
			func_49(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	
	if (!func_79(&(uParam0->f_2585)) || IntToFloat(func_82(&(uParam0->f_2585))) > func_88(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
		iVar0 = func_89(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_86(uParam0);
				func_78(uParam0);
			}
			func_49(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	
	if (!func_83(64))
	{
		return;
	}
	if (func_84())
	{
		return;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = func_93(uParam0);
		if (iVar0 == 5)
		{
			func_94(uParam0, 4);
			func_13(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			func_94(uParam0, 4);
			func_14(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (func_27(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		func_78(uParam0);
		func_49(uParam0, iVar0);
	}
}

void func_12(var uParam0)
{
	if (!func_6(uParam0->f_172, 8192))
	{
		return;
	}
	func_49(uParam0, func_96(uParam0, func_95(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		func_97(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_13(var uParam0)
{
	if (func_98(uParam0))
	{
		func_14(uParam0);
		func_49(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	
	func_99(uParam0);
	if (func_100(&(uParam0->f_2575)))
	{
		if (func_101(uParam0))
		{
			func_102(uParam0, 1);
			iVar0 = func_103(uParam0);
			func_49(uParam0, iVar0);
		}
	}
	else
	{
		func_2(&(uParam0->f_172), 16);
		func_102(uParam0, 0);
		iVar0 = func_103(uParam0);
		func_49(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	
	if (func_104(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 262144))
	{
		func_106(uParam0, func_105(uParam0));
	}
	iVar0 = func_107(uParam0);
	if (iVar0 == 5)
	{
		func_94(uParam0, 7);
		func_13(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		func_94(uParam0, 7);
		func_14(uParam0);
	}
	func_49(uParam0, iVar0);
}

void func_16(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;
	
	if (uParam0->f_177 != 8)
	{
		func_49(uParam0, 8);
	}
	if (func_6(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_0x1B065A2BF7953815(1) == 1)
		{
			return;
		}
	}
	if (func_71(uParam0) != 0)
	{
		func_51(uParam0, 0);
		if (func_108(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			if (!STATS::_0x01F4D242765C6B24(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
				STATS::_0xCA41E86545413B5B(func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_112(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), Global_36);
			}
			if (!STATS::_0x01F4D242765C6B24(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), 0);
			}
		}
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_113();
			func_114(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0);
		}
		func_115(uParam0->f_174, 1);
		func_116(uParam0);
		func_118(func_117(), 0);
		if (func_6(uParam0->f_172, 8))
		{
			func_119(uParam0, 0, 1);
			if (func_120(uParam0->f_174, 128))
			{
				func_121(uParam0->f_174, 128);
			}
		}
		func_122(uParam0);
		if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
		{
			if (func_6(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				func_48();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				func_123(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
				func_124();
				func_125(Global_1935630, 8);
			}
			MemCopy(&vVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_1}, 3);
			StringConCat(&vVar0, "_obj", 24);
			if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4))
			{
				if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&vVar0))
					{
						func_126(uParam0, &vVar0, 1, 7500, 0, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = func_127();
			func_128(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (func_6(uParam0->f_172, 8))
			{
				iVar4 = func_95(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = func_109(func_129(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = func_71(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = func_130(0);
				TELEMETRY::_0xD894437E12C17AEC(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					func_20();
					func_21();
				}
			}
		}
	}
	if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
	{
		if (func_27(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_131();
			func_132(0);
		}
		else if (func_6(uParam0->f_172, 32768))
		{
			func_133(1, 1);
			func_1(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (func_6(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_134(1);
		func_135();
		func_136(6);
		func_137(4096);
	}
	func_72(uParam0);
	if (func_6(uParam0->f_172, 32768) || func_27(uParam0))
	{
		func_22(uParam0);
	}
	func_49(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	func_49(uParam0, 9);
	if (func_71(uParam0) != 1)
	{
		func_51(uParam0, 1);
		if (func_120(uParam0->f_174, 128))
		{
			func_121(uParam0->f_174, 128);
		}
		func_138(uParam0);
	}
	if (func_6(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	func_115(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == func_19())
		{
			func_20();
			func_21();
		}
	}
	else
	{
		bVar0 = false;
		if (func_6(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || func_6(uParam0->f_172, 134217728))
		{
			if (!func_79(&(uParam0->f_2597)))
			{
				func_80(&(uParam0->f_2597), 0);
			}
			func_81(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_6(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					func_139(1, 1);
					return;
				}
				else
				{
					func_1(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_2(&(uParam0->f_172), 134217728);
			}
			else if (func_82(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_2(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (func_6(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (func_6(uParam0->f_172, 16777216))
		{
			iVar3 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_KO", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_DEAD", 24);
			}
		}
		else if (func_6(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		func_141(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, iVar3, &(uParam0->f_2578), func_140(uParam0), 0, bVar0);
	}
	if (func_6(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_48();
		func_125(Global_1935630, 8);
	}
	if (func_142(&(uParam0->f_2605)))
	{
		func_143(uParam0);
	}
	func_144(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
	bParam1 = true;
	if (func_6(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_72(uParam0);
	}
	if (bParam1)
	{
		func_22(uParam0);
	}
	else
	{
		func_49(uParam0, 10);
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37);
		uParam0->f_743 = BUILTIN::VDIST2(func_69(uParam0->f_174), Global_36);
		func_145(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (func_146(64, 1, 1))
	{
		iVar1 = func_56(0);
		if (func_57(iVar1))
		{
			func_25(uParam0);
			func_22(uParam0);
			return;
		}
	}
	if (func_147(uParam0) && func_148())
	{
		func_25(uParam0);
		func_22(uParam0);
	}
	else if (!func_79(&(uParam0->f_2585)) || IntToFloat(func_82(&(uParam0->f_2585))) > func_149(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
		if (func_150(uParam0))
		{
			func_49(uParam0, 11);
		}
	}
}

int func_19()
{
	return func_152(func_151());
}

void func_20()
{
	int iVar0;
	
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_21()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_153(0);
	func_154(0);
	func_155(0);
	func_156(0);
	func_157(0);
	func_158(1f);
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_159(uParam0);
	func_160(uParam0->f_751);
	func_161(uParam0);
	func_162(uParam0);
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_166(2);
	iVar0 = 0;
	bVar2 = false;
	if (func_167(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		func_168(iVar1, 1, -1082130432, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (func_71(uParam0) == 2)
	{
		func_23(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	else
	{
		func_169(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), 1, 0, 1);
	}
	((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	func_170(uParam0);
	func_171(uParam0);
	if (func_71(uParam0) == 0)
	{
		func_172(uParam0->f_174);
	}
	if (func_71(uParam0) == 2 || func_71(uParam0) == 12)
	{
		func_173(uParam0->f_174);
	}
	if (func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		func_175(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0, 2);
	}
	func_102(uParam0, 0);
	if (func_6(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_35 != -1)
	{
		func_177(uParam0->f_174, 0);
	}
	if (func_71(uParam0) == 12)
	{
		func_115(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && func_56(0) == Global_1888801[16 /*35*/])
		{
			func_178(uParam0->f_174, 8192);
		}
	}
	func_179(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 32768);
	func_180(uParam0);
	func_48();
	func_181(0);
	func_181(1);
	func_182(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_23(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_24(var uParam0, int iParam1)
{
}

void func_25(var uParam0)
{
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2));
				if (func_183(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), 0, 1);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	if (func_60(32768) && func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 8192))
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_29()
{
	return Global_1572864->f_13;
}

void func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

bool func_31(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_33(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_21 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_22 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 128 != 0)
	{
		return 1;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_45 = func_184(((*Global_1347702)[iParam0 /*49*/])->f_24, 1);
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 128);
	return 1;
}

void func_36(var uParam0)
{
	int iVar0;
	
	func_185(uParam0, 3f);
	func_186(uParam0, 5f);
	func_187(uParam0, 4);
	func_188(uParam0, 12);
	func_189();
	func_190();
	iLocal_282[0] = 1593035738;
	iLocal_282[1] = -444610976;
	iLocal_172[0] = 0;
	iLocal_172[1] = 0;
	iLocal_172[2] = 0;
	iLocal_179[0] = 0;
	iLocal_179[1] = 0;
	func_191();
	iLocal_285[0] = -2116748615;
	iLocal_285[1] = 264156159;
	iLocal_285[2] = 706485280;
	iLocal_285[3] = 1520661;
	iLocal_285[4] = 1860580756;
	if (func_192(0))
	{
		iLocal_781 = 0;
	}
	else
	{
		iLocal_781 = 1;
	}
	sLocal_815[0] = "RAB1_RESTART_2";
	sLocal_815[1] = "RAB1_RESTART_3";
	sLocal_815[2] = "RAB1_RESTART_4";
	*(vLocal_613[0 /*3*/]) = { -446.7768f, 196.5367f, 42.9604f };
	fLocal_620[0] = 62.4146f;
	*(vLocal_613[1 /*3*/]) = { -448.353f, 198.1722f, 43.4099f };
	fLocal_620[1] = 71.2796f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_819[iVar0] = 0;
		iVar0++;
	}
}

void func_37(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_0xED9582B3DA8F02B4(uParam0->f_748);
	}
}

void func_38(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		if (uParam0->f_741 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopMoveRestrict", 64);
		vVar8 = { uParam0->f_741, uParam0->f_741, uParam0->f_741 };
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_69(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		if (uParam0->f_742 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopSpawnRestrict", 64);
		vVar8 = { uParam0->f_742, uParam0->f_742, uParam0->f_742 };
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_69(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_40(var uParam0)
{
	func_193(uParam0);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_194(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_195(&(uParam0->f_41));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_41[iVar0 /*3*/] = iParam1;
	(uParam0->f_41[iVar0 /*3*/])->f_2 = ((uParam0->f_41[iVar0 /*3*/])->f_2 || iParam2);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

void func_42(var uParam0)
{
	int iVar0;
	
	func_196(uParam0, 0);
	func_41(uParam0, iLocal_273, 7);
	func_41(uParam0, iLocal_274, 2);
	func_41(uParam0, iLocal_275, 7);
	func_41(uParam0, iLocal_276, 2);
	func_41(uParam0, &(iLocal_282[0]), 2);
	func_41(uParam0, &(iLocal_282[1]), 2);
	func_41(uParam0, iLocal_278, 2);
	func_41(uParam0, iLocal_279, 2);
	func_41(uParam0, iLocal_277, 2);
	func_41(uParam0, iLocal_280, 1);
	func_41(uParam0, iLocal_281, 7);
	func_197(uParam0, sLocal_490, 2);
	func_197(uParam0, sLocal_491, 2);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_815[iVar0]));
		iVar0++;
	}
}

void func_43(var uParam0, int iParam1)
{
	if (func_198(uParam0) == iParam1)
	{
		return;
	}
	func_199(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	func_2(&(uParam0->f_172), 8192);
}

int func_44(var uParam0)
{
	return 0;
}

int func_45(var uParam0)
{
	if (func_32(uParam0, 64))
	{
		return 0;
	}
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_200(uParam0->f_174))
	{
		return 1;
	}
	return 0;
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_48()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		func_94(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

int func_50()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 1;
	}
	else if (Global_1935630->f_12)
	{
		return 1;
	}
	else if (PED::IS_PED_FATALLY_INJURED(Global_35))
	{
		return 1;
	}
	else if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_52()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (func_201(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
			return 1;
		
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((func_57(iVar0) && iVar0 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15) && func_6(uParam0->f_172, 8)) && (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728) || func_60(32768)))
			{
				iVar1 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, iVar1);
			break;
	}
	return 0;
}

void func_54(bool bParam0)
{
	func_202(bParam0);
	func_203(bParam0);
}

void func_55(var uParam0)
{
	if (func_6(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (func_204(uParam0, uParam0->f_168))
	{
		func_1(&(uParam0->f_172), 8192);
	}
}

int func_56(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_57(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_58()
{
	int iVar0;
	
	iVar0 = func_56(0);
	if ((func_57(iVar0) && func_110(iVar0) == 8) && func_31(((*Global_1347702)[func_111(iVar0) /*49*/])->f_12, 131072))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (func_205() != -1)
	{
		return 0;
	}
	if (!func_206(iParam0))
	{
		return 0;
	}
	return func_174(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_60(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

struct<4> func_61(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	func_191();
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { *(vLocal_623[0 /*3*/]) };
			Var1.f_3 = &fLocal_642[0];
			break;
		
		case 1:
			Var1 = { *(vLocal_623[1 /*3*/]) };
			Var1.f_3 = &fLocal_642[1];
			break;
		
		case 2:
			Var1 = { *(vLocal_623[2 /*3*/]) };
			Var1.f_3 = &fLocal_642[2];
			break;
		
		case 3:
			Var1 = { *(vLocal_623[3 /*3*/]) };
			Var1.f_3 = &fLocal_642[3];
			break;
		
		case 4:
			Var1 = { *(vLocal_623[4 /*3*/]) };
			Var1.f_3 = &fLocal_642[4];
			break;
		
		case 5:
			Var1 = { *(vLocal_623[4 /*3*/]) };
			Var1.f_3 = &fLocal_642[4];
			break;
		
		case 6:
			Var1 = { *(vLocal_623[5 /*3*/]) };
			Var1.f_3 = &fLocal_642[5];
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_207(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (func_208(uParam0, iLocal_301))
	{
		StringCopy(&(uParam0->f_2578), "RABI1_JACKHARM", 24);
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if ((((!func_209(iLocal_306, 65) || ENTITY::IS_ENTITY_DEAD(iLocal_306)) || PED::IS_PED_SWIMMING(iLocal_306)) || (iLocal_152 && !PED::IS_PED_ON_MOUNT(iLocal_301))) || (func_210(25) && !func_211()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				func_212(iLocal_306, 1, 0);
			}
			func_213(uParam0);
			StringCopy(&(uParam0->f_2578), "RABI1_HRSDEAD", 24);
			return 1;
		}
		if (!func_79(&uLocal_1033))
		{
			if (PED::IS_PED_FALLING(iLocal_306) || PED::IS_PED_RAGDOLL(iLocal_306))
			{
				func_214(&uLocal_1033);
			}
		}
		else if (func_215(&uLocal_1033) > 2f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				func_212(iLocal_306, 1, 0);
			}
		}
	}
	if ((iLocal_785 < 12 && iLocal_785 > 4) && iLocal_785 != 7)
	{
		func_216(0, vLocal_675, "RABI1_FAILWARN", 120f);
		if (&iLocal_819[0] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABANFISH", 24);
			return 1;
		}
	}
	if (iLocal_785 == 4 || iLocal_785 == 14)
	{
		func_216(2, ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false), (Local_825[4 /*9*/])->f_2, 60f);
		if (&iLocal_819[2] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JACKABAN", 24);
			return 1;
		}
	}
	if (iLocal_785 == 15)
	{
		func_216(1, vLocal_684, "RABI1_RETCAMP", 100f);
		if (&iLocal_819[1] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABANCAMP", 24);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_300) && iLocal_158)
	{
		if (!func_209(iLocal_300, 65))
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABIDEAD", 24);
			return 1;
		}
		else if (iLocal_157)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABIAGGRO", 24);
			return 1;
		}
	}
	if (func_217(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), "RABI1_WANTED", 24);
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		if (func_210(4) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 10f))
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JKANNOY", 24);
			return 1;
		}
		if (func_218(Global_35, iLocal_301, 0, 1) > 100f)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JACKABAN", 24);
			return 1;
		}
	}
	return 0;
}

int func_65(var uParam0)
{
	return 0;
}

void func_66()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_67(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

void func_68(var uParam0)
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != -1415022764)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
		func_219();
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	POPULATION::_0xF45E46DEECF7DF6E(256, 0, 0, -1, -1);
	PED::_0xBA0980B5C0A11924(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0x28CB6391ACEDD9DB(0f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306) && !ENTITY::IS_ENTITY_DEAD(iLocal_306))
	{
		PED::SET_PED_RESET_FLAG(iLocal_306, 280, true);
		PED::SET_PED_RESET_FLAG(iLocal_306, 252, true);
	}
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;
	
	if (!func_206(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_220(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_83(64))
	{
		return 0;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return 0;
	}
	else if (func_84())
	{
		return 0;
	}
	else if (Global_1310720->f_6)
	{
		return 0;
	}
	else if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		return 0;
	}
	if (func_146(0, 1, 0))
	{
		iVar0 = func_56(0);
		if (func_57(iVar0) && func_221(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_222(uParam0->f_174))
	{
		func_51(uParam0, 13);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (((*Global_1347702)[uParam0->f_174 /*49*/])->f_17 * ((*Global_1347702)[uParam0->f_174 /*49*/])->f_17))
		{
			func_51(uParam0, 2);
			return 1;
		}
	}
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_200(uParam0->f_174))
	{
		func_223(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_224(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_225(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_226(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_45 != -1)
	{
		if (func_225(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
		{
			func_178(uParam0->f_174, 2048);
			func_51(uParam0, 6);
			return 1;
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_46 != 0)
	{
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 268435456 == 0)
		{
			iVar2 = func_227();
			if (!func_228(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
			{
				func_51(uParam0, 7);
				return 1;
			}
		}
	}
	if (Global_1357549->f_1614 == 1)
	{
		func_51(uParam0, 8);
		return 1;
	}
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		if (func_229(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_230(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_231(uParam0) || func_232(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_233(uParam0) && func_234(uParam0->f_743))
	{
		func_178(uParam0->f_174, 8192);
		func_51(uParam0, 11);
		return 1;
	}
	return 0;
}

int func_71(var uParam0)
{
	return uParam0->f_175;
}

void func_72(var uParam0)
{
	bool bVar0;
	
	func_235();
	func_236(uParam0);
	if (func_6(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (func_71(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (func_32(uParam0, 128) && func_29())
		{
			func_156(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (func_71(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			func_124();
			if (func_71(uParam0) == 1)
			{
				func_237(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_238(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			func_239(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
	}
	if (func_71(uParam0) == 3)
	{
		func_240(uParam0->f_174);
	}
	else if (func_71(uParam0) == 2)
	{
	}
	else if (!func_167(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 2))
	{
		func_115(uParam0->f_174, 0);
	}
	func_173(uParam0->f_174);
	if (func_71(uParam0) == 0)
	{
		func_172(uParam0->f_174);
		func_241(uParam0);
	}
	func_161(uParam0);
	func_242(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_243(&(uParam0->f_2585));
	func_244(uParam0);
}

void func_73(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	vVar0 = { func_69(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = func_245(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_246(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_247(uParam0->f_174, fVar3);
		func_248(uParam0->f_174, vVar0, fVar3);
		func_249(uParam0->f_174);
		func_250(uParam0->f_174);
	}
}

void func_74(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	
	if (func_32(uParam0, 64))
	{
		return;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if ((func_6(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !func_45(uParam0))
		{
			func_2(&(uParam0->f_172), 256);
			func_160(uParam0->f_751);
			func_251(uParam0);
		}
		else
		{
			func_252(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_253() };
				Var8 = { func_254(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_255(&(uParam0->f_206));
					func_256(&(uParam0->f_206), &cVar0);
				}
			}
			func_1(&(uParam0->f_172), 256);
		}
	}
}

void func_75(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (!func_6(uParam0->f_172, 16))
	{
		return;
	}
	if (func_257(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_258(uParam0);
	if (!bVar0)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (func_100(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (func_27(uParam0))
			{
				bVar1 = false;
			}
			else if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (func_259(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_260(uParam0);
				func_1(&(uParam0->f_172), 1);
			}
		}
		else if (func_6(uParam0->f_172, 1))
		{
			func_2(&(uParam0->f_172), 1);
		}
	}
	else if (!func_6(uParam0->f_172, 1))
	{
		func_1(&(uParam0->f_172), 1);
	}
}

int func_76(var uParam0)
{
	return uParam0->f_169;
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_6(uParam0->f_172, 32))
	{
		return;
	}
	if (uParam0->f_2605.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_785)
		{
			if (func_261(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_262(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_263(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_264(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_265(uParam0->f_2605[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_786 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_786)
		{
			if (func_261(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_266(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_267(uParam0->f_2605.f_241[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_787 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_787)
		{
			if (func_261(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_266(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_268(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_261(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_269(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_78(var uParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_1), 64);
	if (func_270(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_271(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_214(uParam0);
	}
}

void func_81(var uParam0)
{
}

int func_82(var uParam0)
{
	if (!func_79(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_272(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_273() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_83(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_84()
{
	return func_90(&Global_1935630, 4096);
}

int func_85(var uParam0)
{
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		return 1;
	}
	if (func_274(uParam0) && func_275(uParam0))
	{
		func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		return 1;
	}
	return 0;
}

void func_86(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
		{
			func_278(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
			{
				func_279(uParam0->f_174);
				func_280(uParam0->f_174);
			}
		}
		else
		{
			func_281(Global_1347702[uParam0->f_174 /*49*/]);
			func_279(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(uParam0->f_174), func_277(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_282(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_283(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_284(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_285(Global_1935630, 8);
	}
	bVar0 = true;
	if (func_32(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_115(uParam0->f_174, 0);
	}
	func_286(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		func_287(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_238(1);
	func_242(1);
	func_288();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_289(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_290(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
	if (func_45(uParam0))
	{
		func_1(&(uParam0->f_172), 256);
	}
	if (func_6(uParam0->f_172, 8388608) || !func_6(uParam0->f_172, 256))
	{
		func_43(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	HUD::SET_MISSION_NAME(true, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_291(uParam0);
	if (uParam0->f_174 != func_19())
	{
		if (!func_60(32768))
		{
			Var1 = { func_61(0) };
			if (!func_62(&Var1))
			{
				func_28(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (func_292(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_0x15B0CC1B36F1DE29(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_293(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_294(uParam0, 0);
}

float func_88(var uParam0)
{
	return 1000f;
}

int func_89(var uParam0)
{
	return 3;
}

bool func_90(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_91(var uParam0)
{
}

int func_92(var uParam0)
{
	bool bVar0;
	
	if (func_27(uParam0))
	{
		return 1;
	}
	bVar0 = false;
	if (func_6(uParam0->f_172, 4096) || func_58())
	{
		bVar0 = true;
	}
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		if (!bVar0)
		{
			return 1;
		}
	}
	if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_106(uParam0, bVar0);
		if (func_6(uParam0->f_172, 524288))
		{
			return 1;
		}
		else if (func_6(uParam0->f_172, 1048576))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (bVar0)
		{
			return 0;
		}
		if (uParam0->f_171 != 0 || func_295(uParam0))
		{
			if (func_296(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_93(var uParam0)
{
	return 6;
}

void func_94(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

int func_95(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return func_297();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	char[] cVar1[8];
	bool bVar2;
	
	iVar0 = iParam1;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!func_298())
	{
		return 2;
	}
	switch (iVar0)
	{
		case 0:
			switch (iLocal_814)
			{
				case 0:
					if (((((((func_299(*(vLocal_649[0 /*3*/]), &(fLocal_668[0]), 1) && func_300()) && func_301(Local_926[1 /*6*/])) && func_302()) && func_303()) && func_298()) && func_304()) && func_305())
					{
						func_293(uParam0, func_61(0), func_61(1), 0, 1, 0);
						if (func_306(uParam0))
						{
							func_2(&(uParam0->f_172), 16);
							iLocal_814 = 1;
						}
						else
						{
							iLocal_814 = 2;
						}
					}
					break;
				
				case 1:
					if (!func_6(uParam0->f_172, 16))
					{
						if (func_307(uParam0, vLocal_564, fLocal_567))
						{
							cVar1 = func_308();
							func_309(&(uParam0->f_206), cVar1);
							func_310(&(uParam0->f_206), 33554432);
							func_310(&(uParam0->f_206), 134217728);
							func_256(&(uParam0->f_206), cVar1);
							func_294(uParam0, 0);
						}
					}
					else if (ANIMSCENE::_0x25557E324489393C(uParam0->f_206.f_348))
					{
						return 5;
					}
					break;
				
				case 2:
					func_311();
					func_312(9, 0);
					func_313(uParam0);
					func_314(1, 1);
					ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_579, fLocal_582, 1, false, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (!func_315(Local_453[0 /*17*/]))
					{
						func_316(Local_453[0 /*17*/], "RABI1_GREET", " ", -163964935, 0, 0, 0, 1, 0);
					}
					func_317(1);
					func_318(uParam0, (Local_825[0 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
					func_319(uParam0, 0, 2);
					func_320(13, 0, 1, 0, -1082130432, 1, 1, 0, 0, 0, 0);
					iLocal_172[0] = 0;
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					return 7;
			}
			break;
		
		case 1:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, *(vLocal_623[1 /*3*/]), &(fLocal_642[1])) && func_299(*(vLocal_649[1 /*3*/]), &(fLocal_668[1]), 1)) && func_322(1, 1)) && func_323(*(vLocal_623[1 /*3*/]), 0f, 0f, 0f, 0)) && func_302()) && func_298())
					{
						func_324(1);
						func_311();
						func_313(uParam0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, *(vLocal_623[1 /*3*/]), &(fLocal_642[1]), 1, false, 1);
						func_325();
						func_312(9, 0);
						iLocal_814 = 1;
					}
					break;
				
				case 1:
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_306, -1, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
					}
					if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_301))
					{
						func_326(25);
						iLocal_152 = 1;
						func_327(vLocal_678, 1);
						iLocal_792 = 3;
						func_318(uParam0, (Local_825[1 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_814 = 2;
					}
					break;
				
				case 2:
					if (func_328(1))
					{
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[0]));
						func_293(uParam0, func_61(1), func_61(2), 1, 2, 0);
						func_319(uParam0, 0, 8);
						func_329(1);
						func_330();
						func_331();
						iLocal_814 = 0;
						return 7;
					}
					break;
			}
			break;
		
		case 2:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, *(vLocal_623[2 /*3*/]), &(fLocal_642[2])) && func_299(*(vLocal_649[2 /*3*/]), &(fLocal_668[2]), 1)) && func_322(1, 1)) && func_323(*(vLocal_623[2 /*3*/]), 0f, 0f, 0f, 0)) && func_302()) && func_298())
					{
						func_324(1);
						func_311();
						func_312(9, 0);
						func_313(uParam0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, *(vLocal_623[2 /*3*/]), &(fLocal_642[2]), 1, false, 1);
						func_325();
						iLocal_814 = 1;
					}
					break;
				
				case 1:
					if (!MAP::DOES_BLIP_EXIST(iLocal_137))
					{
						func_327(vLocal_678, 1);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_306, -1, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
					}
					if ((PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_301)) && MAP::DOES_BLIP_EXIST(iLocal_137))
					{
						func_326(25);
						func_332(Global_36, 50f, 0);
						iLocal_152 = 1;
						iLocal_792 = 3;
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[1]));
						iLocal_814 = 2;
					}
					break;
				
				case 2:
					if (func_328(1))
					{
						func_318(uParam0, (Local_825[1 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						func_293(uParam0, func_61(2), func_61(4), 2, 4, 0);
						func_319(uParam0, 0, 8);
						func_330();
						func_329(1);
						func_331();
						iLocal_814 = 0;
						return 7;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, vLocal_678, 0) && func_299(*(vLocal_649[3 /*3*/]), &(fLocal_668[3]), 1)) && func_302()) && func_322(1, 1)) && func_323(*(vLocal_623[3 /*3*/]), 0f, 0f, 0f, 1)) && func_298())
					{
						iLocal_814 = 1;
					}
					break;
				
				case 1:
					if (func_328(1))
					{
						func_311();
						func_324(1);
						func_333(17);
						func_313(uParam0);
						func_317(0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, vLocal_678, fLocal_590, 1, false, 1);
						func_334(1, 1);
						func_319(uParam0, iLocal_785, 10);
						func_293(uParam0, func_61(3), func_61(4), 3, 4, 0);
						func_312(9, 0);
						iLocal_792 = 3;
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[1]));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_330();
						func_329(1);
						func_331();
						return 7;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_814)
			{
				case 0:
					func_335(Global_35, 1);
					if (((func_321(uParam0, vLocal_587, fLocal_590) && func_299(*(vLocal_649[4 /*3*/]), &(fLocal_668[4]), 1)) && func_322(1, 1)) && func_298())
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
						{
							func_313(uParam0);
						}
						iLocal_814 = 1;
					}
					break;
				
				case 1:
					bVar2 = true;
					if (!iLocal_138)
					{
						func_294(uParam0, 1);
						bVar2 = false;
					}
					func_332(vLocal_587, 3f, 0);
					if (iLocal_138 && !func_6(uParam0->f_172, 1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						iLocal_814 = 2;
					}
					break;
				
				case 2:
					if (func_328(1))
					{
						func_324(1);
						func_336();
						func_312(11, 0);
						func_311();
						ENTITY::_0x203BEFFDBE12E96A(iLocal_306, vLocal_587, fLocal_590, 1, false, 1);
						func_293(uParam0, func_61(4), func_61(6), 4, 6, 0);
						AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_815[2]));
						func_337(1);
						func_338(1);
						func_339(0);
						func_340(0);
						func_341(0);
						func_342(0);
						func_343(0);
						func_344(1);
						func_345(0);
						func_329(1);
						func_319(uParam0, iLocal_785, 14);
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						return 5;
					}
					break;
			}
			break;
		
		case 5:
			switch (iLocal_814)
			{
				case 0:
					if (((func_321(uParam0, vLocal_587, fLocal_590) && func_299(*(vLocal_649[4 /*3*/]), &(fLocal_668[4]), 1)) && func_322(1, 1)) && func_298())
					{
						func_312(12, 0);
						func_335(Global_35, 1);
						func_311();
						iLocal_814 = 1;
					}
					break;
				
				case 1:
					if (func_328(1))
					{
						func_324(1);
						func_346(uParam0);
						func_330();
						func_329(1);
						func_331();
						return 7;
					}
					break;
			}
			break;
		
		case 6:
			if ((((((func_299(*(vLocal_649[0 /*3*/]), &(fLocal_668[0]), 1) && func_347(1)) && func_303()) && func_348(uParam0, 1, iLocal_306)) && func_6(uParam0->f_172, 1)) && func_322(1, 1)) && func_349(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
			{
				func_350(iLocal_291, 0, 1);
				func_351(&iLocal_291);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
				{
					POPULATION::_0xF74E134F40192884(iLocal_306, 2);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_306, vLocal_691, fLocal_694, 1, false, 1);
					if (!func_352(iLocal_306, -982327190))
					{
						TASK::TASK_STAND_STILL(iLocal_306, -1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
				{
					func_313(uParam0);
					ENTITY::_0x203BEFFDBE12E96A(iLocal_301, *(vLocal_649[5 /*3*/]), &(fLocal_668[5]), 0, false, 1);
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_353(uParam0, iLocal_306, "HORSE_01", 0, 0, 0);
				return 5;
			}
			break;
	}
	return 2;
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_146(0, 0, 1) || iParam0)
	{
		iVar0 = func_354();
		iVar1 = func_355(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_356(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_356(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

int func_98(var uParam0)
{
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!func_6(uParam0->f_172, 1))
		{
			return 0;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return 0;
		}
		MISC::_0xA565FAC215CBC77D();
		return 1;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if (!func_357(uParam0))
		{
			if ((func_6(uParam0->f_172, 8192) && ANIMSCENE::_0x25557E324489393C(uParam0->f_751)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_751, 0))
			{
				if (func_6(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					func_43(uParam0, 2);
					if (!func_6(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return 0;
		}
	}
	else if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_106(uParam0, 0);
		if (!func_6(uParam0->f_172, 1048576))
		{
			return 0;
		}
	}
	else
	{
		func_358();
		func_359(uParam0);
		if (!func_360(uParam0))
		{
			return 0;
		}
	}
	if (!func_6(uParam0->f_172, 1))
	{
	}
	return 1;
}

void func_99(var uParam0)
{
	if (func_6(uParam0->f_172, 2048))
	{
		return;
	}
	if (func_100(&(uParam0->f_2575)))
	{
		func_361(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_362(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_293(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_363(Global_35))
		{
			if (func_364())
			{
				func_365(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_1(&(uParam0->f_172), 2048);
}

int func_100(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_101(var uParam0)
{
	struct<4> Var0;
	
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_366(Var0, &(uParam0->f_206), uParam0);
}

void func_102(var uParam0, bool bParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_206.f_348))
	{
		if (!ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_206.f_348, 0))
		{
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_206.f_348, 0))
			{
			}
			else if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_206.f_348, 1, 0))
			{
			}
			else if (ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_206.f_348, 1))
			{
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_206.f_348);
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	func_2(&(uParam0->f_172), 1);
	func_2(&(uParam0->f_172), 16);
	func_2(&(uParam0->f_172), 2048);
	if (func_100(&(uParam0->f_2575)))
	{
		func_367(&(uParam0->f_206));
	}
	func_368(&(uParam0->f_206));
	func_369(uParam0);
}

int func_103(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	switch (iLocal_789)
	{
		case 0:
			if (bLocal_143)
			{
				func_312(6, 30);
				func_320(13, 0, 1, 0, -1082130432, 1, 1, 0, 0, 0, 0);
				iLocal_172[0] = 0;
				func_370(uParam0);
				func_319(uParam0, iLocal_785, 2);
				return 7;
			}
			else
			{
				func_370(uParam0);
				return 7;
			}
			break;
		
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2011525043, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1618006066, false);
			func_346(uParam0);
			return 7;
		
		case 2:
			ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_926[5 /*6*/]));
			func_371(0, 1, 0);
			func_372(14);
			func_373(14);
			func_2(&(uParam0->f_172), 16);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			return 8;
	}
	return 7;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_357(uParam0))
		{
			if (func_6(uParam0->f_172, 512) && func_6(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!func_6(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_293(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return 0;
		}
	}
	return 0;
}

int func_105(var uParam0)
{
	return 0;
}

void func_106(var uParam0, bool bParam1)
{
	if (!func_6(uParam0->f_172, 262144))
	{
		return;
	}
	if (func_6(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		func_2(&(uParam0->f_172), 262144);
		return;
	}
	if (!func_6(uParam0->f_172, 1048576))
	{
		if (func_374(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_375(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	
	if (!func_210(26))
	{
		func_238(0);
		func_377(func_376(43, vLocal_688), 1);
		func_326(26);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_306, 31, 2, 1);
	}
	func_378();
	func_379();
	func_380();
	if (iLocal_785 < 14)
	{
		func_381();
		func_382();
		if (iLocal_785 >= 9)
		{
			if (STREAMING::_0x8A3945405B31048F() > 0.85f)
			{
				func_383(0.85f);
			}
		}
	}
	if (func_384(17))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	}
	if (func_210(25))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_306, 2.001f);
		PAD::DISABLE_CONTROL_ACTION(0, -874806616, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
		PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 395, true);
		}
	}
	else
	{
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 395, false);
		}
	}
	func_385();
	func_386(uParam0);
	func_387();
	if ((iLocal_785 == 9 || iLocal_785 == 10) || iLocal_785 == 11)
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 1, 1);
	}
	else
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
	}
	if (func_117() == 71)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -473983589, false);
		PAD::DISABLE_CONTROL_ACTION(0, -719620017, false);
	}
	switch (iLocal_785)
	{
		case 2:
			func_388(0);
			PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
			if (!bLocal_143)
			{
				func_389();
				func_390(uParam0);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (!func_391())
			{
			}
			if (!func_210(10))
			{
				func_347(1);
			}
			func_392(uParam0);
			break;
		
		case 3:
			func_393();
			if (!bLocal_143)
			{
				func_389();
				func_390(uParam0);
			}
			func_394(uParam0);
			if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_762))
			{
				func_395(&vVar0, &uVar3);
				iLocal_762 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 5f, 5f, 5f, "mJackHorseVol");
			}
			if (iLocal_793 != 2)
			{
				iLocal_793 = 2;
			}
			if (iLocal_812 == 3)
			{
				if (VOLUME::_0x92A78D0BEDB332A3(iLocal_775))
				{
					func_396(&iLocal_477, iLocal_775, 0);
					VOLUME::_0x43F867EF5C463A53(iLocal_775);
				}
				func_397();
				func_318(uParam0, (Local_825[4 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				TASK::CLEAR_PED_TASKS(iLocal_301, 1, 0);
				TASK::TASK_STAND_STILL(iLocal_301, -1);
				func_371(0, 1, 0);
				iLocal_792 = 3;
				func_319(uParam0, iLocal_785, 4);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
				func_388(0);
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(&(Local_926[iLocal_191 /*6*/])) < 0.83f)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			break;
		
		case 4:
			func_394(uParam0);
			func_388(0);
			func_398(uParam0);
			func_399();
			if (func_211())
			{
				func_324(1);
				func_326(25);
				func_318(uParam0, (Local_825[5 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				func_400();
				func_317(1);
				func_401(10);
				func_402();
				func_319(uParam0, iLocal_785, 5);
			}
			else
			{
				if (!bLocal_143)
				{
					func_389();
					func_390(uParam0);
				}
				func_403(Local_825[4 /*9*/], 0, 0);
			}
			break;
		
		case 5:
			func_394(uParam0);
			func_388(0);
			func_399();
			if (func_211())
			{
				func_402();
				if (iLocal_807 == 2)
				{
					func_404(5);
					func_319(uParam0, iLocal_785, 6);
				}
				else
				{
					func_403(Local_825[5 /*9*/], 0, 0);
				}
			}
			else
			{
				func_405(&iLocal_137);
				func_318(uParam0, (Local_825[4 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				func_319(uParam0, iLocal_785, 4);
			}
			break;
		
		case 6:
			func_399();
			func_388(0);
			if (iLocal_152)
			{
				if (func_322(1, 0))
				{
					if (func_406(uParam0, "ABI1_ASETOFFC", 0))
					{
						func_330();
						func_293(uParam0, func_61(1), func_61(2), 1, 2, 0);
						func_317(0);
						func_327(vLocal_678, 1);
						func_318(uParam0, (Local_825[1 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						func_319(uParam0, 2, 8);
					}
				}
			}
			else
			{
				func_402();
			}
			break;
		
		case 7:
			func_407();
			func_408(uParam0, 1);
			if (func_409())
			{
				func_410(2);
				func_317(0);
				func_327(vLocal_681, 0);
				func_411("RABI1_RETHORSE", 1);
				func_318(uParam0, (Local_825[iLocal_805 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
				func_319(uParam0, iLocal_785, iLocal_786);
			}
			else if (!func_210(2))
			{
				if (iLocal_786 != 15)
				{
					if (func_406(uParam0, "ABI1_LOST", 0))
					{
						func_326(2);
					}
				}
				else
				{
					func_326(2);
				}
			}
			else if (!func_412("ABI1_LOST") && !func_210(1))
			{
				func_413("RABI1_RETHORSE", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_326(1);
			}
			else if (!func_414("RABI1_RETHORSE", 1))
			{
				func_415(uParam0);
			}
			break;
		
		case 8:
			func_407();
			func_408(uParam0, 1);
			func_416();
			if (func_417())
			{
				PED::SET_PED_RESET_FLAG(iLocal_306, 53, true);
				func_319(uParam0, iLocal_785, 9);
			}
			break;
		
		case 9:
			func_418();
			func_416();
			func_402();
			if (!func_79(&uLocal_513))
			{
				if (!func_419())
				{
					if (PED::IS_PED_STOPPED(iLocal_306) || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_306) <= (1f + 0.01f))
					{
						if (!iLocal_154)
						{
							func_420(14);
							func_421(8, 14, 1);
							func_422("RABI1_COMIC", 7000, 0, 0, 0, 1);
							iLocal_154 = 1;
						}
						if (func_406(uParam0, "ABI1_ARRIVE", 0))
						{
							func_326(3);
							func_80(&uLocal_513, 0);
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
							TASK::TASK_STAND_STILL(iLocal_306, -1);
							PED::SET_PED_RESET_FLAG(iLocal_306, 53, true);
						}
					}
				}
				else
				{
					func_423(1, 0);
				}
			}
			else if ((iLocal_808 == 4 && func_302()) && func_322(1, 1))
			{
				func_317(0);
				func_410(25);
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 262144, 0, 0, 0, 0);
				}
				func_333(17);
				TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
				func_243(&uLocal_513);
				func_405(&iLocal_137);
				func_319(uParam0, iLocal_785, 10);
			}
			break;
		
		case 10:
			func_424();
			if (!func_412("ABI1_ARRIVE"))
			{
				if (func_406(uParam0, "ABI1_WHEREGO", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
					{
						TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
						TASK::TASK_STAND_STILL(iLocal_306, -1);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
					}
					func_327(vLocal_675, 1);
					func_425();
					iLocal_192 = func_426(0);
					iLocal_193 = iLocal_192;
					func_293(uParam0, func_61(3), func_61(4), 3, 4, 0);
					func_318(uParam0, (Local_825[8 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
					func_410(22);
					func_427();
					func_319(uParam0, iLocal_785, 11);
				}
			}
			break;
		
		case 11:
			func_424();
			func_428(uParam0);
			func_429();
			func_388(0);
			if (func_302())
			{
				func_430(uParam0);
			}
			if (func_431())
			{
				func_319(uParam0, iLocal_785, 12);
			}
			break;
		
		case 12:
			func_428(uParam0);
			func_432();
			func_429();
			if (!iLocal_138)
			{
				func_294(uParam0, 1);
			}
			func_388(0);
			if (func_302())
			{
				func_430(uParam0);
			}
			if (func_433())
			{
				func_344(1);
				func_345(1);
				func_434(0);
				func_339(0);
				func_340(0);
				func_341(0);
				func_342(0);
				func_343(0);
				func_338(1);
				func_435(&(uParam0->f_206));
				if (func_414("RABI1_GOJACK", 1))
				{
					func_411("RABI1_GOJACK", 1);
				}
				func_351(&iLocal_294);
				iLocal_803 = 9;
				func_319(uParam0, iLocal_785, 14);
				return 5;
			}
			break;
		
		case 14:
			func_408(uParam0, 1);
			func_399();
			func_436();
			func_388(1);
			func_389();
			func_393();
			if (func_211())
			{
				func_402();
			}
			switch (iLocal_778)
			{
				case 0:
					if (func_211())
					{
						func_423(1, 0);
						func_243(&uLocal_534);
						func_400();
						func_326(25);
						iLocal_159 = 1;
						func_318(uParam0, (Local_825[5 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_778 = 1;
					}
					else
					{
						if (func_352(iLocal_301, 1056466932))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(Global_35) || func_437() > (fLocal_925 + 10f))
							{
								TASK::TASK_STAND_STILL(iLocal_301, -1);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_WATER(Global_35) && func_437() < (fLocal_925 + 10f))
						{
							if (!func_352(iLocal_301, 1056466932))
							{
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
							}
						}
						if (!func_210(14))
						{
							if (func_406(uParam0, "ABI1_GETHOME", 0))
							{
								func_326(14);
							}
						}
						else if (!func_79(&uLocal_534))
						{
							if (!func_419())
							{
								func_214(&uLocal_534);
							}
						}
						else if (func_438(&uLocal_534) > 6f)
						{
							if (func_406(uParam0, "ABI1_DAWDLEJ", 0))
							{
								func_243(&uLocal_534);
							}
						}
						func_403(Local_825[4 /*9*/], 0, 0);
					}
					break;
				
				case 1:
					if (func_211())
					{
						func_403(Local_825[5 /*9*/], 0, 0);
						if (iLocal_152)
						{
							vLocal_1019 = { Global_36 };
							func_327(vLocal_684, 0);
							func_371(0, 0, 0);
							func_318(uParam0, (Local_825[3 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
							func_319(uParam0, iLocal_785, 15);
						}
					}
					else if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_926[3 /*6*/]), 0))
					{
						func_318(uParam0, (Local_825[5 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
						iLocal_778 = 0;
					}
					break;
			}
			break;
		
		case 15:
			func_407();
			func_389();
			func_408(uParam0, 0);
			if (func_409())
			{
				func_439(uParam0);
				func_403(Local_825[3 /*9*/], 0, 0);
				if (func_348(uParam0, 0, func_440(Global_35)))
				{
					if ((ANIMSCENE::_0x95531A4A20CCE7BC(&(Local_926[6 /*6*/]), 0) && ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[6 /*6*/]), "LEadin")) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(Local_926[6 /*6*/]), "Horse_01", &Local_65, true, "LEadin", 2))
					{
						vLocal_691 = { Local_65 };
						fLocal_694 = Local_65.f_3.f_2;
					}
					POPULATION::_0xF74E134F40192884(Global_35, 0);
					POPULATION::_0xF74E134F40192884(iLocal_306, 2);
					POPULATION::_0xF74E134F40192884(iLocal_301, 0);
					if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_763))
					{
						iLocal_763 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-112.8483f, -18.32166f, 96.7937f, 0f, 0f, -31.48123f, 4.428669f, 5.874272f, 2.208711f, "Leadin Trigger");
					}
					func_441(Global_35, vLocal_684, 0, 30f, 20f, 10f, 1084227584, 1, 1, 1, 0);
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_763, false, 0) || func_210(8))
					{
						func_326(8);
						if (PED::_0xA29FD00D45311EB7(Global_35, "cautious") > 0f)
						{
							PED::_0x437C08DB4FEBE2BD(Global_35, "cautious", 0f, -1);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
						if (!func_210(7))
						{
							if (func_442(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
							}
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar4);
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_691, 1f, 10000, 0.25f, false, fLocal_694);
							TASK::TASK_ACHIEVE_HEADING(0, fLocal_694, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar4);
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar4);
							TASK::CLEAR_SEQUENCE_TASK(&iVar4);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
							{
								CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_300, 0f, 0f, 0f, true, 6000, 2000, 2000, 0);
							}
							func_353(uParam0, func_440(Global_35), "HORSE_01", 0, 0, 0);
							func_326(7);
						}
						else if (func_443())
						{
							if (func_444())
							{
								func_423(1, 0);
							}
							else
							{
								func_445();
								func_314(6, 7);
								func_319(uParam0, iLocal_785, 16);
							}
						}
					}
				}
			}
			else
			{
				if (func_210(8) || func_210(7))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					func_445();
					func_326(8);
					func_326(7);
				}
				if (func_414("RABI1_RETCAMP", 1))
				{
					func_411("RABI1_RETCAMP", 1);
				}
				func_446(uParam0, 3);
			}
			break;
		
		case 16:
			if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[6 /*6*/]), 0) || ANIMSCENE::_0x3FBC3F51BF12DFBF(&(Local_926[6 /*6*/])) >= 0.95f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
				iLocal_152 = 0;
				func_405(&iLocal_137);
				func_410(25);
				return 5;
			}
			break;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_447(iParam0) == 0;
}

int func_109(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_110(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_449(func_448(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_450(func_448(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_451(func_448(iParam0));
}

void func_113()
{
	struct<2> Var0;
	
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_114(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_115(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_452(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_453(iParam0);
		if ((!func_229(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_405(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_454(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_455(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!func_456(iParam0))
	{
		return;
	}
	bVar0 = func_457(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_458(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_460(iParam0, func_459());
			func_461(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_462(iParam0, 67108864);
		func_460(iParam0, -15);
	}
	func_463(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_464(0))
	{
		if (func_465(0))
		{
			func_466(0);
		}
	}
	if (func_464(1))
	{
		if (func_465(1))
		{
			func_466(1);
		}
	}
}

bool func_120(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_121(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_122(var uParam0)
{
	func_467(553, 1, 0, 0, 1);
	func_401(10);
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_110(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_111(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_206(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_237(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_468(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_468(1);
		}
		else if (iVar3 == 61)
		{
			func_468(0);
		}
		else if (iVar3 == 83)
		{
			func_468(0);
		}
	}
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_206(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_469(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_470(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_126(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;
	
	func_471(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_472(sParam1))
	{
		func_413(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

var func_127()
{
	return Global_1572864->f_15;
}

void func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;
	
	if (!func_206(iParam0))
	{
		return;
	}
	if (func_473())
	{
		func_278(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!func_60(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_473())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_474(iParam0, 0, iParam3);
	if (func_206(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_475(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_476(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_477(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_478();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_479(iParam0);
			}
			bParam5 = false;
			uVar0 = func_480(((*Global_1347702)[iParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4);
	}
	if (!func_60(32768))
	{
		func_481(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_482(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_483(iParam0);
}

int func_129(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	func_137(4112);
	func_136(6);
	vVar2 = { func_485(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_486(vVar2, uVar1, uVar0, 0);
	func_487(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_205() != -1)
	{
		return;
	}
	func_137(32);
	if (iParam0 == 0)
	{
		func_137(16);
	}
	else if (iParam0 == 1)
	{
		func_137(8);
	}
	func_488();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_205() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_489(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_60(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_459();
	}
}

void func_134(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_135()
{
	struct<10> Var0;
	struct<16> Var10;
	
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_490(Var10, 0);
}

void func_136(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_137(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_138(var uParam0)
{
	if (!func_210(21))
	{
		if (func_322(0, 1))
		{
			func_326(21);
		}
	}
}

void func_139(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630->f_44) && WEAPON::_0x6AD66548840472E5(Global_1935630->f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_491(0);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_0x9A92C06ACBAF9731();
	}
}

int func_140(var uParam0)
{
	if (func_60(32768))
	{
		return 0;
	}
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728))
	{
		return 1;
	}
	return 0;
}

void func_141(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_492(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_493(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_493(&(Global_1347343->f_11), 16384);
	}
	if (func_494() >= 2)
	{
		if (!func_492(Global_1347343->f_11, 16384))
		{
			func_493(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_285(Global_1935630, 2048);
	func_495(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_496(1, &(uParam0->f_2605.f_482));
}

void func_144(int iParam0)
{
	int iVar0;
	
	if (!func_57(iParam0))
	{
		return;
	}
	if (iParam0 != func_56(0))
	{
		return;
	}
	if (func_109(iParam0) == 0)
	{
	}
	iVar0 = func_110(iParam0);
	if (func_497(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_498(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_499(iParam0);
	func_203(1);
	func_500(0);
	func_501(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_502(1);
			func_503(15, 0, 1);
			break;
		
		case 4:
			func_503(10, 0, 1);
			break;
		
		case 8:
			func_503(10, 0, 1);
			break;
		
		case 9:
			func_503(10, 0, 1);
			break;
		
		case 2:
			func_503(10, 0, 1);
			break;
		
		case 6:
			func_503(10, 0, 1);
			break;
		
		case 5:
			func_503(10, 0, 1);
			break;
	}
	func_504(1);
}

void func_145(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	char* sVar1;
	
	if (!bParam1)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 == 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		fParam2 = BUILTIN::VDIST2(Global_36, func_505(iParam0));
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 512 != 0)
	{
		if (fParam2 > 225f)
		{
			iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
			if (iVar0 != ((*Global_1347702)[iParam0 /*49*/])->f_39)
			{
				_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_39, 0);
			}
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_506())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_422(sVar1, 10000, 0, 0, 0, 1);
		}
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
	}
}

int func_146(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_507())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_111(&(Global_1898164->f_1[0 /*5*/]));
		if (func_206(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_57(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

int func_147(var uParam0)
{
	return 1;
}

int func_148()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
	return 0;
}

float func_149(var uParam0)
{
	return 1000f;
}

int func_150(var uParam0)
{
	if (func_71(uParam0) == 0)
	{
		if (!func_210(21))
		{
			if (func_322(1, 1))
			{
				func_326(21);
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_71(uParam0) == 11)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	return Global_1572864->f_8;
}

int func_152(int iParam0)
{
	if (func_110(iParam0) == 8)
	{
		return func_111(iParam0);
	}
	return -1;
}

void func_153(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_154(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_155(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_157(1);
	}
}

void func_156(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_157(0);
	}
}

void func_157(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_158(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_159(var uParam0)
{
	int iVar0;
	
	PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
	func_508();
	func_434(1);
	func_509(&iLocal_776, 1);
	func_510(1);
	func_511(1);
	func_512();
	func_513(1);
	if (func_6(uParam0->f_172, 8))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	func_400();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
	{
		func_371(0, 1, 0);
		func_372(14);
		func_373(14);
		func_514();
	}
	func_350(iLocal_291, 1, 1);
	func_169(&iLocal_1018, 1, 0, 1);
	func_169(&iLocal_1017, 1, 0, 1);
	func_405(&iLocal_137);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_278);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_279);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_277);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_280);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_273);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_274);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_275);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_276);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_282[0]));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_282[1]));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_281);
	func_23(&iLocal_304);
	func_23(&iLocal_305);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_23(uLocal_310[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	func_381();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (func_515(1))
	{
		func_338(1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_761))
	{
		func_396(&iLocal_471, iLocal_761, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_761);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_767))
	{
		func_396(&iLocal_472, iLocal_767, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_767);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_771))
	{
		func_396(&iLocal_474, iLocal_771, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_771);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_773))
	{
		func_396(&iLocal_475, iLocal_773, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_773);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_774))
	{
		func_396(&iLocal_476, iLocal_774, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_774);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_775))
	{
		func_396(&iLocal_477, iLocal_775, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_775);
	}
	func_516(iLocal_762);
	func_516(iLocal_766);
	func_516(iLocal_768);
	func_516(iLocal_764);
	func_516(iLocal_763);
	func_320(13, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	if (func_517(14))
	{
		func_518(14, 0);
		func_320(14, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	func_320(0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (PED::GET_PED_CONFIG_FLAG(iLocal_306, 300, true))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, false);
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 395, false);
	}
	func_169(&iLocal_306, 1, 0, 1);
	func_169(&iLocal_309, 1, 0, 1);
	func_351(&iLocal_293);
	func_351(&iLocal_292);
	func_351(&iLocal_291);
	func_401(10);
	STREAMING::REMOVE_ANIM_DICT(sLocal_490);
	STREAMING::REMOVE_ANIM_DICT(sLocal_491);
}

void func_160(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_161(var uParam0)
{
	if (uParam0->f_171 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		MAP::DISPLAY_RADAR(true);
	}
	uParam0->f_171 = 0;
	uParam0->f_747 = 0;
	func_243(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;
	
	Var0 = { func_519(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
	Var0 = { func_520(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
}

int func_163(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_22));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_0xBC781D24AA11F179(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	return 1;
}

void func_164(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_22);
		((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
	}
}

void func_165(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_21);
	}
}

void func_166(int iParam0)
{
	switch (func_205())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_167(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_168(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_521(iParam0))
	{
		return;
	}
	if (!func_522(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_523(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_320(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_524(iParam0, 0);
	func_372(iParam0);
}

void func_169(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_170(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_2603);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_2603);
	}
}

void func_171(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_2604);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_2604);
	}
}

void func_172(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_525(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::_0x43F867EF5C463A53(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_526(iParam0, &iVar1, &iVar0))
	{
		if (func_527(iVar1, iVar0, 1))
		{
			func_528(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = func_447(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_175(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_57(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_174(iParam0) && !func_282(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_109(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_174(iParam0))
	{
		iParam2 = -1;
	}
	if (func_497(iParam0) == 3 || (func_497(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_109(iParam0))))
	{
		func_498(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_529(iParam0);
			if (iVar0 != -1)
			{
				func_530(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_531();
				if (iVar0 != -1)
				{
					func_530(0);
				}
			}
		}
	}
	func_501(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_203(1);
		func_500(0);
		func_504(1);
	}
	func_532(iParam0, 1);
	func_499(iParam0);
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		func_47(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
	else
	{
		func_176(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_206(iParam0))
	{
		return;
	}
	func_533(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_533(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_223(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_206(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_180(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_534(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_535(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_536((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_537(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_538(iParam0, 32);
	func_539();
}

void func_182(bool bParam0)
{
	Global_1956582 = bParam0;
	if (bParam0)
	{
		MAP::_0x632AA10BF7EA53D3(0, 0);
	}
	else
	{
		MAP::_0x632AA10BF7EA53D3(1, 0);
	}
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

int func_184(vector3 vParam0, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_117();
	if (func_456(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_540(vParam0, bParam3);
}

void func_185(var uParam0, float fParam1)
{
	uParam0->f_741 = fParam1;
}

void func_186(var uParam0, float fParam1)
{
	uParam0->f_742 = fParam1;
}

void func_187(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_188(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_189()
{
	(Local_926[0 /*6*/])->f_3 = "script@rcm@ABI1@LEADIN@RSC1@base_callovers_leadin";
	(Local_926[1 /*6*/])->f_3 = "script@rcm@abi1@ig@rsc_ig_1_jackplaymud@rsc_ig_1_jackplaymud";
	(Local_926[2 /*6*/])->f_3 = "script@rcm@abi1@ig@rsc_ig_2_jackgetsfishgear@rsc_ig_2_jackgetsfishgear_jack_get_gear";
	(Local_926[3 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_7_JackDismountWithGear@RSC_IG_7_JackMountWithGear";
	(Local_926[4 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_7_JackDismountWithGear@RSC_IG_7_JackDismountWithGear";
	(Local_926[5 /*6*/])->f_3 = "script@rcm@ABI1@LEADIN@RSC4@Base";
	(Local_926[6 /*6*/])->f_3 = "script@rcm@ABI1@LEADIN@RSC4@Leadin";
	(Local_926[7 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@rsc_ig_2_jackgetsfishgear_Arthur";
	(Local_926[8 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Left";
	(Local_926[9 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Front";
	(Local_926[10 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Right";
	(Local_926[11 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_12_FishingSureIsBoring@RSC_IG_12_FishingSureIsBoring";
	(Local_926[12 /*6*/])->f_3 = "script@rcm@ABI1@IG@RSC_IG_13_JackPickYarrow@RSC_IG_13_JackPicksYarrow";
	(Local_926[0 /*6*/])->f_4 = "ABI LEAD_IN";
	(Local_926[1 /*6*/])->f_4 = "JACK IDLE";
	(Local_926[2 /*6*/])->f_4 = "JACK GET GEAR";
	(Local_926[3 /*6*/])->f_4 = "MOUNT WITH GEAR";
	(Local_926[4 /*6*/])->f_4 = "DISMOUNT WITH GEAR";
	(Local_926[5 /*6*/])->f_4 = "AGIGAIL BASE";
	(Local_926[6 /*6*/])->f_4 = "OUTRO LEADIN";
	(Local_926[7 /*6*/])->f_4 = "ARTHUR UPPER";
	(Local_926[8 /*6*/])->f_4 = "JACK GEAR LEFT";
	(Local_926[9 /*6*/])->f_4 = "JACK GEAR CENTRE";
	(Local_926[10 /*6*/])->f_4 = "JACK GEAR RIGHT";
	(Local_926[11 /*6*/])->f_4 = "FISHING_BORING";
	(Local_926[12 /*6*/])->f_4 = "PICK YARROW";
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Local_825[iVar0 /*9*/] = 0;
		(Local_825[iVar0 /*9*/])->f_1 = 0;
		iVar0++;
	}
	(Local_825[0 /*9*/])->f_2 = "RABI1_GOJACK";
	(Local_825[1 /*9*/])->f_2 = "RABI1_GOFISH";
	(Local_825[2 /*9*/])->f_2 = "RABI1_PICKFLOWER";
	(Local_825[3 /*9*/])->f_2 = "RABI1_RETCAMP";
	(Local_825[4 /*9*/])->f_2 = "RABI1_GOMOUNT";
	(Local_825[5 /*9*/])->f_2 = "RABI1_WAITJK";
	(Local_825[6 /*9*/])->f_2 = "RABI1_RETJACK";
	(Local_825[7 /*9*/])->f_2 = "RABI1_RETHORSE";
	(Local_825[8 /*9*/])->f_2 = "RABI1_GORIVER";
	(Local_825[9 /*9*/])->f_2 = "RABI1_RETFISH";
	(Local_825[10 /*9*/])->f_2 = "RABI1_FISHCLOSE";
}

void func_191()
{
	*(vLocal_623[0 /*3*/]) = { -115.2755f, -42.8305f, 94.5858f };
	fLocal_642[0] = 351.688f;
	*(vLocal_649[0 /*3*/]) = { -124.5507f, -32.4855f, 94.7828f };
	fLocal_668[0] = 203.77f;
	*(vLocal_623[1 /*3*/]) = { -108.0446f, -14.7239f, 94.7822f };
	fLocal_642[1] = 353.1612f;
	*(vLocal_649[1 /*3*/]) = { 109.0446f, -15.7239f, 94.7822f };
	fLocal_668[1] = 353.1612f;
	*(vLocal_623[2 /*3*/]) = { -318.5669f, 385.8517f, 53.2584f };
	fLocal_642[2] = 114.5595f;
	*(vLocal_649[2 /*3*/]) = { -317.5669f, 386.8517f, 53.7584f };
	fLocal_668[2] = 61.3485f;
	*(vLocal_623[3 /*3*/]) = { -453.2686f, 199.6056f, 42.1735f };
	fLocal_642[3] = 171.3511f;
	*(vLocal_649[3 /*3*/]) = { -454.1484f, 202.5942f, 42.5257f };
	fLocal_668[3] = 209.7911f;
	*(vLocal_623[4 /*3*/]) = { -468.2877f, 188.7003f, 40.4181f };
	fLocal_642[4] = 15.9698f;
	*(vLocal_649[4 /*3*/]) = { -468.9155f, 192.2223f, 40.6252f };
	fLocal_668[4] = 304.651f;
	*(vLocal_623[5 /*3*/]) = { -115.4912f, -20.3122f, 94.9003f };
	fLocal_642[5] = 54.1943f;
	*(vLocal_649[5 /*3*/]) = { -116.9991f, -19.9179f, 94.9597f };
	fLocal_668[5] = 112.5979f;
}

bool func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return MISC::IS_BIT_SET(Global_40.f_6563.f_271, iVar0);
}

void func_193(var uParam0)
{
	func_541(uParam0);
	func_542(uParam0, 1);
	func_543(uParam0, 1);
	func_544(uParam0, 1);
	func_545(uParam0, 1);
	func_546(uParam0, 1);
	func_547(uParam0, 1);
	func_548(uParam0, 1);
	func_549(uParam0, 0);
}

int func_194(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (uParam0[iVar0 /*3*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_195(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_550((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_196(var uParam0, char* sParam1)
{
	struct<2> Var0;
	
	Var0 = { func_519(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xF66090013DE648D5(&Var0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			StringCopy(&(uParam0->f_2573), sParam1, 16);
		}
		else
		{
			uParam0->f_2573 = { func_520(uParam0->f_174) };
		}
	}
	if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_2573)))
	{
		HUD::_0xF66090013DE648D5(&(uParam0->f_2573));
	}
}

void func_197(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_551(uParam0, sParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_552(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	(*uParam0)[iVar0 /*3*/] = sParam1;
	((*uParam0)[iVar0 /*3*/])->f_2 = (((*uParam0)[iVar0 /*3*/])->f_2 || iParam2);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

int func_198(var uParam0)
{
	return uParam0->f_168;
}

void func_199(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_553((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_554((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_553((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_534(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_553((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_554((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_553((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_535(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_553(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_554(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_553(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_536((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_553((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_554((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_553((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_537(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_200(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_555(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_201(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;
	
	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE(1433015236))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
						}
						iVar5 = 1;
					}
					break;
				
				case -1740156697:
					if (iVar5 != 1)
					{
						*uParam0 = func_556(vVar0.z);
						iVar5 = 3;
					}
					break;
				
				case 922460030:
					iVar5 = 2;
					break;
				
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

void func_202(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_0xC805EB785824F712(bParam0);
	LAW::_0x710448D44A64C213(bParam0);
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_285(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_550(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_553((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_557(uParam0->f_41[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_558(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_553((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_559(uParam0->f_117[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (func_560((*uParam0)[iVar1 /*3*/]))
		{
			if (func_553(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_561((*uParam0)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_562(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_553((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_563(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_564(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_565(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_566(uParam0, iParam1))
	{
		iVar0 = 0;
	}
	if (uParam0->f_177 == 2 && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (iParam1 == 2)
	{
		if (!func_6(uParam0->f_172, 32))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_205()
{
	return Global_1572887->f_12;
}

bool func_206(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_207(vector3 vParam0, var uParam3)
{
	int iVar0;
	
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_133(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_442(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_567(0, 0);
		if (func_568(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_569(1, 0);
		}
	}
	else
	{
		func_569(1, 0);
	}
	func_154(0);
	func_570(0, vParam0, uParam3);
	return 1;
}

int func_208(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!func_209(iParam1, 207))
		{
			func_213(uParam0);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1))
		{
			func_213(uParam0);
			return 1;
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			fVar3 = 10f;
			if (FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3)))
			{
				func_213(uParam0);
				return 1;
			}
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_571(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_571(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_210(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_194, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_440(Global_35) == iLocal_306)
		{
			func_572("RABI1_GOMOUNT");
			return 1;
		}
	}
	return 0;
}

void func_212(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_213(var uParam0)
{
	if (!func_6(uParam0->f_172, 134217728))
	{
		func_1(&(uParam0->f_172), 134217728);
	}
}

void func_214(var uParam0)
{
	func_573(uParam0, 0f);
}

float func_215(var uParam0)
{
	if (!func_79(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_272(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_574() - uParam0->f_1);
}

void func_216(int iParam0, vector3 vParam1, char[4] cParam4, float fParam5)
{
	float fVar0;
	
	fVar0 = func_575(Global_35, vParam1, 0);
	switch (&iLocal_819[iParam0])
	{
		case 0:
			fLocal_187 = fVar0;
			fLocal_185 = (fVar0 + fParam5);
			func_214(&uLocal_522);
			iLocal_819[iParam0] = 1;
			break;
		
		case 1:
			if (func_438(&uLocal_522) > 10f)
			{
				if (fVar0 < fLocal_187)
				{
					func_243(&uLocal_522);
					iLocal_819[iParam0] = 0;
				}
				else if (fVar0 > fLocal_185)
				{
					func_413(cParam4, 7500, 1, 0, 0, 0, -1, -1, 0);
					fLocal_186 = fVar0;
					func_214(&uLocal_522);
					iLocal_819[iParam0] = 2;
				}
				else
				{
					func_214(&uLocal_522);
				}
			}
			break;
		
		case 2:
			if (func_438(&uLocal_522) > 7.5f)
			{
				if (fVar0 > fLocal_186)
				{
					iLocal_819[iParam0] = 3;
				}
				else
				{
					fLocal_185 = fVar0;
					func_214(&uLocal_522);
					iLocal_819[iParam0] = 1;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_217(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_576(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_218(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_219()
{
	if (!iLocal_141)
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 130948705) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 42190210)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 1623727326)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -922478227))
		{
			uLocal_561[0] = func_422("RABI1_NOGUNS", 7000, 0, 0, 0, 1);
			iLocal_141 = 1;
		}
	}
	else if (!iLocal_142)
	{
		if (!func_515(0))
		{
			if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 130948705) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 42190210)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 1623727326)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -922478227))
			{
				uLocal_561[0] = func_422("RABI1_NOGUNS", 7000, 0, 0, 0, 1);
				iLocal_142 = 1;
			}
		}
	}
}

int func_220(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_577(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_221(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_578(0);
	if (iVar0 == 11)
	{
		iVar1 = func_579(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_580(Global_40.f_4283);
				if (func_456(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_581(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_456(Global_1894899->f_2) && Global_1894899->f_2 == func_580(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_582(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_583(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_583(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_583(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_583(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_583(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_584(2) && !func_583(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_583(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_587(func_585(65536), 0, 3, func_586(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_577(iVar1);
			if (!func_571(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_583(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_583(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_583(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_583(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_583(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_583(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_583(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_577(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_583(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_583(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_588(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_589(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_583(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_590(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_591() <= 160)
			{
				return 1;
			}
			else
			{
				func_592(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_593(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_282(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_282(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_594(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_282(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < &Global_1898438)
		{
			return 1;
		}
		else if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
		{
			return 1;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_595())
		{
			if (func_413("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_223(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_596(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_282(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_224(int iParam0)
{
	if (iParam0 == 11 || iParam0 == 153)
	{
		return 26;
	}
	else if (iParam0 == 12 || iParam0 == 16)
	{
		return 5;
	}
	else if ((iParam0 == 13 || iParam0 == 154) || iParam0 == 15)
	{
		return 105;
	}
	else if (iParam0 == 14 || iParam0 == 135)
	{
		return 76;
	}
	else if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 155)
	{
		return 38;
	}
	else if (iParam0 == 19 || iParam0 == 20)
	{
		return 115;
	}
	return -1;
}

int func_225(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return func_457(iParam0, 33554432);
}

int func_226(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return func_457(iParam0, 67108864);
}

var func_227()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_228(int iParam0, int iParam1)
{
	return func_597(iParam0, iParam1);
}

int func_229(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_217(iParam0, bParam1, iParam2, iParam3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 32768 != 0)
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] > -1 && &((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] < 27)
		{
			if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != 0)
			{
				if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != ((*Global_1347702)[iParam0 /*49*/])->f_15)
				{
					return 0;
				}
			}
			else if (func_598(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_522(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_90(&Global_1935630, 4096))
			{
			}
			else if (func_599(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_600(func_523(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_231(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!func_601(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[iParam0 /*49*/])->f_22);
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (fParam1 > (100f * 100f))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 > 3)
	{
		iVar1 = 3;
	}
	while (iVar2 <= iVar1)
	{
		iVar3 = ((*Global_1347702)[iParam0 /*49*/])->f_23;
		iVar10 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, ((*Global_1347702)[iParam0 /*49*/])->f_22);
		iVar4 = iVar10;
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = iVar4;
				iVar11 = EVENT::_0xAD17A18215DD23D6(iVar5, 1, 0);
				if (iVar11 > 0 && iVar11 <= 2000)
				{
					iVar12 = EVENT::_0x796EECFF0C6D39BE(iVar5, 1, 0);
					if (iVar12 != -587661767 || Global_1935630->f_44 != 2055893578)
					{
						return 1;
					}
				}
				if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, -1504859554, 10f, true) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, 1885857703, 10f, true))
				{
					return 1;
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = iVar4;
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6, Global_35, 1, 1))
				{
					return 1;
				}
			}
		}
		iVar2++;
		((*Global_1347702)[iParam0 /*49*/])->f_23++;
		if (((*Global_1347702)[iParam0 /*49*/])->f_23 >= iVar0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
		}
	}
	if (Global_1945917->f_6 >= 0 && (MISC::GET_GAME_TIMER() - Global_1945917->f_6) <= 1000)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_1945917->f_1) && ENTITY::IS_ENTITY_A_PED(Global_1945917->f_1)) && ITEMSET::IS_IN_ITEMSET(Global_1945917->f_1, ((*Global_1347702)[iParam0 /*49*/])->f_22))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(var uParam0)
{
	return 0;
}

int func_234(float fParam0)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0);
	}
	if (iVar0 > 0 && fParam0 <= (50f * 50f))
	{
		return 1;
	}
	return 0;
}

void func_235()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_521(iVar0) && func_522(iVar0))
		{
			func_602(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_236(var uParam0)
{
	if (func_71(uParam0) == 0)
	{
		func_603(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
	}
	else
	{
		func_603(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0);
	}
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_276(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_277(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_277(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_277(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_277(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_238(int iParam0)
{
	Global_36579 = iParam0;
}

void func_239(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_240(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_246(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_604(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_241(var uParam0)
{
	if (func_605(uParam0->f_174))
	{
		func_606(262144, 5, 0, 1);
		func_607(720f, 1, 0);
	}
}

void func_242(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_243(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_244(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_71(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_750 = uParam0->f_748;
		}
	}
	if (uParam0->f_750 >= 0)
	{
		iVar1 = PED::_0x62DE46F061CAA468();
		if (uParam0->f_750 < iVar1)
		{
			iVar2 = (iVar1 - uParam0->f_750);
			PED::_0x7D4E70A67A651C71(iVar2);
		}
		else if (uParam0->f_750 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_750);
		}
	}
	uParam0->f_748 = -1;
	uParam0->f_749 = -1;
}

float func_245(int iParam0)
{
	float fVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_16 > 250f)
	{
		fVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_16;
	}
	else
	{
		fVar0 = 250f;
	}
	return fVar0;
}

void func_246(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	
	if (!func_206(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_146(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_60(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_608(iParam0);
	if (!bParam5 && func_609(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x45F13B7E0A15C880(((*Global_1347702)[iParam0 /*49*/])->f_38, func_505(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x554D9D53F696D002(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_610(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_604(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_205() == -1)
	{
		func_611(iParam0);
		iVar0 = func_580(Global_40.f_4283);
		if (func_456(iVar0) && func_612(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_613(iVar0);
		}
		if (func_614(iParam0, iVar1, iVar0))
		{
			func_615(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_609(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_616(iParam0))
		{
			if (iParam0 == 97)
			{
				func_365(185, 0);
			}
			else
			{
				func_365(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_422(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_278(iParam0, 2);
	}
}

void func_247(int iParam0, float fParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 == 0)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (fParam1 < (((*Global_1347702)[iParam0 /*49*/])->f_18 * ((*Global_1347702)[iParam0 /*49*/])->f_18))
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_248(int iParam0, vector3 vParam1, float fParam4)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 < 0f)
	{
		func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (func_617(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_246(iParam0, vParam1, 1, 0);
	}
}

void func_249(int iParam0)
{
	if (func_618(179))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return;
	}
	else if (func_609(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_619())
	{
		func_620(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_250(int iParam0)
{
	if (func_618(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_609(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_619())
	{
		func_620(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_251(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_252(var uParam0)
{
	struct<8> Var0;
	
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_751))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_751, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		Var0 = { func_621(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_253()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_254(var uParam0)
{
	return uParam0->f_350;
}

void func_255(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_622(uParam0) };
	func_309(uParam0, &Var0);
}

void func_256(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_366[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_350 };
			*(uParam0->f_366[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_309(uParam0, sParam1);
	func_623(uParam0, 2097152, 1);
	func_310(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_257(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_624(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	
	if (bParam3)
	{
		uParam0->f_415++;
		if (uParam0->f_415 < 10)
		{
			return (func_625(uParam0, 256) && !func_625(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_626(uParam0, sParam1);
	if (!func_625(uParam0, 64))
	{
		if (!func_257(func_627(uParam0)))
		{
			func_310(uParam0, 64);
		}
		else
		{
			vVar0 = { func_628(uParam0) };
			if (!func_257(vVar0))
			{
				func_629(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_575(Global_35, func_627(uParam0), 1);
	if (func_625(uParam0, 128) || func_625(uParam0, 256))
	{
		if ((fVar3 >= func_630(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_631();
				uParam0->f_433 = 0;
			}
			func_632(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_367(uParam0);
			func_623(uParam0, 128, 1);
			func_623(uParam0, 256, 1);
			func_623(uParam0, 4096, 1);
			func_623(uParam0, 32768, 1);
			func_623(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_633(uParam0) || bParam2)
	{
		if (!func_625(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
			{
				if (func_633(uParam0) >= func_630(uParam0))
				{
				}
				Var4 = { func_254(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_435(uParam0);
				}
				Var4 = { func_254(uParam0) };
				iVar12 = 256;
				if (!func_625(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_634(uParam0, 0, 0, 0, 0);
				func_310(uParam0, 128);
			}
		}
	}
	if (func_625(uParam0, 128))
	{
		if (func_625(uParam0, 256) && !func_625(uParam0, 4194304))
		{
			return 1;
		}
		func_635(uParam0);
		if (!uParam0->f_433)
		{
			if (func_636())
			{
				func_637(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_622(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_366[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_366[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_366[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_625(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_625(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_310(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_310(uParam0, 256);
			func_623(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_260(var uParam0)
{
}

bool func_261(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_262(var uParam0, char* sParam1, int iParam2)
{
	if (func_261(sParam1, 2))
	{
		return 0;
	}
	if (func_261(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_638(sParam1) == 9 || func_638(sParam1) == 12) || func_638(sParam1) == 13)
	{
		if (!func_261(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_639(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_640(uParam0, func_638(sParam1));
	}
	return 0;
}

void func_263(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_639(sParam0, 1);
}

int func_264(var uParam0, char* sParam1, int iParam2)
{
	if (!func_261(sParam1, 1))
	{
		return 0;
	}
	if (func_261(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_641(sParam1) == 9 || func_641(sParam1) == 12) || func_641(sParam1) == 13)
	{
		if (!func_261(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_639(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_640(uParam0, func_641(sParam1));
	}
	return 0;
}

void func_265(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_639(sParam0, 2);
}

int func_266(var uParam0, char* sParam1, int iParam2)
{
	if (func_261(sParam1, 1))
	{
		return 0;
	}
	if (func_638(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_638(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_642(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_638(sParam1) == 9 || func_638(sParam1) == 12) || func_638(sParam1) == 13) && func_261(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_638(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		
		case 4:
			return func_375(&(uParam0->f_753));
		
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		
		case 9:
		case 12:
		case 13:
			if (!func_261(sParam1, 8))
			{
				func_639(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_267(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_639(sParam0, 1);
}

int func_268(char* sParam0, bool bParam1)
{
	if (func_261(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_639(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_639(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_639(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_639(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_639(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_639(sParam0, 1);
		return 1;
	}
	func_639(sParam0, 1);
	return 0;
}

void func_269(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_261(uParam0->f_482[iVar0 /*16*/], 1048576) && func_261(uParam0->f_482[iVar0 /*16*/], 4)) && !func_261(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_270(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (!bParam4 && !uParam0->f_782)
	{
		if (!func_643(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return 0;
		}
	}
	if (!uParam0->f_783)
	{
		iVar20 = uParam0->f_790;
		while (iVar20 <= (uParam0->f_789 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			if (func_644(uParam0, 0))
			{
				if (func_645(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_646(uParam0, 1, &iVar0))
					{
					}
					if (func_647(uParam0, 3, &cVar2))
					{
					}
					if (func_646(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_646(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_646(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_646(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_646(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_648(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_639((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_639(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_639(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_261(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_648(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_639(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
							uParam0->f_788++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_790 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
		uParam0->f_783 = 1;
	}
	if (!func_142(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (func_644(uParam0, 12))
			{
				if (func_646(uParam0, 13, &iVar0))
				{
				}
				if (func_646(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_772[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_792 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
	}
	uParam0->f_781 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	uParam0->f_783 = 0;
	uParam0->f_784 = 1;
	if (!bParam4)
	{
		func_649(uParam0);
	}
	return 1;
}

bool func_271(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_272(var uParam0)
{
	return func_271(*uParam0, 2);
}

int func_273()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_274(var uParam0)
{
	vector3 vVar0;
	
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		STREAMING::REQUEST_MODEL(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28))
		{
			return 0;
		}
		vVar0 = { func_69(uParam0->f_174) };
		func_650(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_651(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_651(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43) && !PED::IS_PED_INJURED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, true, true);
		}
		return 1;
	}
	return 0;
}

int func_275(var uParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_32(uParam0, 64))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_297))
		{
			iLocal_297 = OBJECT::CREATE_OBJECT(iLocal_280, vLocal_572, false, true, false, false, true);
			iVar0 = 0;
		}
		if (func_307(uParam0, vLocal_564, fLocal_567))
		{
			if (!func_306(uParam0))
			{
				func_652();
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (!func_299(vLocal_594, fLocal_597, 0))
		{
			iVar0 = 0;
		}
		if (!func_305())
		{
			iVar0 = 0;
		}
	}
	else if (!func_653())
	{
		iVar0 = 0;
	}
	if (iVar0 && func_302())
	{
		if (func_32(uParam0, 64) || ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_926[0 /*6*/]), 0))
		{
			func_654(uParam0, Global_35, "ARTHUR", 1);
			func_655();
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_277(int iParam0)
{
	var uVar0;
	
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_278(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_279(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	uVar10 = func_656(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_276(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_277(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_277(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_277(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_277(iParam0)))
	{
		func_278(iParam0, 4);
	}
}

void func_280(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];
	
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&Var1, "PSTR_O_", 16);
		StringConCat(&Var1, &cVar0, 16);
		cVar3 = func_657(0, &Var1, 0, 0, -1, -1);
		func_658(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_281(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_206(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_237(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

int func_282(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_497(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_283(int iParam0, bool bParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_109(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_110(iParam0), func_111(iParam0), func_112(iParam0), func_109(iParam0), Global_36);
		}
	}
	func_501(iParam0, 1);
	bParam1 = bParam1;
}

void func_284(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_282(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	if (bParam1)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_109(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_659(func_111(iParam0));
			}
			if (func_205() != 0)
			{
				STATS::_0xB2A38826E5886E83(func_109(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_660(iParam0);
	if (!func_57(func_56(0)))
	{
		func_501(iParam0, 3);
		func_203(bParam2);
		if (func_205() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_500(1);
		}
		func_661(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_662(&Global_0, 1024);
		}
		if (func_205() == -1)
		{
			func_663(&(Global_1347343->f_11), 536870912);
			func_664(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_665(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_666(0);
			}
		}
		if (func_205() == -1)
		{
			iVar1 = func_529(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_531();
				switch (iVar1)
				{
					case 0:
						func_667(0);
						break;
					
					case 1:
						func_667(1);
						break;
					
					case 2:
						func_667(2);
						break;
					
					case 3:
						func_667(3);
						break;
					
					case 4:
						func_667(4);
						break;
					
					case 5:
						func_667(5);
						break;
					
					case 6:
						func_667(5);
						break;
					
					case 7:
						func_667(7);
						break;
					
					case 8:
						func_667(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_111(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_667(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_111(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_667(11);
						break;
					
					default:
						iVar1 = func_531();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_668(0);
									break;
								
								case 1:
									func_668(1);
									break;
								
								case 2:
									func_668(2);
									break;
								
								case 3:
									func_668(3);
									break;
								
								case 4:
									func_668(4);
									break;
								
								case 5:
									func_668(5);
									break;
								
								case 6:
									func_668(5);
									break;
								
								case 7:
									func_668(7);
									break;
								
								case 8:
									func_668(8);
									break;
								
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_504(1);
	}
	else
	{
		func_661(iParam0, -1);
		func_501(iParam0, 4);
	}
	func_532(iParam0, 0);
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_286(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_749 == -1)
	{
		if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_749 = 15;
		}
	}
	if (uParam0->f_749 >= 0)
	{
		if (uParam0->f_749 < PED::_0x62DE46F061CAA468())
		{
			iVar0 = (PED::_0x62DE46F061CAA468() - uParam0->f_749);
			PED::_0x7D4E70A67A651C71(iVar0);
		}
		else if (uParam0->f_749 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_749);
		}
	}
	uParam0->f_748 = -1;
}

void func_287(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x32A1E3B83D501096(iVar3)))
					{
						_NAMESPACE48::_0x7B204F88F6C3D287(_NAMESPACE48::_0x32A1E3B83D501096(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, 0, 0);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_288()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_521(iVar0))
		{
			func_602(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_289(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_583(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_583(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, 379542007, 0, 0))
		{
			if (!func_669(379542007))
			{
				func_670(379542007);
			}
			func_671(Global_35, 379542007, 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, 379542007);
			if (iVar1 < iVar0)
			{
				WEAPON::_0xB190BCA3F4042F95(Global_35, 379542007, (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_672(0f);
	Global_1935436->f_11 = 1;
	if (func_473())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_673();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_291(var uParam0)
{
	func_242(0);
}

int func_292(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_293(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;
	
	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_674(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_675(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_297() == iParam9 && func_676() == iParam10) && !func_677(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_297() != iParam9 && !func_677(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_678(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

void func_294(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iLocal_789 = 0;
			StringCopy(&(uParam0->f_2575), "RABI1_RSC_1", 24);
			func_679(uParam0, vLocal_757);
			func_353(uParam0, iLocal_300, "AbigailRoberts", 0, 0, 0);
			func_353(uParam0, Global_35, 0, 0, 0, 0);
			func_680(uParam0, iLocal_297, 0, 0, 0, 0);
			func_681(uParam0, func_69(uParam0->f_174), "LAUNCH_RESTRICT");
			if (VOLUME::_0x92A78D0BEDB332A3(iLocal_760))
			{
				iLocal_473 = PED::_0x4C39C95AE5DB1329(iLocal_760, false, 15);
			}
			func_683(uParam0, 102951/*func_682*/);
			func_685(uParam0, 103004/*func_684*/);
			func_1(&(uParam0->f_172), 16);
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
			{
				iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vLocal_609, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_295))
			{
				iLocal_295 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_609, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_296))
			{
				iLocal_296 = OBJECT::CREATE_OBJECT(iLocal_277, vLocal_605, true, true, false, false, true);
			}
			if ((((func_686(uParam0, 0) && func_686(uParam0, 1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_291)) && ENTITY::DOES_ENTITY_EXIST(iLocal_295)) && ENTITY::DOES_ENTITY_EXIST(iLocal_296))
			{
				iLocal_789 = 1;
				StringCopy(&(uParam0->f_2575), "RABI1_RSC2", 24);
				func_679(uParam0, vLocal_675);
				func_680(uParam0, iLocal_291, sLocal_484, 0, 0, 0);
				func_680(uParam0, iLocal_295, sLocal_483, 0, 0, 0);
				func_680(uParam0, iLocal_296, sLocal_481, 0, 0, 0);
				func_353(uParam0, Global_35, 0, 0, 0, 0);
				func_353(uParam0, iLocal_301, 0, 0, 0, 0);
				func_353(uParam0, iLocal_304, "EdgarRoss", 0, -46607261, 0);
				func_353(uParam0, iLocal_305, "MiltonAndrews", 0, 16796454, 0);
				func_353(uParam0, &(uLocal_310[0]), "Horse_01", 0, -1038436471, 0);
				func_353(uParam0, &(uLocal_310[1]), "Horse_01^1", 0, -1038436471, 0);
				func_685(uParam0, 103004/*func_684*/);
				func_255(&(uParam0->f_206));
				func_1(&(uParam0->f_172), 16);
				func_681(uParam0, vLocal_675, "FISHING_RESTRICT");
				iLocal_138 = 1;
			}
			break;
		
		case 2:
			iLocal_789 = 2;
			StringCopy(&(uParam0->f_2575), "RABI1_RSC4", 24);
			func_679(uParam0, vLocal_568);
			func_255(&(uParam0->f_206));
			if (func_210(13))
			{
				func_410(13);
			}
			func_332(vLocal_684, 10f, 0);
			func_353(uParam0, Global_35, 0, 0, 0, 0);
			func_353(uParam0, iLocal_300, 0, 0, 0, 0);
			func_353(uParam0, iLocal_301, 0, 0, 0, 0);
			func_353(uParam0, iLocal_307, 0, 0, 0, 0);
			func_680(uParam0, iLocal_291, sLocal_484, 0, 0, 0);
			func_1(&(uParam0->f_172), 16);
			func_681(uParam0, vLocal_568, "OUTRO_RESTRICT");
			func_685(uParam0, 103004/*func_684*/);
			break;
	}
}

int func_295(var uParam0)
{
	char[] cVar0[8];
	
	if (!func_687(uParam0))
	{
		return 0;
	}
	cVar0 = func_308();
	if (!MISC::ARE_STRINGS_EQUAL(func_688(func_254(&(uParam0->f_206))), cVar0))
	{
		func_309(&(uParam0->f_206), cVar0);
		func_310(&(uParam0->f_206), 33554432);
		func_256(&(uParam0->f_206), cVar0);
	}
	if (BUILTIN::VDIST(Global_36, -150.6659f, -16.8569f, 95.28f) < 2f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -719620017, false);
	}
	if (func_652())
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_301, vLocal_594, true, false, true, true);
		return 1;
	}
	else
	{
		func_689();
		func_690();
		if (bLocal_150)
		{
			func_691(&iLocal_300, &iLocal_313, &Local_374, 4f, -1082130432, 0);
		}
	}
	return 0;
}

int func_296(var uParam0)
{
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		func_161(uParam0);
		return 1;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				func_692(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_692(0, 1, 1, 1);
			if (func_693(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_161(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_297()
{
	return Global_1572864->f_9;
}

int func_298()
{
	int iVar0;
	
	if (func_694(4))
	{
		return 1;
	}
	iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), -164.0416f, -34.3493f, 94.0192f) < 5f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vLocal_609) < 5f)
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, 771.0912f, 289.6954f, 114.2774f, true, false, true, true);
			func_695(4);
			return 1;
		}
		else
		{
			func_695(4);
			return 1;
		}
	}
	else
	{
		func_695(4);
		return 1;
	}
	return 0;
}

int func_299(vector3 vParam0, float fParam3, bool bParam4)
{
	if (&iLocal_172[1])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		iLocal_301 = func_696(14, 1, 1, 0f, 0f, 0f, 0f, bParam4, 1, 0, 0, 1, 1, 178615350, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (func_209(iLocal_301, 257))
	{
		PED::_0xF7EA250B9A919E03(27283314, iLocal_301);
		PED::_0xF7EA250B9A919E03(327177806, iLocal_301);
		if (PED::_0x854BC9B1A1CCD034(27283314, iLocal_301) && PED::_0x854BC9B1A1CCD034(327177806, iLocal_301))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_301, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_301, true, true);
			}
			if (bParam4)
			{
				ENTITY::_0x203BEFFDBE12E96A(iLocal_301, vParam0, fParam3, 1, false, 1);
			}
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_301, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_301, 1030835986);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 259, true);
			func_511(0);
			func_697(14, 1, 1, 1);
			func_518(14, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 307, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 344, true);
			iLocal_172[1] = 1;
			return 1;
		}
	}
	return 0;
}

int func_300()
{
	if (iLocal_139)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_292))
	{
		iLocal_292 = OBJECT::CREATE_OBJECT(iLocal_275, vLocal_594, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_292))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_275);
		iLocal_139 = 1;
		return 1;
	}
	return 0;
}

int func_301(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 1, "base", false, true);
		return 0;
	}
	else if (!uParam0->f_1)
	{
		if ((func_299(vLocal_594, fLocal_597, 1) && func_300()) && func_323(vLocal_727, vLocal_730, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JackMarston", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_485, iLocal_292, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_484, iLocal_291, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return 0;
		}
	}
	else if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_302()
{
	if (iLocal_160)
	{
		return 1;
	}
	if (!func_698(&iLocal_776))
	{
		iLocal_776 = GRAPHICS::_0xFA50F79257745E74(-466.4861f, 202.383f, 41.3731f, 1.5f, 1, 4, 0);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_770))
	{
		iLocal_770 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_678, 0f, 0f, 61f, 15f, 15f, 10f, "DISMOUNT_VOL");
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_764))
	{
		iLocal_764 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_742, vLocal_754, vLocal_745, "WATERS_EDGE_SMALL");
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_765))
	{
		iLocal_765 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_748, vLocal_754, vLocal_751, "WATER_EDGE_LARGE");
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_767))
	{
		iLocal_767 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-464.467f, 187.957f, 42.912f, 0f, 0f, 57f, 32f, 57f, 5f, "FISH_BLOCK_VOL");
		return 0;
	}
	if (iLocal_472 == 0)
	{
		func_699(iLocal_767, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_767, 73728, 512, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_767, 73728, 512, 0, -1, -1, 2);
		iLocal_472 = PED::_0x4C39C95AE5DB1329(iLocal_767, false, 15);
		return 0;
	}
	iLocal_160 = 1;
	return 1;
}

int func_303()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_761))
	{
		iLocal_761 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-113.7305f, -17.88992f, 96.04501f, 0f, 0f, -18.3f, 6.504865f, 5.977349f, 2.698479f, "RABI1_HitchBlockingVol");
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_766))
	{
		iLocal_766 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_733, vLocal_736, vLocal_739, "CLEAR_VOL");
		return 0;
	}
	if ((VOLUME::_0x92A78D0BEDB332A3(iLocal_761) && VOLUME::_0x92A78D0BEDB332A3(iLocal_766)) && !func_210(13))
	{
		iLocal_471 = func_700(iLocal_761, 0, 0, 0);
		func_701(iLocal_766, 0, 0, 0, 0, 0);
		func_326(13);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_308))
	{
		iLocal_308 = func_702(0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_303))
	{
		iLocal_303 = func_702(1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_308))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_308, vLocal_695, fLocal_698, 0, false, 1);
		if (!func_352(iLocal_308, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_308, -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_308, 48, true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_303, vLocal_699, fLocal_702, 0, false, 1);
		if (!func_352(iLocal_303, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_303, -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_303, 48, true);
		}
	}
	return 1;
}

int func_304()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_775))
	{
		iLocal_775 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-113.791f, -27.893f, 95.064f, 0f, 0f, 0f, 6f, 6f, 3f, "JACK_PLAY");
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_775))
	{
		if (iLocal_477 == 0)
		{
			iLocal_477 = func_700(iLocal_775, 0, 0, 0);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_305()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_773))
	{
		iLocal_773 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-164.0416f, -34.3493f, 93.0192f, 0f, 0f, 0f, 5f, 4f, 5f, "ROCK_BLOCK");
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_773))
	{
		if (iLocal_475 == 0)
		{
			iLocal_475 = func_700(iLocal_773, 0, 0, 0);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_306(var uParam0)
{
	if (func_32(uParam0, 64) && func_32(uParam0, 128))
	{
		return 1;
	}
	return 0;
}

int func_307(var uParam0, vector3 vParam1, float fParam4)
{
	if (&iLocal_172[0])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
	{
		iLocal_300 = func_696(13, 1, 1, vParam1.x, vParam1.y, vParam1.z, fParam4, 1, 1, 0, 0, 0, 1, -922193456, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && func_209(iLocal_300, 257))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_300, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_300, true, true);
		}
		if (!func_703(ENTITY::GET_ENTITY_COORDS(iLocal_300, false, false), vParam1, 1f, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_300, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(iLocal_300, vParam1, fParam4, 1, false, 1);
		}
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_300, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_300, 1030835986);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 153, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 301, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 130, true);
		func_704();
		func_654(uParam0, iLocal_300, "ABIGAIL", 1);
		iLocal_172[0] = 1;
		return 1;
	}
	return 0;
}

char* func_308()
{
	char* sVar0;
	
	if (func_705())
	{
		if (func_706(Global_35, -1725579161, 0))
		{
			sVar0 = "2-NightVersion-PlayerWearingHat";
		}
		else
		{
			sVar0 = "3-NightVersion-PlayerNotWearingHat";
		}
		bLocal_143 = true;
	}
	else
	{
		sVar0 = "1-DayVersion";
	}
	return sVar0;
}

void func_309(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_350), sParam1, 64);
}

void func_310(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_311()
{
	if (!func_210(9))
	{
		MISC::_0x59174F1AFE095B5A(-173507739, false, true, true, 60f, false);
		func_326(9);
	}
}

void func_312(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_707();
	if (func_708(iVar0) != iParam0)
	{
		func_709(&iVar0, iParam0);
		func_710(&iVar0, iParam1);
		func_711(&iVar0, 0);
		CLOCK::SET_CLOCK_DATE(func_712(iVar0), func_713(iVar0), func_714(iVar0));
		CLOCK::SET_CLOCK_TIME(func_708(iVar0), func_715(iVar0), func_716(iVar0));
	}
}

void func_313(var uParam0)
{
	if (!func_210(18))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
		{
			func_654(uParam0, iLocal_301, "JACK", 1);
			func_326(18);
		}
	}
}

void func_314(int iParam0, int iParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(&(Local_926[iParam0 /*6*/])))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(&(Local_926[iParam0 /*6*/]), 1, 0))
		{
			return;
		}
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_926[iParam0 /*6*/]), 0))
		{
			switch (iParam0)
			{
				case 1:
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "base");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_301))
						{
							return;
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_301, 1, 1);
					}
					break;
				
				case 5:
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "pblBase");
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
					{
						return;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[iParam0 /*6*/]), "AbigailRoberts", iLocal_300, 0);
						TASK::CLEAR_PED_TASKS(iLocal_300, 1, 0);
					}
					break;
				
				case 6:
					break;
			}
			ANIMSCENE::START_ANIM_SCENE(&(Local_926[iParam0 /*6*/]));
		}
		if ((Local_926[iParam0 /*6*/])->f_5 == iParam1)
		{
			return;
		}
		(Local_926[iParam0 /*6*/])->f_5 = iParam1;
		switch ((Local_926[iParam0 /*6*/])->f_5)
		{
			case 1:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "base"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "base", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[iParam0 /*6*/]), "Internal_Loop", false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "Exit");
				}
				break;
			
			case 2:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "Exit"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "Exit", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[iParam0 /*6*/]), "Internal_Loop", true, false);
				}
				break;
			
			case 6:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "pblBase"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "pblBase", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[iParam0 /*6*/]), "InternalLoop", false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[iParam0 /*6*/]), "Leadin");
				}
				break;
			
			case 7:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[iParam0 /*6*/]), "Leadin"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[iParam0 /*6*/]), "Leadin", true);
					AUDIO::START_PRELOADED_CONVERSATION("ABI1_RSC4_LEAD");
				}
				break;
			
			case 8:
				break;
		}
	}
}

int func_315(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

void func_316(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_717(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_718(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_719(iParam0->f_6, iParam0->f_5, 0);
			}
			func_720(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_721(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_317(bool bParam0)
{
	func_518(14, 0);
	if (bParam0)
	{
		func_722(14);
	}
	else
	{
		func_372(14);
	}
}

void func_318(var uParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	func_471(uParam0->f_174, sParam1, iParam2, fParam3, sParam4, sParam5, sParam6, sParam7, iParam8);
}

void func_319(var uParam0, int iParam1, int iParam2)
{
	func_723(uParam0, iParam2);
	iLocal_785 = iParam2;
}

void func_320(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_521(iParam0))
	{
		return;
	}
	if (func_517(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_602(iParam0, 56, 1);
		func_80(&(Global_1359489->f_40), 1);
	}
	func_524(iParam0, 0);
	func_724(iParam0, 4, 0);
	func_372(iParam0);
	func_725(iParam0);
	func_726(iParam0, 37, 1);
	bVar0 = func_209(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_727(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_599(iParam0, 64, 1))
	{
		func_726(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_726(iParam0, 33, 1);
		func_726(iParam0, 34, 1);
		func_728(iParam0, 1056964608, -1, 1061158912);
		func_729(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_602(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_602(iParam0, 35, 1);
			if (bParam8)
			{
				func_602(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_730(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_726(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_602(iParam0, 33, 1);
		func_729(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_80(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_243(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_602(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_731(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_599(iParam0, 45, 1))
	{
		func_726(iParam0, 45, 1);
	}
	func_732(iParam0, 16, 1);
	func_726(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_209(func_733(iParam0), 0))
		{
			func_734(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_321(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_735(uParam0, &iLocal_306, vParam1, fParam4, 1, 1, 1, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, true);
			PED::SET_PED_CONFIG_FLAG(Global_35, 300, true);
			PED::_SET_PED_SCALE(iLocal_306, 1f);
			return 1;
		}
	}
	return 0;
}

int func_322(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		bParam1 = true;
	}
	if (bParam0)
	{
		func_736(bParam1);
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
		{
			func_242(0);
			return 1;
		}
	}
	else
	{
		func_737(1);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_323(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vParam0, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		if (func_677(vParam3, vLocal_727))
		{
			ENTITY::SET_ENTITY_ROTATION(iLocal_291, vLocal_730, 2, true);
		}
		if (bParam6)
		{
			func_326(5);
		}
		return 1;
	}
	return 0;
}

void func_324(int iParam0)
{
	switch (func_205())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

void func_325()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (func_384(18))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_291))
			{
				ENTITY::DETACH_ENTITY(iLocal_291, false, true);
				func_738(18);
			}
		}
		if (!func_384(19))
		{
			if (PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInLeftHand"))
			{
				PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInLeftHand", 0, -1);
			}
			if (PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInRightHand"))
			{
				PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInRightHand", 0, -1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_291, iLocal_306, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_306, PED::GET_PED_BONE_INDEX(iLocal_306, 29245), vLocal_721, vLocal_724, 0, 0, 0, 0, 2, 1, 0, 0);
			func_410(5);
			func_333(19);
		}
	}
}

void func_326(int iParam0)
{
	if (!func_210(iParam0))
	{
		MISC::SET_BIT(&iLocal_194, iParam0);
	}
}

void func_327(vector3 vParam0, bool bParam3)
{
	func_405(&iLocal_137);
	if (!bParam3)
	{
		iLocal_137 = func_739(408396114, vParam0, 1);
		if (MAP::DOES_BLIP_EXIST(iLocal_137))
		{
			if (func_740(vParam0, vLocal_684, 1056964608, 1))
			{
				if (bLocal_161)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(iLocal_768))
					{
						PATHFIND::_0xF2A2177AC848B3A8(iLocal_768, 0, 1);
					}
				}
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_CBLIP");
			}
		}
	}
	else if (func_740(vParam0, vLocal_675, 1056964608, 1))
	{
		if (bLocal_168)
		{
			iLocal_137 = func_741(1259054292, iLocal_764, 1);
		}
		else
		{
			iLocal_137 = func_741(1259054292, iLocal_765, 1);
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
	}
	else if (func_740(vParam0, vLocal_678, 1056964608, 1))
	{
		iLocal_137 = func_741(-308585968, iLocal_770, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_137))
	{
		if (BUILTIN::VDIST(Global_36, MAP::GET_BLIP_COORDS(iLocal_137)) > 40f)
		{
			MAP::_0x662D364ABF16DE2F(iLocal_137, -1878373110);
		}
		if (func_740(vParam0, vLocal_675, 1056964608, 1))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
		}
	}
	vLocal_681 = { vParam0 };
}

int func_328(bool bParam0)
{
	int iVar0;
	
	iVar0 = STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
	if (bParam0)
	{
		if (!func_742())
		{
			return 0;
		}
	}
	if (!func_79(&uLocal_516))
	{
		func_80(&uLocal_516, 0);
	}
	if (func_438(&uLocal_516) < 15f)
	{
		if (iVar0 > 0)
		{
			return 0;
		}
		else
		{
			func_243(&uLocal_516);
			return 1;
		}
	}
	else
	{
		func_243(&uLocal_516);
		return 1;
	}
	return 0;
}

void func_329(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 297, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 315, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 130, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 331, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 330, bParam0);
}

void func_330()
{
	iLocal_189 = func_743(-1756227506, 2078959127);
	iLocal_190 = func_743(-1756227506, 234331408);
}

void func_331()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_332(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_333(int iParam0)
{
	if (!func_384(iParam0))
	{
		MISC::SET_BIT(&iLocal_195, iParam0);
	}
}

void func_334(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (func_384(19))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_291))
			{
				ENTITY::DETACH_ENTITY(iLocal_291, false, true);
				func_738(19);
			}
		}
		if (ENTITY::_0x083D497D57B7400F(iLocal_291))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, false);
		}
		func_744(bParam0);
		if (bParam0)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_301, PED::GET_PED_BONE_INDEX(iLocal_301, 37709), vLocal_703, vLocal_706, 0, 0, 0, 0, 2, 1, 0, 0);
		}
		else
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_301, PED::GET_PED_BONE_INDEX(iLocal_301, 7966), vLocal_709, vLocal_712, 0, 0, 0, 0, 2, 1, 0, 0);
		}
		if (!bParam1)
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, false);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
			func_326(5);
		}
		func_333(18);
	}
}

void func_335(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

void func_336()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_310[iVar0])))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(&(uLocal_310[iVar0])))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(uLocal_310[iVar0]), true);
				PED::_0xC9151483CC06A414(&(uLocal_310[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_337(int iParam0)
{
	if (Global_1900073->f_11 != iParam0)
	{
		Global_1900073->f_11 = iParam0;
	}
}

void func_338(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_339(int iParam0)
{
	if (Global_1900073->f_19 != iParam0)
	{
		Global_1900073->f_19 = iParam0;
	}
}

void func_340(int iParam0)
{
	if (Global_1900073->f_20 != iParam0)
	{
		Global_1900073->f_20 = iParam0;
	}
}

void func_341(int iParam0)
{
	if (Global_1900073->f_22 != iParam0)
	{
		Global_1900073->f_22 = iParam0;
	}
}

void func_342(int iParam0)
{
	if (Global_1900073->f_23 != iParam0)
	{
		Global_1900073->f_23 = iParam0;
	}
}

void func_343(int iParam0)
{
	if (Global_1900073->f_24 != iParam0)
	{
		Global_1900073->f_24 = iParam0;
	}
}

void func_344(int iParam0)
{
	if (iParam0 == 1)
	{
		func_745(2);
	}
	else
	{
		func_746(2);
	}
}

void func_345(int iParam0)
{
	if (iParam0 == 1)
	{
		func_745(64);
	}
	else
	{
		func_746(64);
	}
}

void func_346(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2011525043, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1618006066, false);
	if (PED::_0xA29FD00D45311EB7(Global_35, "cautious") <= 0f)
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, "cautious", 1f, -1);
	}
	func_313(uParam0);
	func_738(17);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_773))
	{
		func_396(&iLocal_475, iLocal_773, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_773);
	}
	func_323(ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 0f, 0f, 0f, 1);
	func_334(1, 1);
	func_326(5);
	func_371(1, 1, 0);
	if (!func_352(iLocal_301, 1056466932))
	{
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
	}
	func_317(0);
	func_344(1);
	func_339(0);
	func_340(0);
	TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
	TASK::TASK_STAND_STILL(iLocal_306, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
	fLocal_925 = func_437();
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_310[0])))
	{
		func_23(uLocal_310[0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_310[1])))
	{
		func_23(uLocal_310[1]);
	}
	func_351(&iLocal_296);
	func_351(&iLocal_294);
	func_351(&iLocal_295);
	HUD::_0x160825DADF1B04B3();
	func_397();
	func_293(uParam0, func_61(5), func_61(6), 5, 6, 0);
	func_318(uParam0, (Local_825[4 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
	func_319(uParam0, iLocal_785, 14);
}

int func_347(bool bParam0)
{
	if (func_210(10))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (func_747(&iLocal_306, vLocal_684, fLocal_687, 1, 1, 1, 1))
		{
			POPULATION::_0xF74E134F40192884(iLocal_306, 2);
			if (bParam0)
			{
				PHYSICS::_0x06AADE17334F7A40(iLocal_306, -116.5877f, -17.9793f, 95.3f);
			}
			func_326(10);
			return 1;
		}
	}
	return 0;
}

int func_348(var uParam0, int iParam1, int iParam2)
{
	if (func_210(0))
	{
		return 1;
	}
	if (!func_748())
	{
		return 0;
	}
	if (func_575(Global_35, vLocal_568, 0) < 150f || iParam1)
	{
		if (func_303())
		{
			if (!func_749())
			{
				return 0;
			}
			if (!func_307(uParam0, vLocal_568, fLocal_571))
			{
				return 0;
			}
			if (!func_750())
			{
				return 0;
			}
			if (!func_751(Local_926[5 /*6*/]))
			{
				return 0;
			}
			if (!func_752(Local_926[6 /*6*/], iParam2))
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_307))
			{
				func_314(5, 6);
				ENTITY::_0x203BEFFDBE12E96A(iLocal_307, vLocal_583, fLocal_586, 1, false, 1);
				func_753(iLocal_307, 1253642035, -1, 0, 0, -1082130432);
				if (!func_352(iLocal_307, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_307, -1);
				}
				func_326(0);
				func_294(uParam0, 2);
				return 1;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_57(iParam0))
	{
		return 1;
	}
	iVar0 = func_110(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = func_111(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (func_754(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (func_594(134, 0) && func_755(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (func_754(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 16)
		{
			iVar4 = 1;
			if (func_754(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_754(138, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 46)
		{
			if (func_593(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (func_754(iVar1, 0, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
				return iVar4;
			}
			else
			{
				return 1;
			}
		}
		else if (iVar5 == 17)
		{
			iVar4 = 1;
			iVar1 = 134;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_593(5) && func_756(12))
			{
				iVar1 = 21;
				if (func_754(iVar1, 1, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar5 == 15)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar5 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar5 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar5 == 10)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((func_583(((*Global_1835011)[11 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[14 /*74*/])->f_1, 1)) && func_583(((*Global_1347702)[61 /*49*/])->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (func_754(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar6 = func_111(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (func_757(15))
			{
				if (func_758(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 2)
		{
			iVar1 = 96;
		}
		else if (iVar6 == 61)
		{
			iVar4 = 1;
			if (func_757(15))
			{
				if (func_758(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_757(9))
			{
				if (func_758(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!func_583(((*Global_1347702)[63 /*49*/])->f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (func_754(iVar1, iVar2, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 62)
		{
			iVar4 = 1;
			if (func_757(15))
			{
				if (func_758(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_757(9))
			{
				if (func_758(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar6 == 76)
		{
			iVar1 = 134;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
		}
		else if (iVar6 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar6 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar6 == 97)
		{
			iVar4 = 1;
			if (func_583(((*Global_1835011)[6 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[13 /*74*/])->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar6 == 114)
		{
			if (func_583(((*Global_1835011)[9 /*74*/])->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_754(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	if (iVar1 == -1)
	{
		return 1;
	}
	if (func_754(iVar1, iVar2, bVar3, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_351(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_353(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_759(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

int func_354()
{
	int iVar0;
	
	iVar0 = func_591();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case -40:
		case 40:
			return 1;
		
		case -80:
		case 80:
			return 2;
		
		case -120:
		case 120:
			return 3;
		
		case -160:
		case 160:
			return 4;
		
		case -200:
		case 200:
			return 5;
		
		case -240:
		case 240:
			return 6;
		
		case -280:
		case 280:
			return 7;
		
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

float func_356(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_357(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_760(uParam0))
		{
			return 0;
		}
		func_223(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_252(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_692(0, 1, 1, 1);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_751) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_358()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1938056823, false);
}

void func_359(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

int func_360(var uParam0)
{
	return 1;
}

void func_361(var uParam0, var uParam1)
{
	struct<8> Var0;
	
	if (func_183(uParam1, 32768))
	{
		Var0 = { func_622(uParam0) };
		func_256(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_310(uParam0, 268435456);
			if (func_257(uParam0->f_409))
			{
				uParam0->f_409 = { func_761(uParam1, uParam1->f_1580) };
			}
			if (func_257(uParam0->f_406))
			{
				uParam0->f_406 = { func_761(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_762(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_310(uParam0, 67108864);
		func_763(uParam1, 524288);
	}
	if (func_764(uParam1, 128))
	{
		func_310(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_765(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_762(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_362(var uParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_766(uParam0->f_174)}, 8);
		func_767(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
	}
}

int func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_768();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_364()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_769();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_770(-1);
	func_771(3);
	return 1;
}

void func_365(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_772(iParam0, &iVar0, &iVar1);
	if (!func_773(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_774(iVar0, iVar1);
}

int func_366(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	func_626(uParam4, &sParam0);
	if (func_625(uParam4, 2) && !func_625(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_775(uParam4) != 1)
	{
		func_776(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_775(uParam4))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_348, 0))
				{
					func_777(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					func_778(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_779(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_780(uParam5);
				}
				func_778(uParam4, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_625(uParam4, 134217728))
				{
				}
				else
				{
					func_255(uParam4);
				}
				func_214(&(uParam4->f_1));
				func_778(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_635(uParam4);
				if (!func_79(&(uParam4->f_1)))
				{
					func_80(&(uParam4->f_1), 0);
				}
				else if (func_215(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_778(uParam4, 4);
				}
			}
			break;
		
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348) || !ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
			{
				if (func_259(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
					{
						func_778(uParam4, 4);
					}
					else if (!func_257(func_627(uParam4)) && !func_781(Global_35, func_627(uParam4), 100f, 1, 1))
					{
						func_782(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_627(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_215(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_778(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					func_783(1, 0);
					func_777(uParam4, &sParam0, uParam5);
					func_778(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_215(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_778(uParam4, 4);
			}
			break;
		
		case 3:
			func_784(uParam4);
			if (func_779(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_780(uParam5);
			if ((ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_348, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || func_625(uParam4, 512)))
			{
				if (!func_625(uParam4, 1024) && func_785(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_625(uParam4, 512))
				{
					func_214(&(uParam4->f_1));
					func_310(uParam4, 512);
					func_778(uParam4, 4);
				}
				else if (func_625(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_776(uParam4);
			}
			if (func_625(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_786(uParam4) - func_787(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_788(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_787(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_789(uParam4))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
				}
				func_790(uParam4);
				func_791(uParam4);
				return 1;
			}
			else
			{
				if (func_625(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_214(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_310(uParam4, 512);
						func_623(uParam4, 67108864, 1);
						func_778(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_625(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_787(uParam4) <= 5000) && func_787(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_625(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_792(&(uParam4->f_405), 0);
					func_310(uParam4, 536870912);
				}
				if (func_787(uParam4) >= 5000 && func_787(uParam4) <= (func_786(uParam4) - 5000))
				{
					func_793();
				}
			}
			break;
		
		case 6:
			if (func_789(uParam4))
			{
				func_790(uParam4);
				func_791(uParam4);
				return 1;
			}
			break;
		
		case 4:
			if (func_625(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						func_310(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (func_794(uParam5))
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_778(uParam4, 3);
					}
					else if (func_215(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_778(uParam4, 3);
					}
				}
				if (func_775(uParam4) == 3)
				{
					if (func_625(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		
		case 5:
			func_778(uParam4, 4);
			break;
	}
	return 0;
}

void func_367(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_625(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_795(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_625(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_623(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_623(uParam0, 16, 1);
}

void func_368(int* iParam0)
{
	struct<367> Var0;
	
	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_369(var uParam0)
{
	func_796(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_2(&(uParam0->f_172), 262144);
	func_2(&(uParam0->f_172), 524288);
	func_2(&(uParam0->f_172), 1048576);
}

void func_370(var uParam0)
{
	func_797();
	func_313(uParam0);
	func_347(1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_308))
	{
		TASK::TASK_STAND_STILL(iLocal_308, -1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		TASK::TASK_STAND_STILL(iLocal_303, -1);
	}
	if (!func_315(Local_453[0 /*17*/]))
	{
		func_316(Local_453[0 /*17*/], "RABI1_GREET", " ", -163964935, 0, 0, 0, 1, 0);
	}
	func_317(1);
	PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_301, "RABI1_ANTI_GRIEF", vLocal_594, 0, 0);
	func_318(uParam0, (Local_825[0 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
	iLocal_156 = 1;
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_760))
	{
		func_396(&iLocal_473, iLocal_760, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_760);
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_926[1 /*6*/]), 0))
	{
		func_314(1, 1);
	}
	MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
	func_319(uParam0, iLocal_785, 2);
}

void func_371(bool bParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
	{
		if (bParam0)
		{
			if (!func_798(14, 0))
			{
				func_799(14, bParam1);
			}
			if (bParam2)
			{
				func_730(14, 1);
				func_800(14, 10);
			}
		}
		else
		{
			if (func_798(14, 0))
			{
				func_801(14);
			}
			if (!func_352(iLocal_301, -982327190))
			{
				TASK::TASK_STAND_STILL(iLocal_301, -1);
			}
		}
	}
}

void func_372(int iParam0)
{
	func_724(iParam0, 8, 0);
}

void func_373(int iParam0)
{
	int iVar0;
	
	if (!func_802(iParam0))
	{
		return;
	}
	if (func_803(iParam0))
	{
		iVar0 = func_804(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
	}
}

int func_374(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (func_183(uParam0, 32768))
	{
		return 1;
	}
	if (func_805(uParam0) >= 3)
	{
		uParam0->f_1792 = func_217(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630->f_40))
			{
				uParam0->f_1794 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_806(uParam0);
	}
	if (func_805(uParam0) < 10)
	{
		if (func_805(uParam0) == 3)
		{
			func_807(uParam0, iParam5, bParam6);
		}
		else if (func_805(uParam0) > 3)
		{
			if (func_808(uParam0) == 0)
			{
				if (!func_183(uParam0, 524288))
				{
					func_809(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_810(uParam0, 4);
					func_811(uParam0, 10);
					func_812(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_183(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_765(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_388(0);
			func_813();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_765(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_814(uParam0, uParam0->f_1580))
				{
					if (func_815(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_816(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_816(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_817(uParam0);
			}
		}
	}
	bVar0 = func_818(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_183(uParam0, 268435456) && bVar1) && !func_183(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_912[uParam0->f_1580 /*41*/])->f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					iVar2 = 1;
				}
			}
			if (!bVar3 || iVar2)
			{
				func_819(uParam0, 131072);
				func_819(uParam0, 268435456);
			}
		}
		if (func_764(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_765(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_808(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_805(uParam0) == 3 || func_183(uParam0, 131072))
	{
		func_820(uParam0);
		if (!func_183(uParam0, 262144))
		{
			if ((bVar0 && func_183(uParam0, 65536)) || func_183(uParam0, 131072))
			{
				func_819(uParam0, 32768);
				func_810(uParam0, 4);
				func_811(uParam0, 10);
				uParam0->f_1665 = 1;
				func_812(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_805(uParam0) >= 3)
	{
		func_821(uParam0, iParam5);
		func_822(uParam0);
		if (!func_823(uParam0, 1))
		{
			func_824(uParam0);
		}
		func_825(uParam0);
	}
	switch (func_805(uParam0))
	{
		case 0:
			func_826(uParam0, Param1, iParam5);
			break;
		
		case 1:
			func_827(uParam0);
			break;
		
		case 2:
			func_828(uParam0);
			break;
		
		case 3:
			if (func_375(uParam0))
			{
				func_829(2);
				func_816(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_214(&(uParam0->f_1768));
				func_810(uParam0, 1);
				func_830();
				func_811(uParam0, 5);
			}
			break;
		
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_183(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_805(uParam0) == 5)
			{
				if (func_831(uParam0))
				{
					func_810(uParam0, 2);
					func_811(uParam0, 6);
				}
			}
			if (func_805(uParam0) == 6)
			{
				if (func_832(uParam0))
				{
					func_810(uParam0, 3);
					func_811(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_438(&(uParam0->f_1768)) >= 15f)
			{
				if (func_833(uParam0, iParam5))
				{
					if (func_834(uParam0))
					{
						uParam0->f_1581 = func_835(uParam0);
						func_214(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_810(uParam0, 6);
						func_811(uParam0, 9);
					}
					else
					{
						func_810(uParam0, 4);
						func_811(uParam0, 10);
						func_812(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		
		case 9:
			if (func_833(uParam0, iParam5))
			{
				func_812(uParam0, iParam5);
				func_811(uParam0, 10);
				return 1;
			}
			break;
		
		case 10:
			return 1;
	}
	return 0;
}

int func_375(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

int func_376(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_257(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_836(iVar3))
		{
			return iVar2;
		}
		else if (func_837(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = func_839(vParam1, func_838(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_377(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_840(iParam0, iVar0))
		{
			func_841(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_842(iParam0, 1);
	}
}

void func_378()
{
	switch (iLocal_792)
	{
		case 0:
			func_843();
			iLocal_792 = 3;
			break;
		
		case 1:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_301, &Local_198);
			break;
		
		case 2:
			if (func_844(0) && func_845(0))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_301, &Local_198);
			}
			break;
		
		case 3:
			break;
	}
}

void func_379()
{
	switch (iLocal_793)
	{
		case 0:
			func_846();
			iLocal_793 = 3;
			break;
		
		case 1:
			if (PED::_0x550CB89DD7F4FA3D(Global_35, iLocal_300))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_248);
			}
			break;
		
		case 2:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_223);
			break;
	}
}

void func_380()
{
	if (!func_694(5))
	{
		if (iLocal_152)
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				PED::_SET_PED_SCALE(iLocal_301, 0.85f);
				func_695(5);
			}
		}
	}
	else if (!iLocal_152 || !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		PED::_SET_PED_SCALE(iLocal_301, 1f);
		func_847(5);
	}
}

void func_381()
{
	if (func_210(9))
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		func_410(9);
	}
}

void func_382()
{
	if (BUILTIN::VDIST(vLocal_605, Global_36) < 3f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, false);
	}
}

void func_383(float fParam0)
{
	func_848(BUILTIN::CEIL((BUILTIN::TO_FLOAT(300) - (BUILTIN::TO_FLOAT(300) * fParam0))));
}

int func_384(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_195, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_385()
{
	if (iLocal_785 < 9)
	{
		func_849(10);
	}
	else if (iLocal_785 == 12 || iLocal_785 == 13)
	{
		func_849(11);
	}
	else
	{
		func_849(12);
	}
}

void func_386(var uParam0)
{
	switch (iLocal_813)
	{
		case 0:
			if (iLocal_785 >= 12)
			{
				func_850(iLocal_813, 4);
			}
			else if ((((func_409() && !func_419()) && !func_851()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN())
			{
				if (func_406(uParam0, "ABI1_OUTBNT1", 0))
				{
					func_850(iLocal_813, 1);
				}
			}
			break;
		
		case 1:
			if (!func_412("ABI1_OUTBNT1"))
			{
				func_695(3);
				func_850(iLocal_813, 4);
			}
			else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("ABI1_OUTBNT1") >= 19)
			{
				if (!iLocal_154)
				{
					func_420(14);
					func_421(8, 14, 1);
					func_422("RABI1_COMIC", 7000, 0, 0, 0, 1);
					iLocal_154 = 1;
				}
				func_850(iLocal_813, 3);
			}
			break;
		
		case 2:
			if ((func_852() && AUDIO::_0xD89504D9D7D5057D("ABI1_OUTBNT1")) && AUDIO::_0xF01C570E0A0A1E67("ABI1_OUTBNT1"))
			{
				AUDIO::RESTART_SCRIPTED_CONVERSATION("ABI1_OUTBNT1");
				func_850(iLocal_813, 1);
			}
			break;
		
		case 3:
			if (!func_412("ABI1_OUTBNT1"))
			{
				func_695(3);
				func_850(iLocal_813, 4);
			}
			break;
	}
}

void func_387()
{
	switch (iLocal_1041)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
			{
				if (func_210(5))
				{
					iLocal_1041 = 1;
				}
			}
			break;
		
		case 1:
			if (func_210(5))
			{
				func_853(iLocal_301, iLocal_291);
			}
			else
			{
				func_508();
				iLocal_1041 = 0;
			}
			break;
	}
}

void func_388(bool bParam0)
{
	if (bParam0)
	{
		func_854(4);
	}
	func_854(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_389()
{
	float fVar0;
	
	switch (iLocal_811)
	{
		case 0:
			func_855(iLocal_811, 1);
			break;
		
		case 1:
			func_541(&uLocal_36);
			iLocal_158 = 1;
			func_855(iLocal_811, 2);
			break;
		
		case 2:
			if (iLocal_156)
			{
				func_855(iLocal_811, 3);
			}
			break;
		
		case 3:
			fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false), vLocal_575);
			if (fVar0 < 1.2f)
			{
				func_856(iLocal_300, -98992470, vLocal_575, fLocal_578, -1, 1, 0, 0, -1082130432);
				func_855(iLocal_811, 4);
			}
			break;
		
		case 4:
			if (func_117() != 71 || iLocal_785 > 14)
			{
				iLocal_158 = 0;
				func_855(iLocal_811, 6);
			}
			else if (func_857(iLocal_300, 0, &uLocal_36, &uLocal_64, 0, 0) || func_857(iLocal_309, 0, &uLocal_36, &uLocal_64, 0, 0))
			{
				func_858("ABI1_ABDWDLE", 0, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_300, Global_35, 1, 65536, -1082130432, -1, 0);
				iLocal_157 = 1;
				func_855(iLocal_811, 6);
			}
			break;
		
		case 6:
			func_320(13, 0, 1, 0, -1082130432, 1, 1, 0, 0, 0, 0);
			iLocal_172[0] = 0;
			func_855(iLocal_811, 7);
			break;
		
		case 7:
			break;
	}
}

void func_390(var uParam0)
{
	switch (iLocal_824)
	{
		case 0:
			if (iLocal_811 == 4)
			{
				if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_772))
				{
					iLocal_772 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_300, 0f, 4f, 0f), 0f, 0f, 0f, 8f, 8f, 3f);
				}
				else
				{
					iLocal_824 = 1;
				}
			}
			break;
		
		case 1:
			if (func_859())
			{
				func_214(&uLocal_549);
				iLocal_824 = 2;
			}
			break;
		
		case 2:
			if (func_438(&uLocal_549) > 3f)
			{
				if (func_859())
				{
					TASK::_0xE7FA07624574B79A(iLocal_300, Global_35, 2, 1, -1f, 1, 0, 0, 0);
					iLocal_824 = 3;
				}
				else
				{
					func_243(&uLocal_549);
					iLocal_824 = 1;
				}
			}
			break;
		
		case 3:
			if (func_438(&uLocal_549) > 4f)
			{
				if (func_859())
				{
					if (func_406(uParam0, "ABI1_ABDWDLE", 0))
					{
						func_243(&uLocal_549);
						iLocal_824 = 4;
					}
				}
				else
				{
					func_243(&uLocal_549);
					TASK::_0x541E5B41DCA45828(iLocal_300, 1, 0);
					iLocal_824 = 1;
				}
			}
			break;
		
		case 4:
			if (!func_412("ABI1_ABDWDLE"))
			{
				TASK::_0x541E5B41DCA45828(iLocal_300, 1, 0);
				iLocal_197++;
				if (iLocal_197 >= 3)
				{
					func_516(iLocal_772);
					iLocal_824 = 5;
				}
				else
				{
					iLocal_824 = 1;
				}
			}
			break;
	}
}

int func_391()
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_860(Local_926[8 /*6*/]))
	{
		iVar0 = 0;
	}
	if (!func_860(Local_926[9 /*6*/]))
	{
		iVar0 = 0;
	}
	if (!func_860(Local_926[10 /*6*/]))
	{
		iVar0 = 0;
	}
	if (!func_860(Local_926[7 /*6*/]))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_392(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_301) };
	vVar0 = { func_861(vVar0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false) };
	iVar6 = -1;
	func_653();
	func_304();
	if (!bLocal_143)
	{
		func_389();
		func_390(uParam0);
	}
	if (func_575(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 1) < (9f + 2f))
	{
		func_393();
	}
	if (iLocal_790 == 0)
	{
		if (func_862((Local_825[0 /*9*/])->f_2, 0, 0, -1, -1, 0))
		{
			func_403(Local_825[0 /*9*/], 0, 0);
		}
		iLocal_191 = -1;
		iVar6 = func_863(&iLocal_301, &iLocal_392, 9f, &Local_453, 0f, 3, 1, 0, 1, 0, 0, 2, -1082130432);
		if (!func_419())
		{
			if ((func_864(vVar3, 9f, vVar0, -25f, 60f, 255, 0, 0) || func_864(vVar3, 9f, vVar0, 60f, 145f, 0, 255, 0)) || func_864(vVar3, 9f, vVar0, -145f, -25f, 0, 0, 255))
			{
				if (!func_865(Local_453[0 /*17*/], 1, 0))
				{
					func_866(Local_453[0 /*17*/], 1, 0);
				}
				if (iVar6 == 0)
				{
					func_867(&Local_453, 1, 1, 1, 0);
					func_868(&iLocal_301);
					func_329(1);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
					func_404(0);
					if (func_864(vVar3, 9f, vVar0, -25f, 60f, 255, 0, 0))
					{
						func_314(9, 0);
						iLocal_191 = 9;
						iLocal_790 = 1;
						sLocal_488 = "RSC_ABI1_CENTRE";
					}
					if (func_864(vVar3, 9f, vVar0, 60f, 145f, 0, 255, 0))
					{
						func_314(8, 0);
						iLocal_191 = 8;
						iLocal_790 = 2;
						sLocal_488 = "RSC_ABI1_LEFT";
					}
					if (func_864(vVar3, 9f, vVar0, -145f, -25f, 0, 0, 255))
					{
						iLocal_790 = 3;
						func_314(10, 0);
						iLocal_191 = 10;
						sLocal_488 = "RSC_ABI1_RIGHT";
					}
					if (iLocal_790 != 0)
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_301, sLocal_488, vLocal_594, 0, 0);
						func_314(7, 0);
						if (func_414("RABI1_GOJACK", 1))
						{
							func_411("RABI1_GOJACK", 1);
						}
						func_405(&iLocal_137);
					}
				}
			}
			else if (func_865(Local_453[0 /*17*/], 1, 0))
			{
				func_866(Local_453[0 /*17*/], 0, 0);
			}
		}
		else if (func_865(Local_453[0 /*17*/], 1, 0))
		{
			func_866(Local_453[0 /*17*/], 0, 0);
		}
	}
	else
	{
		func_388(0);
		if (iLocal_191 != -1 && ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_926[iLocal_191 /*6*/]), 0))
		{
			iLocal_792 = 1;
			func_319(uParam0, iLocal_785, 3);
		}
	}
}

void func_393()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1618006066, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	func_869(16);
	func_869(32);
	func_869(64);
	if (func_442(Global_35, 1, 0, 0) != joaat("weapon_unarmed") || func_442(Global_35, 1, 1, 0) != joaat("weapon_unarmed"))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
	}
}

void func_394(var uParam0)
{
	func_870(uParam0);
	switch (iLocal_812)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_926[2 /*6*/])))
			{
				Local_926[2 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_926[2 /*6*/])->f_3, 0, 0, false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_926[2 /*6*/]));
				func_871(1);
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(&(Local_926[2 /*6*/]), 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[2 /*6*/]), sLocal_484, iLocal_291, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[2 /*6*/]), "JackMarston", iLocal_301, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[2 /*6*/]), "ARTHUR", Global_35, 0);
				func_871(2);
			}
			break;
		
		case 2:
			if (ANIMSCENE::_0x95531A4A20CCE7BC(&(Local_926[2 /*6*/]), 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(Local_926[2 /*6*/]), "JackMarston", &Local_89, false, 0, 2))
				{
					vLocal_598 = { Local_89 };
					fLocal_601 = Local_89.f_3.f_2;
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(&(Local_926[iLocal_191 /*6*/]), "JackMarston"))
					{
						if (!ENTITY::_0x083D497D57B7400F(iLocal_291))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, true);
						}
						func_329(1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_598, 1.5f, -1, 0.25f, false, fLocal_601);
						iLocal_792 = 3;
						PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
						func_317(0);
						func_871(3);
					}
				}
			}
			break;
		
		case 3:
			if (ANIMSCENE::_0x25557E324489393C(&(Local_926[iLocal_191 /*6*/])) && ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[iLocal_191 /*6*/]), 0))
			{
				func_872();
			}
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_926[2 /*6*/]), 0))
			{
				if (func_575(iLocal_301, vLocal_598, 0) < 2f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 713668775, 1) == 8)
					{
						if (ENTITY::_0x083D497D57B7400F(iLocal_291))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, false);
						}
						ANIMSCENE::START_ANIM_SCENE(&(Local_926[2 /*6*/]));
					}
				}
				else if (!func_352(iLocal_301, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_598, 1.5f, -1, 0.25f, false, fLocal_601);
				}
			}
			else
			{
				func_744(1);
				func_871(5);
			}
			break;
		
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 1369124074, 1) == 8)
			{
				func_871(5);
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_291))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(&(Local_926[2 /*6*/]), "JackMarston"))
				{
					func_334(1, 1);
				}
			}
			if (ANIMSCENE::_0xF94692EB9DC15D74(&(Local_926[2 /*6*/]), 0) || ANIMSCENE::_0xCDC5512A407CF08D(&(Local_926[2 /*6*/])))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_291))
				{
					iLocal_159 = 1;
					iLocal_792 = 1;
					func_871(6);
				}
			}
			break;
		
		case 6:
			break;
	}
}

int func_395(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_873();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		
		case 58:
			*uParam0 = { func_874(4) };
			*uParam1 = 0f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_396(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*iParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*iParam0, bParam2);
	}
}

void func_397()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		func_875(7);
		func_539();
	}
}

void func_398(var uParam0)
{
	switch (iLocal_788)
	{
		case 0:
			if (iLocal_812 == 6)
			{
				if (!func_211())
				{
					if (!func_444())
					{
						if (!func_79(&uLocal_510))
						{
							func_214(&uLocal_510);
						}
						else if (func_438(&uLocal_510) > 7f)
						{
							if (func_218(Global_35, iLocal_301, 0, 1) > 15f)
							{
								if (func_406(uParam0, "ABI1_JBORE1", 0))
								{
									func_243(&uLocal_510);
								}
							}
							else if (func_218(Global_35, iLocal_301, 0, 1) < 2f)
							{
								if (func_406(uParam0, "ABI1_ARTFOLLO", 0))
								{
									func_243(&uLocal_510);
								}
							}
							else if (func_406(uParam0, "ABI1_JBORE2", 0))
							{
								func_243(&uLocal_510);
							}
						}
					}
				}
				else
				{
					func_243(&uLocal_510);
					func_423(1, 0);
					iLocal_788 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

void func_399()
{
	switch (iLocal_807)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_926[3 /*6*/])))
			{
				Local_926[3 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_926[3 /*6*/])->f_3, 0, "pl_IG7_Mount_Left", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_926[3 /*6*/]));
				func_876(iLocal_807, 1);
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(&(Local_926[3 /*6*/]), 1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !ENTITY::IS_ENTITY_DEAD(iLocal_291))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[3 /*6*/]), "JackMarston", iLocal_301, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[3 /*6*/]), "p_fishingpole01x", iLocal_291, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[3 /*6*/]), "ARTHUR", Global_35, 0);
					func_876(iLocal_807, 3);
				}
			}
			break;
		
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[3 /*6*/]), "pl_IG7_Mount_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[3 /*6*/]), "pl_IG7_Mount_Right");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[3 /*6*/]), "pl_IG7_Mount_Left") && ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[3 /*6*/]), "pl_IG7_Mount_Right"))
			{
				if (func_211() && iLocal_159)
				{
					func_402();
					iLocal_792 = 1;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, func_877(), 1.5f, -1, 0.25f, false, (ENTITY::GET_ENTITY_HEADING(Global_35) + 180f));
					func_876(iLocal_807, 4);
				}
			}
			break;
		
		case 4:
			func_402();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
			{
				if (func_575(iLocal_301, Global_36, 0) < 4f && TASK::IS_PED_STILL(iLocal_306))
				{
					TASK::TASK_STAND_STILL(iLocal_306, -1);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_926[3 /*6*/]), ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_306, 2), 2);
					func_876(iLocal_807, 5);
				}
				else if (!func_352(iLocal_301, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, func_877(), 1.5f, -1, 0.25f, false, (ENTITY::GET_ENTITY_HEADING(Global_35) + 180f));
				}
			}
			break;
		
		case 5:
			func_402();
			if (func_878())
			{
				if (func_879(ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), &iLocal_306))
				{
					vLocal_1007 = { Local_113 };
					uLocal_1010 = Local_113.f_3.f_2;
				}
				else
				{
					vLocal_1007 = { Local_101 };
					uLocal_1010 = Local_101.f_3.f_2;
				}
				if (!func_880(vLocal_1007))
				{
					vLocal_1007 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false) };
				}
				iLocal_1005 = 0;
				iLocal_1006 = 0;
				func_876(iLocal_807, 2);
			}
			break;
		
		case 2:
			func_402();
			if (((!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !PED::IS_PED_RAGDOLL(iLocal_301)) && !TASK::IS_PED_GETTING_UP(iLocal_301)) && !PED::_0x3E592D0486DEC0F6(iLocal_301))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_926[3 /*6*/]), 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(&(Local_926[3 /*6*/]), iLocal_306, PED::GET_PED_BONE_INDEX(iLocal_306, 29245));
				func_243(&uLocal_1011);
				if (func_879(ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), &iLocal_306))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[3 /*6*/]), "pl_IG7_Mount_Right", true);
					TASK::TASK_ENTER_ANIM_SCENE(iLocal_301, &(Local_926[3 /*6*/]), "JackMarston", "pl_IG7_Mount_Right", 1f, 1, 576, 20000, -1082130432);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[3 /*6*/]), "pl_IG7_Mount_Left", true);
					TASK::TASK_ENTER_ANIM_SCENE(iLocal_301, &(Local_926[3 /*6*/]), "JackMarston", "pl_IG7_Mount_Left", 1f, 1, 576, 20000, -1082130432);
				}
				func_876(iLocal_807, 6);
			}
			break;
		
		case 6:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(&(Local_926[3 /*6*/])) > 3.6f)
			{
				func_325();
			}
			if (func_210(5))
			{
				if (func_575(iLocal_301, vLocal_1007, 0) < 1f)
				{
					iLocal_792 = 3;
					func_410(5);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 543713790))
			{
			}
			if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[3 /*6*/]), 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 543713790))
			{
				iLocal_159 = 0;
				iLocal_792 = 3;
				iLocal_793 = 3;
				func_371(0, 1, 0);
				if (!PED::IS_PED_ON_MOUNT(iLocal_301))
				{
					PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
				}
				iLocal_152 = 1;
				func_876(iLocal_807, 7);
			}
			else
			{
				func_402();
			}
			break;
		
		case 7:
			if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[3 /*6*/]), 0))
			{
				ANIMSCENE::RESET_ANIM_SCENE(&(Local_926[3 /*6*/]), 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_926[3 /*6*/]));
				func_876(iLocal_807, 0);
			}
			break;
		
		case 8:
			break;
	}
}

void func_400()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		func_181(7);
	}
}

int func_401(int iParam0)
{
	if (Global_1327590->f_19685 == 0 && Global_1327590->f_19684 == 0)
	{
		return 0;
	}
	if ((iParam0 == Global_1327590->f_19685 || iParam0 == 1) || iParam0 == 20)
	{
		Global_1327590->f_19684 = 0;
		Global_1327590->f_19685 = 0;
		return 1;
	}
	return 0;
}

void func_402()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
	PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
	PAD::DISABLE_CONTROL_ACTION(0, -455946723, false);
}

void func_403(var uParam0, float fParam1, float fParam2)
{
	if (*uParam0 != 2)
	{
		if (!uParam0->f_1)
		{
			if (func_472(uParam0->f_2))
			{
				if (func_79(&(uParam0->f_3)))
				{
					func_243(&(uParam0->f_3));
				}
				uParam0->f_1 = 1;
				*uParam0 = 2;
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			func_214(&(uParam0->f_3));
			uParam0->f_6 = { Global_36 };
			*uParam0 = 1;
			break;
		
		case 1:
			if (func_215(&(uParam0->f_3)) > fParam1)
			{
				if (fParam2 > 0f)
				{
					if (BUILTIN::VDIST(uParam0->f_6, Global_36) < fParam2)
					{
						func_413(uParam0->f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
					}
				}
				else
				{
					func_413(uParam0->f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				uParam0->f_1 = 1;
				*uParam0 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_404(int iParam0)
{
	func_48();
	func_572((Local_825[iParam0 /*9*/])->f_2);
}

void func_405(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_406(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, sParam1, 24);
	return func_881(&(uParam0->f_643), cVar0, 0, -1, bParam2, 0);
}

void func_407()
{
	if (iLocal_785 < 16)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_301, Global_35, 1, 1))
		{
			func_326(4);
		}
		if (!func_79(&uLocal_1022))
		{
			if ((iLocal_785 != 14 && iLocal_152) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_926[3 /*6*/]), 0))
			{
				if (PED::IS_PED_FALLING(iLocal_306))
				{
					func_214(&uLocal_1022);
				}
			}
		}
		else if (func_215(&uLocal_1022) > 3f || !PED::IS_PED_FALLING(iLocal_306))
		{
			if (!func_209(iLocal_306, 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				func_326(4);
			}
		}
	}
}

void func_408(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	func_882();
	if (((!func_414("RABI1_GOFISH", 1) && !func_414("RABI1_RETHORSE", 1)) && !func_414("RABI1_GOMOUNT", 1)) && iLocal_813 == 4)
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-532674084, Global_36, 30f))
		{
			if (func_883(1))
			{
				sVar0 = "ABI1_JRDANGER";
			}
		}
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false);
		if ((func_884() && WEAPON::_0x705BE297EEBDB95D(iVar1)) && iVar1 != -1415022764)
		{
			if (!func_210(11))
			{
				if (func_883(5))
				{
					sVar0 = "ABI1_JRGUNOUT";
				}
			}
		}
		else if (func_210(11))
		{
			func_410(11);
		}
		if (PED::_0x285D36C5C72B0569(Global_35) < 2f && !func_885(iLocal_301, 1090519040, 1103626240, 1097859072, 0))
		{
			if (func_883(6))
			{
				sVar0 = "ABI1_JRFIRE";
			}
		}
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (func_743(-1756227506, 2078959127) > iLocal_189 || func_743(-1756227506, 234331408) > iLocal_190)
			{
				if (func_883(7))
				{
					sVar0 = "ABI1_RUNOVER_AN";
				}
			}
		}
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(506397713, Global_36, 30f))
		{
			if (func_883(8))
			{
				sVar0 = "ABI1_JRPSHOT";
			}
		}
		if (func_885(iLocal_301, 45f, 45f, 1097859072, 0) && PED::_0x285D36C5C72B0569(Global_35) < 2f)
		{
			if (func_883(10))
			{
				sVar0 = "ABI1_JRFIREJ";
			}
		}
		if (!MISC::ARE_STRINGS_EQUAL(sVar0, "NULL"))
		{
			if (!func_444())
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar0, sLocal_479) || MISC::ARE_STRINGS_EQUAL(sVar0, "ABI1_JRFIREJ"))
				{
					func_243(&uLocal_519);
					func_243(&uLocal_504);
					if (func_406(uParam0, sVar0, 0))
					{
						if (MISC::ARE_STRINGS_EQUAL(sVar0, "ABI1_JRGUNOUT"))
						{
							if (!func_210(11))
							{
								func_326(11);
							}
						}
						sLocal_479 = sVar0;
						func_330();
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Global_35);
						iLocal_791 = 0;
					}
				}
			}
			else
			{
				func_330();
			}
		}
		else
		{
			func_886(uParam0);
			if (bParam1)
			{
				func_887(uParam0);
			}
			if (!func_79(&uLocal_519))
			{
				func_214(&uLocal_519);
			}
			else if (func_215(&uLocal_519) > 20f)
			{
				func_243(&uLocal_519);
				iLocal_791 = 0;
				sLocal_479 = "NULL";
			}
		}
	}
}

int func_409()
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_ON_MOUNT(Global_35) || !PED::IS_PED_ON_MOUNT(iLocal_301))
	{
		return 0;
	}
	else
	{
		iVar0 = func_440(Global_35);
		iVar1 = func_440(iLocal_301);
		if ((iVar0 == iVar1 && iLocal_809 != 3) && iLocal_810 != 3)
		{
			func_572("RABI1_RETJACK");
			func_410(1);
			return 1;
		}
	}
	return 0;
}

void func_410(int iParam0)
{
	if (func_210(iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_194, iParam0);
	}
}

void func_411(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_1 = sParam0;
	iVar2 = _NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1);
	if (func_888(iVar2))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar2, 0);
	}
}

bool func_412(char* sParam0)
{
	return func_889(sParam0);
}

int func_413(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_890(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_657(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_890(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_414(char* sParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0.f_1 = sParam0;
	return func_891(_NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1));
}

void func_415(var uParam0)
{
	if ((!func_409() && func_218(Global_35, iLocal_301, 0, 1) < 15f) && func_575(Global_35, vLocal_675, 0) > 25f)
	{
		if (!func_444())
		{
			if (!func_79(&uLocal_504))
			{
				if (!func_892(0.5f))
				{
					func_214(&uLocal_504);
				}
			}
			else if (func_215(&uLocal_504) > 15f)
			{
				if (!func_892(0.5f))
				{
					if (func_406(uParam0, "ABI1_NOHORSE", 0))
					{
						func_243(&uLocal_504);
					}
				}
				else
				{
					func_243(&uLocal_504);
				}
			}
		}
		else
		{
			func_214(&uLocal_504);
		}
	}
	else
	{
		func_243(&uLocal_504);
	}
}

void func_416()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_575(Global_35, vLocal_678, 0) < (15f + 10f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -455946723, false);
		}
	}
	func_441(Global_35, vLocal_678, 0, (15f + 20f), (15f + 10f), 15f, 1084227584, 1, 1, 1, 0);
}

int func_417()
{
	func_418();
	if (func_302())
	{
		if (func_893(iLocal_770, Global_36))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(PED::GET_MOUNT(Global_35)))
			{
				func_513(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_418()
{
	switch (iLocal_808)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_926[4 /*6*/])))
			{
				Local_926[4 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_926[4 /*6*/])->f_3, 0, "pl_IG7_Dismont_Left", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_926[4 /*6*/]));
				iLocal_808 = 1;
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(&(Local_926[4 /*6*/]), 1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[4 /*6*/]), "JackMarston", iLocal_301, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[4 /*6*/]), "p_fishingpole01x", iLocal_291, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[4 /*6*/]), "ARTHUR", Global_35, 0);
				iLocal_808 = 2;
			}
			break;
		
		case 2:
			if (func_79(&uLocal_513) && !func_419())
			{
				func_402();
				iLocal_792 = 3;
				TASK::TASK_STAND_STILL(iLocal_306, -1);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_926[4 /*6*/]), 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(&(Local_926[4 /*6*/]), iLocal_306, PED::GET_PED_BONE_INDEX(iLocal_306, 29245));
				iLocal_152 = 0;
				ANIMSCENE::START_ANIM_SCENE(&(Local_926[4 /*6*/]));
				iLocal_808 = 3;
			}
			break;
		
		case 3:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(&(Local_926[4 /*6*/])) > 5f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
				func_744(1);
			}
			if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[4 /*6*/]), 0) || ANIMSCENE::_0xCDC5512A407CF08D(&(Local_926[4 /*6*/])))
			{
				func_334(1, 1);
				func_326(5);
				if (PED::IS_PED_ON_MOUNT(iLocal_301))
				{
					AITRANSPORT::_0x8886D83A430537FD(iLocal_301, 2097152);
				}
				func_371(0, 1, 0);
				func_894(4);
				iLocal_808 = 4;
			}
			else
			{
				func_402();
			}
			break;
		
		case 4:
			break;
	}
}

bool func_419()
{
	return func_895(1);
}

void func_420(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 14:
			iVar0 = 1;
			break;
		
		case 23:
			iVar0 = 24;
			break;
		
		case 11:
			iVar0 = 29;
			break;
		
		case 18:
			iVar0 = 26;
			break;
		
		case 7:
			iVar0 = 5;
			break;
		
		case 17:
			iVar0 = 11;
			break;
		
		case 22:
			iVar0 = 16;
			break;
	}
	if (&Global_40.f_4283.f_335[iVar0] == 0)
	{
		func_896(&sVar1, iVar0);
		func_422("REQ_TITHE", 10000, 0, 0, 0, 1);
		iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar4, func_897(iVar0 + 4));
		Global_1357549->f_1726[iVar0 + 4 /*3*/] = iVar3;
		(Global_1357549->f_1726[iVar0 + 4 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "label", MISC::GET_HASH_KEY(&sVar1));
		(Global_1357549->f_1726[iVar0 + 4 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "value", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, iVar0 + 4, "camp_item", iVar3);
		Global_40.f_4283.f_335[iVar0] = 1;
	}
}

int func_421(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			(Global_40.f_6563[iVar0 /*27*/])->f_24 = 2;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((Global_40.f_6563[iVar0 /*27*/])->f_24 != 0)
		{
		}
		else
		{
			func_898(Global_40.f_6563[iVar0 /*27*/], iParam0);
			func_899(iParam0);
			if (bParam2)
			{
				func_900(Global_40.f_6563[iVar0 /*27*/]);
				if (!func_618(172))
				{
					func_365(172, 0);
				}
				func_901(Global_40.f_6563[iVar0 /*27*/], 0);
			}
			func_902(iVar0, 1);
			func_903();
			func_905(func_904(-1631730211), 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_422(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_423(int iParam0, int iParam1)
{
	func_906(1, iParam0, iParam1);
}

void func_424()
{
	if (!func_907())
	{
		func_745(1);
	}
}

void func_425()
{
	func_908(0, 1);
}

int func_426(int iParam0)
{
	return &(Global_1900073->f_220[iParam0]);
}

void func_427()
{
	struct<2> Var0;
	
	Var0 = 1;
	Var0.f_1 = -1415022764;
	HUD::_0x8A59D44189AF2BC5(&Var0, 1646793768);
}

void func_428(var uParam0)
{
	func_909();
	func_910();
	switch (iLocal_787)
	{
		case 0:
			if (!PED::IS_PED_ON_MOUNT(iLocal_301) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				Global_40.f_11184[0] = 0;
				func_339(0);
				func_340(0);
				func_341(0);
				func_342(0);
				func_343(0);
				func_425();
				func_911(14, 0, 0);
				func_371(0, 1, 0);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
				func_912(iLocal_787, 1);
			}
			break;
		
		case 1:
			func_913(uParam0, 0);
			if (!iLocal_166)
			{
				if (func_914())
				{
					if (func_431())
					{
						vLocal_602 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, vLocal_754.z, vLocal_591) };
						TASK::CLEAR_PED_TASKS(iLocal_301, 1, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_602, 1f, -1, 0.5f, false, vLocal_754.z);
						iLocal_166 = 1;
					}
				}
				else if (!func_412("ABI1_WHEREGO") && !func_412("ABI1_WAITSPOT"))
				{
					if (!func_79(&uLocal_1029))
					{
						func_214(&uLocal_1029);
					}
					else if (func_438(&uLocal_1029) > 3f)
					{
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false)) < 10f)
						{
							if (func_406(uParam0, "ABI1_WAITSPOT", 0))
							{
								func_243(&uLocal_1029);
							}
						}
					}
				}
			}
			else if (func_575(iLocal_301, vLocal_602, 0) < 1f)
			{
				func_333(10);
				func_912(iLocal_787, 3);
			}
			else if (BUILTIN::VDIST(Global_36, vLocal_602) < 1f)
			{
				if (iLocal_166)
				{
					iLocal_166 = 0;
				}
			}
			break;
		
		case 3:
			func_913(uParam0, 0);
			if (func_915() || func_916())
			{
				if ((!func_419() && !func_917()) && (iLocal_780 == 12 || iLocal_780 == 11))
				{
					func_243(&uLocal_552);
					iLocal_162 = 1;
					func_912(iLocal_787, 4);
				}
			}
			break;
		
		case 4:
			func_913(uParam0, 0);
			if (!func_419())
			{
				if (!func_210(16))
				{
					if (func_406(uParam0, "ABI1_JNECKL1", 0))
					{
						func_326(16);
						iLocal_792 = 2;
					}
				}
				else if (!func_412("ABI1_JNECKL1"))
				{
					func_333(8);
					if (func_384(9))
					{
						func_334(0, 1);
						func_371(0, 1, 0);
						if (func_406(uParam0, "ABI1_JPICYRW", 0))
						{
							func_912(iLocal_787, 5);
						}
					}
				}
			}
			break;
		
		case 5:
			func_913(uParam0, 1);
			func_918();
			if (func_384(9))
			{
				if (!func_412("ABI1_JPICYRW"))
				{
					bLocal_164 = true;
					func_410(16);
					func_912(iLocal_787, 6);
				}
			}
			break;
		
		case 6:
			func_913(uParam0, 1);
			func_918();
			if (iLocal_823 >= 6 || !bLocal_164)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 713668775, 1) == 8)
				{
					if (!bLocal_168)
					{
						bLocal_168 = true;
					}
					func_919(iLocal_803, 4);
					func_912(iLocal_787, 7);
				}
			}
			break;
		
		case 7:
			func_913(uParam0, 1);
			break;
		
		case 8:
			break;
	}
}

void func_429()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
	{
		if (func_431() || iLocal_785 == 13)
		{
			if (!func_211())
			{
				if (func_575(iLocal_306, vLocal_587, 0) > 3f)
				{
					if (!func_352(iLocal_306, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_306, vLocal_587, 0.101f, -1, 0.25f, false, fLocal_590);
					}
				}
				else if (!func_352(iLocal_306, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_306, -1);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
				}
			}
		}
	}
}

void func_430(var uParam0)
{
	if (func_914())
	{
		func_326(22);
		func_572((Local_825[8 /*9*/])->f_2);
		func_572((Local_825[9 /*9*/])->f_2);
		func_405(&iLocal_137);
		func_339(1);
		func_340(1);
		func_341(1);
		func_342(1);
		func_343(1);
		func_920(0, 0);
	}
	else
	{
		func_339(0);
		func_340(0);
		func_341(0);
		func_342(0);
		func_343(0);
		func_920(0, 1);
		if (!MAP::DOES_BLIP_EXIST(iLocal_137))
		{
			func_327(vLocal_675, 1);
		}
		if (!func_210(22))
		{
			if (!func_862((Local_825[8 /*9*/])->f_2, 0, 0, -1, -1, 0))
			{
				func_318(uParam0, (Local_825[8 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
			}
			else
			{
				func_403(Local_825[8 /*9*/], 0, 0);
			}
		}
		else if (bLocal_168 && func_893(iLocal_765, Global_36))
		{
			if (!func_862((Local_825[10 /*9*/])->f_2, 0, 0, -1, -1, 0))
			{
				func_318(uParam0, (Local_825[10 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
			}
			else
			{
				func_403(Local_825[10 /*9*/], 0, 0);
			}
		}
		else if (!func_862((Local_825[9 /*9*/])->f_2, 0, 0, -1, -1, 0))
		{
			func_318(uParam0, (Local_825[9 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
		}
		else
		{
			func_403(Local_825[9 /*9*/], 0, 0);
		}
	}
}

bool func_431()
{
	return Global_1935630->f_44 == -1415022764;
}

void func_432()
{
	if (!func_921(0))
	{
		if (func_922(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 0f))
		{
			if (func_218(Global_35, iLocal_301, 0, 1) < 15f)
			{
				if (iLocal_793 != 2)
				{
					iLocal_793 = 2;
				}
			}
			else if (iLocal_793 != 3)
			{
				iLocal_793 = 3;
			}
		}
		else if (iLocal_793 != 3)
		{
			iLocal_793 = 3;
		}
	}
	else if (iLocal_793 != 3)
	{
		iLocal_793 = 3;
	}
}

int func_433()
{
	if (((iLocal_803 == 9 && func_916()) && !func_921(0)) && !func_923(0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		return 1;
	}
	return 0;
}

void func_434(int iParam0)
{
	if (func_907())
	{
		func_745(4);
		if (iParam0 == 1)
		{
			func_745(8);
		}
	}
	else if (iParam0 == 1)
	{
		func_924();
	}
}

void func_435(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_925() };
	func_309(uParam0, &Var0);
}

int func_436()
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_768))
	{
		return 1;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_768))
	{
		iLocal_768 = VOLUME::_CREATE_VOLUME_CYLINDER(-404.017f, 338.872f, 66.16f, 0f, 0f, 0f, 132.75f, 109.25f, 34f);
	}
	return 0;
}

float func_437()
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	return BUILTIN::VDIST(vVar0, vVar3);
}

float func_438(var uParam0)
{
	if (!func_79(uParam0))
	{
		return 0f;
	}
	if (func_272(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_574() - uParam0->f_1);
}

void func_439(var uParam0)
{
	if (iLocal_188 < 1 && iLocal_785 == 15)
	{
		if (!func_419())
		{
			if (!func_79(&uLocal_507))
			{
				func_214(&uLocal_507);
			}
			else if (func_215(&uLocal_507) > 3f || func_575(Global_35, vLocal_1019, 0) > 5f)
			{
				switch (iLocal_188)
				{
					case 0:
						if (func_406(uParam0, "ABI1_BKTOCAMP", 0))
						{
							func_243(&uLocal_507);
							iLocal_188++;
						}
						break;
				}
			}
		}
		else
		{
			func_243(&uLocal_507);
		}
	}
}

int func_440(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_441(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_677(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_575(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_926() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_352(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_352(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_442(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_443()
{
	if (func_575(iLocal_306, vLocal_691, 0) < 3f)
	{
		if (ENTITY::GET_ENTITY_HEADING(iLocal_306) < (fLocal_694 + 15f) && ENTITY::GET_ENTITY_HEADING(iLocal_306) > (fLocal_694 - 15f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_444()
{
	return func_927(1);
}

void func_445()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_446(var uParam0, int iParam1)
{
	iLocal_792 = 1;
	func_405(&iLocal_137);
	func_397();
	iLocal_786 = iLocal_785;
	iLocal_805 = iParam1;
	func_318(uParam0, (Local_825[7 /*9*/])->f_2, 1, -1082130432, 0, 0, -1, -1, 0);
	func_319(uParam0, iLocal_785, 7);
}

int func_447(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_497(iParam0);
}

int func_448(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_449(int iParam0)
{
	return iParam0 & 31;
}

int func_450(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_451(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_452(var uParam0)
{
	*uParam0 = 0;
}

void func_453(int iParam0)
{
	if (func_928(179) || func_928(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_929(1);
			}
		}
	}
	if (func_930(179))
	{
		func_931(179);
	}
	if (func_930(180))
	{
		func_931(180);
	}
}

void func_454(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_453(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_246(iParam0, func_505(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_246(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_246(iParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

void func_455(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_261((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 5)
					{
						func_268((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_268((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_456(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_457(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_458(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_459()
{
	return &Global_1899515;
}

void func_460(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_461(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_462(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_463(int iParam0)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if (func_226(iParam0))
	{
		func_932(iParam0);
	}
	else
	{
		func_933(iParam0);
	}
}

int func_464(int iParam0)
{
	iParam0 = func_484(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0)
{
	int iVar0;
	
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_464(iParam0))
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_466(int iParam0)
{
	int iVar0;
	
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_464(iParam0))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

int func_467(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (func_934(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		if (func_935(iVar0))
		{
		}
		else
		{
			Global_1327590->f_19574[iVar0 /*8*/] = iParam0;
			(Global_1327590->f_19574[iVar0 /*8*/])->f_7 = iParam1;
			(Global_1327590->f_19574[iVar0 /*8*/])->f_3 = iParam2;
			(Global_1327590->f_19574[iVar0 /*8*/])->f_1 = iParam3;
			(Global_1327590->f_19574[iVar0 /*8*/])->f_2 = iParam4;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_468(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_206(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				func_469(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_469(int iParam0, bool bParam1)
{
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(iParam0), func_277(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(iParam0), func_277(iParam0), 2, "");
		func_278(iParam0, 16);
	}
	else
	{
		if (func_120(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(iParam0), func_277(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(iParam0), func_277(iParam0), 0, "");
		}
		func_121(iParam0, 16);
	}
}

void func_470(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(iParam0), func_277(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_120(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(iParam0), func_277(iParam0), 1, "");
		}
		func_278(iParam0, 8);
	}
	else
	{
		if (func_120(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(iParam0), func_277(iParam0), 0, "");
		}
		func_121(iParam0, 8);
	}
}

void func_471(int iParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	sVar0 = func_657(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (iParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	func_658(iParam0, sParam1, sVar0, fParam3);
}

int func_472(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return (func_862(sParam0, 0, 0, -1, -1, 0) && func_936());
}

int func_473()
{
	if (func_205() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_474(int iParam0, int iParam1, int iParam2)
{
	func_937(iParam0, iParam2);
	if (func_938(iParam0))
	{
		func_939(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_174(((*Global_1347702)[iParam0 /*49*/])->f_15))
		{
			func_175(((*Global_1347702)[iParam0 /*49*/])->f_15, 0, 2);
		}
	}
}

void func_475(int iParam0)
{
	func_478();
	if (!func_206(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

int func_476(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_583(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_583(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_940(iParam0);
}

int func_477(int iParam0)
{
	float fVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_43))
	{
		return 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43))
	{
		return 0;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_28 != ((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_28)
	{
		return 0;
	}
	else if (Global_1347702[iParam0 /*49*/] != Global_1347702[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])
	{
		return 0;
	}
	else if (!func_941(iParam0))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(((*Global_1347702)[iParam0 /*49*/])->f_43, false, false), func_69(((*Global_1347702)[iParam0 /*49*/])->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return 0;
	}
	return 1;
}

void func_478()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_942(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_206(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iVar1 /*49*/])->f_37))
				{
					func_115(iVar1, 0);
					func_246(iVar1, func_69(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_479(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar1 = 908516622;
	}
	else
	{
		iVar2 = func_656(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 67108864))
	{
		func_943("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_277(iParam0));
		func_944("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

var func_480(int iParam0)
{
	char[] cVar0[8];
	
	if (!func_57(iParam0))
	{
		return cVar0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_945(iParam0) /*74*/])->f_8;
			break;
		
		case 8:
			cVar0 = ((*Global_1347702)[func_111(iParam0) /*49*/])->f_3;
			break;
		
		case 11:
			if (iParam0 == func_587(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_481(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (!func_57(iParam0))
	{
		return;
	}
	if (func_447(iParam0) == 4)
	{
		func_946(iParam0, func_459());
		if (!func_497(iParam0) == 5 && !func_497(iParam0) == 6)
		{
			if (bParam3)
			{
				func_501(iParam0, 6);
			}
			else
			{
				func_501(iParam0, 5);
			}
			func_499(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_203(1);
	}
	iVar0 = func_110(iParam0);
	bVar1 = func_205() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_947(0, 2);
		if (!bVar1 && bParam1)
		{
			func_948();
		}
	}
	else
	{
		func_500(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_949(iParam0);
	}
	else
	{
		Var2 = { func_950(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_60(32768))
		{
			Var4 = { func_950(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_497(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_111(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_111(iParam0) != 95 && func_111(iParam0) != 82) && !func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_111(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_952(func_111(iParam0), iVar6, func_951());
	}
	else if (iVar0 == 8)
	{
		func_953(func_111(iParam0), iVar6, func_951(), func_473());
	}
	if (!func_497(iParam0) == 5 && !func_497(iParam0) == 6)
	{
		iVar9 = func_954(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_955(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_956(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_957((iVar10 - 20), 0, iVar10);
					iVar11 = func_957((iVar11 - 10), 0, iVar11);
				}
				func_502(1);
				func_503(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			
			case 4:
				func_503(45, 0, 1);
				break;
			
			case 8:
				iVar10 = func_958(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_957((iVar10 - 20), 0, iVar10);
					iVar11 = func_957((iVar11 - 10), 0, iVar11);
				}
				func_503(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_959(func_111(iParam0)))
				{
					func_960(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			
			case 9:
				func_503(120, 0, 1);
				break;
			
			case 2:
				func_503(120, 0, 1);
				break;
			
			case 6:
				func_503(func_961(func_112(iParam0)), 0, 1);
				break;
			
			case 5:
				func_503(120, 0, 1);
				break;
		}
	}
	func_532(iParam0, 1);
	func_946(iParam0, func_459());
	func_499(iParam0);
	if ((!func_497(iParam0) == 0 && bParam1) && func_205() == -1)
	{
		iVar12 = func_529(iParam0);
		if (iVar12 != -1)
		{
			func_530(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_531();
			if (iVar12 != -1)
			{
				func_530(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				switch (func_111(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				if (func_206(func_111(iParam0)) && func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_111(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_962();
				}
				break;
			
			case 8:
				if (func_111(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_962();
				}
				break;
		}
	}
	if (!func_497(iParam0) == 5 && !func_497(iParam0) == 6)
	{
		if (bParam3)
		{
			func_501(iParam0, 6);
		}
		else
		{
			func_501(iParam0, 5);
		}
		func_499(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_111(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					
					case 1:
						func_963();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					
					case 4:
						func_964(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(-1267972061);
						func_964(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(1619534881);
						func_964(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(-755457379);
						func_964(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(1015404643);
						func_964(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(-1724192342);
						func_964(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(1310680212);
						func_964(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(-566881549);
						func_964(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(-1753730528);
						func_964(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(147796381);
						func_964(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(-378547623);
						func_964(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(829545206);
						func_964(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_965(891318243);
						func_964(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_966();
						func_967(967523420);
						func_968();
						func_969();
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_970(10, 0)));
						break;
					
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					
					case 15:
						func_964(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_365(449, 0);
						}
						break;
					
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_365(446, 0);
						}
						break;
					
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					
					case 18:
						func_971(304805134, 1, 1);
						if (!func_583(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_481(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 20:
						func_972();
						break;
					
					case 26:
						func_973();
						break;
					
					case 17:
						func_974(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_975())
						{
							func_976(1905553950);
						}
						break;
					
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					
					case 33:
						if (!func_977(-514575035, -1))
						{
							iVar15 = func_459();
							func_978(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_979(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_975())
						{
							func_976(1529685685);
						}
						break;
					
					case 34:
						if (func_975())
						{
							func_976(-2082646505);
						}
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					
					case 31:
						func_980();
						break;
					
					case 37:
						func_981();
						if (func_982())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
						}
						break;
					
					case 38:
						func_983();
						break;
					
					case 43:
						func_984();
						break;
					
					case 44:
						if (!func_583(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_481(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_583(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_481(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					
					case 52:
						break;
					
					case 47:
						func_985();
						break;
					
					case 59:
						func_986();
						break;
					
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					
					case 61:
						func_987();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					
					case 67:
						func_988();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_365(451, 0);
						}
						if (!func_989(-1992824800))
						{
							if (func_989(1520110311))
							{
								iVar16 = func_459();
								func_978(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_979(1937177603, iVar16, 1);
							}
						}
						if (func_588(4))
						{
							if (!func_990(684296857, 1, 0))
							{
								iVar17 = func_459();
								func_978(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_979(-1439688706, iVar17, 1);
							}
						}
						func_964(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_991(89200);
						func_991(2300);
						func_991(2300);
						break;
					
					case 68:
						func_992();
						break;
					
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_993();
						func_991(-139100);
						break;
					
					case 69:
						if (func_583(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_991(-6000);
						}
						break;
					
					case 70:
						func_991(23400);
						func_991(1900);
						func_991(-15000);
						break;
					
					case 71:
						func_991(-5500);
						break;
				}
				break;
			
			case 8:
				switch (func_111(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					
					case 58:
						func_994();
						break;
					
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_995();
						break;
					
					case 66:
						func_996();
						func_997();
						break;
					
					case 67:
						if (!func_998(6))
						{
							func_999(6);
						}
						if (!func_998(3))
						{
							func_999(3);
						}
						if (func_975())
						{
							func_976(1534638301);
						}
						break;
					
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					
					case 9:
						if (func_583(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_1000(0);
							func_991(40500);
						}
						else
						{
							func_1000(0);
							func_991(46500);
						}
						break;
				}
				break;
			
			case 6:
				switch (func_111(iParam0))
				{
					case 0:
						switch (func_112(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_1001(iParam0);
		func_1002();
		switch (iVar0)
		{
			case 1:
				switch (func_111(iParam0))
				{
					case 4:
						func_1003(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 61:
					case 62:
					case 63:
						func_1003(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 25:
						func_1003(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 12:
						func_1003(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 53:
						func_1003(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 20:
						func_1003(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 19:
						func_1003(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 24:
						iVar18 = func_577(iParam0);
						func_1003(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 28:
						func_1003(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 34:
						func_1003(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_990(-2046502963, 1, 0))
						{
							func_964(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					
					case 29:
						func_1003(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					
					case 37:
						break;
					
					case 58:
						break;
					
					case 57:
						func_1003(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					
					case 76:
						func_1003(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 72:
						if (func_577(iParam0) == 0)
						{
							func_1003(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_1003(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			
			case 8:
				if (func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 536870912))
				{
					func_1004(11, 1);
				}
				switch (func_111(iParam0))
				{
					case 109:
						func_1003(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 55:
						func_1004(8, 1);
						break;
					
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					
					case 94:
						func_1003(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 63:
						func_1003(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 37:
						func_1003(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 116:
						func_1003(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			
			case 11:
				if (iParam0 == func_587(0, 10, 11, 2116153146))
				{
					func_1003(iParam0, func_577(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_587(0, 7, 11, -379687487))
				{
					func_1003(iParam0, func_1005(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_587(0, 8, 11, -1386089015))
				{
					func_1003(iParam0, func_1005(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_587(0, 11, 11, -1952009645))
				{
					func_1003(iParam0, func_1005(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_587(0, 12, 11, 2065895756))
				{
					func_1003(iParam0, func_1005(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_497(iParam0) == 0)
			{
				if (func_109(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_109(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_498(func_110(iParam0), func_109(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_111(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_1006(func_480(Global_1879514->f_1));
						if (iVar0 == 8 && func_111(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					
					case 4:
						iVar20 = 2;
						break;
					
					case 6:
						iVar20 = 1;
						break;
					
					case 2:
						iVar20 = 9;
						break;
					
					case 8:
						if (func_206(func_111(iParam0)) && func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					
					case 7:
						iVar20 = 0;
						break;
					
					case 5:
						iVar20 = 12;
						break;
					
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_1007(bParam2, iVar20);
		}
	}
	func_504(1);
	if ((bVar13 || func_962()) && (func_110(iParam0) == 1 || func_110(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_482(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (STATS::_0x01F4D242765C6B24(func_109(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_498(func_110(iParam0), func_109(iParam0), iVar0);
		if (func_60(32768))
		{
			iVar1 = func_110(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_587(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_1008();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_282(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	else if (func_174(iParam0))
	{
		if (!func_497(iParam0) == 5 && !func_497(iParam0) == 6)
		{
			if (bParam1)
			{
				func_501(iParam0, 6);
			}
			else
			{
				func_501(iParam0, 5);
			}
			func_499(iParam0);
		}
	}
	switch (func_110(iParam0))
	{
		case 1:
			switch (func_111(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		
		case 8:
			switch (func_111(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_483(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	char[] cVar4[8];
	int iVar5;
	int iVar6;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_276(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_277(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_277(iParam0));
		}
		func_121(iParam0, 4);
		func_121(iParam0, 8);
		return;
	}
	else if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		func_281(Global_1347702[iParam0 /*49*/]);
		func_279(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_277(iParam0)))
		{
			StringCopy(&vVar1, "", 24);
			cVar4 = func_657(0, &vVar1, 0, 0, -1, -1);
			func_658(iParam0, &vVar1, cVar4, -1082130432);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_277(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_121(iParam0, 4);
		func_121(iParam0, 8);
		return;
	}
	iVar5 = 0;
	if (func_120(iParam0, 8))
	{
		iVar5 = 1;
	}
	iVar6 = 0;
	if (func_120(iParam0, 16))
	{
		iVar6 = 1;
	}
	func_281(Global_1347702[iParam0 /*49*/]);
	func_279(iParam0);
	MemCopy(&vVar1, {((*Global_1347702)[iParam0 /*49*/])->f_1}, 3);
	StringConCat(&vVar1, "_obj", 24);
	if (func_120(iParam0, 64))
	{
		StringConCat(&vVar1, "3", 24);
	}
	else if (func_120(iParam0, 32))
	{
		StringConCat(&vVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&vVar1))
	{
		cVar4 = func_657(0, &vVar1, 0, 0, -1, -1);
		func_658(iParam0, &vVar1, cVar4, -1082130432);
		if (func_120(iParam0, 16) || iVar6)
		{
			func_469(iParam0, 1);
		}
		if (func_120(iParam0, 8) || iVar5)
		{
			func_470(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&vVar1, "", 24);
		cVar4 = func_657(0, &vVar1, 0, 0, -1, -1);
		func_658(iParam0, &vVar1, cVar4, -1082130432);
		func_470(iParam0, 1);
		if (func_120(iParam0, 16) || iVar6)
		{
			func_469(iParam0, 1);
		}
	}
}

int func_484(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

Vector3 func_485(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;
	
	vVar0 = { func_1009(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_257(vVar0))
	{
		vVar0 = { func_1009(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_486(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_487(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_488()
{
	func_1010();
	func_1011();
	func_1012();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_489(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (func_205() == -1)
	{
		func_1013();
	}
	else
	{
		return;
	}
	func_1014();
	Global_40.f_9.f_14 = func_459();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1015())
		{
			func_487(Global_1310720->f_1);
		}
		else if (func_873() == func_184(Global_36, 1) && func_1016() != 2)
		{
			func_487(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_487(Global_36);
		}
		func_1017(Global_36, &vVar0, &uVar4);
		if (!func_1015())
		{
			if (func_839(vVar0, Global_36) < func_839(Global_40.f_9.f_7, Global_36))
			{
				func_487(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_184(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1017(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_285(Global_1935630, 8192);
	}
	func_1018();
}

void func_490(struct<16> Param0, int iParam16)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_1019(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_1020(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_1021(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_491(int iParam0)
{
	if (func_1022())
	{
		Global_1357509 = 1;
	}
	if (func_1023(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == -1016714371)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

bool func_492(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_493(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_494()
{
	return Global_1572864->f_12;
}

void func_495(bool bParam0)
{
	int iVar0;
	struct<16> Var1;
	
	if (func_888(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_1024();
	Var1.f_3.f_3 = iVar0;
	if ((!func_1025(Global_1347343->f_2) && !func_492(Global_1347343->f_11, 64)) || func_60(32768))
	{
		Var1.f_7 = func_1026();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_492(Global_1347343->f_11, 1024) && !func_60(32768))
	{
		Var1.f_11 = func_1027();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_492(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_1028();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_1029(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_1030(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_493(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_493(&(Global_1347343->f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_496(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_261((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 7)
					{
						func_268((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_268((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 2)
					{
						func_268((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_497(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1031(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_498(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_205() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_499(int iParam0)
{
	return func_1033(func_1032(iParam0));
}

int func_500(bool bParam0)
{
	if (!bParam0 && func_1034(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_501(int iParam0, int iParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_1035(iParam0, iParam1);
}

void func_502(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_503(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_1036(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_504(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

Vector3 func_505(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		
		case 33:
			return 905.92f, -421.19f, 88.23f;
		
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		
		case 38:
			return -329.32f, -366.6f, 87f;
		
		case 39:
			return 97.4f, -212.47f, 111.6f;
		
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		
		case 84:
			return -73.18f, -392.3f, 70.84f;
		
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		
		case 104:
			return 2407f, -585.32f, 40.66f;
		
		case 105:
			return -219.25f, 212.93f, 94.15f;
		
		case 116:
			return 211.99f, 512.98f, 126.54f;
		
		case 117:
			return -329.2f, 797.9f, 116.89f;
		
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		
		case 135:
			return -576.08f, 524.9f, 97.86f;
		
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

bool func_506()
{
	return func_1037();
}

int func_507()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_508()
{
	if (Local_18 == 0)
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_3);
	if (PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
	{
		PHYSICS::DELETE_ROPE(&(Local_18.f_8));
	}
	if (PHYSICS::DOES_ROPE_EXIST(Local_18.f_9))
	{
		PHYSICS::DELETE_ROPE(&(Local_18.f_9));
	}
	func_351(&(Local_18.f_5));
	func_351(&(Local_18.f_6));
	func_351(&(Local_18.f_7));
	func_1038(0);
}

void func_509(int iParam0, int iParam1)
{
	if (func_698(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

void func_510(int iParam0)
{
	switch (func_205())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

void func_511(bool bParam0)
{
	if (!bParam0)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16384);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 32768);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 262144);
	}
	else
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 262144);
	}
}

void func_512()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		func_894(iVar0);
		iVar0++;
	}
}

void func_513(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { -472.811f, 172.223f, 40.386f };
	vVar3 = { 0f, 0f, 56f };
	vVar6 = { 17f, 93f, 5f };
	if (bParam0)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iLocal_769))
		{
			PATHFIND::_0xD17672447692478E(iLocal_769, 0);
		}
		func_516(iLocal_769);
	}
	else
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_769))
		{
			iLocal_769 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "RIVER_NODE_BLKR");
		}
		if (VOLUME::_0x92A78D0BEDB332A3(iLocal_769))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_769, 0, 0, 0);
		}
	}
}

void func_514()
{
	func_518(14, 1);
}

int func_515(int iParam0)
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 == &uLocal_561[iParam0] && iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void func_516(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

bool func_517(int iParam0)
{
	return func_598(iParam0, 16, 1);
}

void func_518(int iParam0, bool bParam1)
{
	if (!func_802(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1039(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 16))
		{
			func_724(iParam0, 16, 0);
		}
	}
	func_724(iParam0, 1, bParam1);
}

struct<2> func_519(int iParam0)
{
	char cVar0[16];
	int iVar2;
	
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 2);
	if (!(func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 2) && func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4)))
	{
		iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0);
		StringCopy(&cVar0, HUD::_0xD8402B858F4DDD88(&cVar0, (iVar2 - 1)), 16);
	}
	return cVar0;
}

struct<2> func_520(int iParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;
	
	Var0 = { func_519(iParam0) };
	sVar2 = func_1040(&Var0);
	iVar3 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar2);
	sVar2 = HUD::_0x806862E5D266CF38(sVar2, 1, iVar3);
	StringCopy(&Var0, sVar2, 16);
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

int func_521(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_522(int iParam0)
{
	if (!func_521(iParam0))
	{
		return false;
	}
	if (!func_517(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_523(int iParam0)
{
	if (func_521(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_524(int iParam0, bool bParam1)
{
	if (!func_802(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1039(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_724(iParam0, 1, 0);
		}
	}
	func_724(iParam0, 16, bParam1);
}

void func_525(int iParam0)
{
	vector3 vVar0;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	func_1041(vVar0, 0);
}

int func_526(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 143:
			*uParam2 = 1754500170;
			*uParam1 = 14;
			return 1;
		
		default:
			break;
	}
	*uParam2 = -1600776215;
	*uParam1 = -1;
	return 0;
}

int func_527(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1042(iParam0))
	{
		return 0;
	}
	if (!func_1043(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		return func_1044(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_1042(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			func_1045(iParam0, (*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (func_110(iParam0))
	{
		case 1:
			iVar0 = func_111(iParam0);
			return func_1046(iVar0);
		
		case 8:
			iVar1 = func_111(iParam0);
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_1047(iVar1);
			}
			break;
	}
	return -1;
}

void func_530(bool bParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_205() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_1048(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_1049();
		Global_1898077->f_9 = func_1050(Global_1894899->f_2);
		func_1051(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_531()
{
	if (!func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_583(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_583(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_583(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_583(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_583(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_583(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_532(int iParam0, bool bParam1)
{
	if (func_205() != -1)
	{
		return;
	}
	if (func_56(0) != iParam0)
	{
		return;
	}
	if (func_1052(iParam0))
	{
		if (bParam1)
		{
			func_1053(-525676072);
		}
		else
		{
			func_1054(-525676072);
		}
	}
}

void func_533(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_534(var uParam0)
{
	if (func_1055(uParam0->f_1, 3))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_535(var uParam0)
{
	if (func_1055(uParam0->f_3, 3))
	{
		switch (uParam0->f_1)
		{
			case 2:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
				{
					TASK::REMOVE_WAYPOINT_RECORDING(*uParam0);
				}
				break;
			
			case 1:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				}
				break;
		}
		uParam0->f_3 = 0;
	}
}

void func_536(var uParam0)
{
	if (func_1055(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_ANIM_DICT(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_537(var uParam0)
{
	if (func_1055(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_CLIP_SET(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_538(int iParam0, int iParam1)
{
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_539()
{
	if (func_464(0))
	{
		func_1056(0);
	}
	if (func_464(1))
	{
		func_1056(1);
	}
	if (func_464(5))
	{
		func_1056(5);
	}
	if (func_464(6))
	{
		func_1057(6);
	}
}

int func_540(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_1058(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_541(var uParam0)
{
	func_547(uParam0, 0);
	func_549(uParam0, 0);
	func_544(uParam0, 1);
	func_1059(uParam0, 1);
	func_1060(uParam0, 0);
	func_1061(uParam0, 1);
	func_1062(uParam0, 1, 1, 1);
}

void func_542(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 4);
	}
	else
	{
		func_1064(&(uParam0->f_1), 4);
	}
}

void func_543(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 2);
	}
	else
	{
		func_1064(&(uParam0->f_1), 2);
	}
}

void func_544(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 256);
	}
	else
	{
		func_1064(&(uParam0->f_1), 256);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 1);
	}
	else
	{
		func_1064(&(uParam0->f_1), 1);
	}
}

void func_546(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 8);
	}
	else
	{
		func_1064(&(uParam0->f_1), 8);
	}
}

void func_547(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 16384);
	}
	else
	{
		func_1064(&(uParam0->f_1), 16384);
	}
}

void func_548(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 16);
	}
	else
	{
		func_1064(&(uParam0->f_1), 16);
	}
}

void func_549(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 2048);
	}
	else
	{
		func_1064(&(uParam0->f_1), 2048);
	}
}

bool func_550(var uParam0)
{
	return *uParam0 != 0;
}

int func_551(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*3*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*3*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_552(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_560((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_553(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_554(int iParam0, int iParam1)
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
}

int func_555(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_708(func_459());
	if (func_1065(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_1065(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_556(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_1066(iParam0);
	if (func_1067(iVar1))
	{
		iVar0 = ((*Global_1835011)[iVar1 /*74*/])->f_1;
	}
	else
	{
		iVar2 = func_1068(iParam0);
		if (func_206(iVar2))
		{
			iVar0 = ((*Global_1347702)[iVar2 /*49*/])->f_15;
		}
		else if (iParam0 == 2116153146)
		{
			iVar0 = func_587(0, 10, 11, 2116153146);
		}
	}
	return iVar0;
}

int func_557(var uParam0)
{
	if (func_1055(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_1055(uParam0->f_1, 1))
	{
		func_1069(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_1070(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

bool func_558(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_559(var uParam0)
{
	if (func_1055(uParam0->f_3, 2))
	{
		return 1;
	}
	if (!func_1055(uParam0->f_3, 1))
	{
		func_1071(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_1070(&(uParam0->f_3), 2);
				return 1;
			}
			break;
		
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_1070(&(uParam0->f_3), 2);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_560(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_561(var uParam0)
{
	if (func_1055(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_1055(uParam0->f_1, 1))
	{
		func_1072(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_1070(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

bool func_562(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_563(var uParam0)
{
	if (func_1055(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_1055(uParam0->f_1, 1))
	{
		func_1073(uParam0);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(*uParam0))
	{
		func_1070(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_564(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_519(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (HUD::_0x2C729F2B94CEA911(&Var0))
		{
			if (!HUD::_0xD0976CC34002DB57(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_565(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_2573)))
		{
			if (!HUD::_0xD0976CC34002DB57(&(uParam0->f_2573)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_566(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam1 == 7)
	{
		if (uParam0->f_177 == 10)
		{
			iVar0 = uParam0->f_750;
		}
		else if (func_6(uParam0->f_172, 8))
		{
			iVar0 = uParam0->f_749;
		}
		else
		{
			iVar0 = uParam0->f_748;
		}
	}
	else if (iParam1 == 1)
	{
		iVar0 = uParam0->f_748;
	}
	else if (iParam1 == 2)
	{
		iVar0 = uParam0->f_749;
	}
	else if (iParam1 == 4)
	{
		iVar0 = uParam0->f_750;
	}
	if (func_1074(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_567(int iParam0, int iParam1)
{
	var uVar0;
	
	return func_1075(&uVar0, iParam0, iParam1);
}

bool func_568(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

void func_569(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_568(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_1076(1);
	}
}

void func_570(int iParam0, vector3 vParam1, var uParam4)
{
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_7 = { vParam1 };
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_13 = uParam4;
	((*Global_2621440)[iParam0 /*12065*/])->f_9 = 5;
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_15 = func_184(vParam1, 1);
}

bool func_571(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_572(char* sParam0)
{
	if (func_414(sParam0, 1))
	{
		func_411(sParam0, 1);
	}
}

void func_573(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_574() - fParam1);
	func_1077(uParam0, 1);
	func_1078(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_574()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_575(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_576(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_577(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_1079(iParam0);
}

int func_578(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_579(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -589165916;
		
		case 1:
			return -1894360593;
		
		case 2:
			return 581819093;
		
		case 3:
			return 687859577;
		
		case 4:
			return -103573613;
		
		case 5:
			return 1202375449;
		
		case 6:
			return 2038046186;
		
		case 7:
			return -839878969;
		
		case 8:
			return -360730635;
		
		case 9:
			return 194099983;
		
		case 10:
			return -1891229662;
		
		case 11:
			return -668333238;
		
		case 12:
			return 99378894;
		
		case 13:
			return 673012160;
		
		case 14:
			return -1220302226;
		
		case 15:
			return 2061320468;
		
		case 16:
			return -709866131;
		
		case 17:
			return -1348173149;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 5:
			return 4;
		
		case 6:
			return 79;
		
		case 0:
			return 43;
		
		case 2:
			return 98;
		
		case 4:
			return 58;
		
		case 1:
			return 71;
		
		case 3:
			return 9;
		
		case 7:
			return 22;
		
		case 8:
			return 37;
		
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_581(int iParam0)
{
	if (func_110(iParam0) != 4)
	{
		return -1;
	}
	return func_111(iParam0);
}

int func_582(var uParam0, int iParam1)
{
	return 0;
}

int func_583(int iParam0, bool bParam1)
{
	switch (func_447(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_584(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		
		case 4:
			return 105;
		
		case 8:
			return 78;
		
		case 16:
			return 51;
		
		case 32:
			return 41;
		
		case 64:
			return 108;
		
		case 128:
			return 44;
		
		case 256:
			return 53;
		
		case 512:
			return 84;
		
		case 1024:
			return 22;
		
		case 2048:
			return 73;
		
		case 4096:
			return 103;
		
		case 8192:
			return 18;
		
		case 16384:
			return 46;
		
		case 32768:
			return 0;
		
		case 65536:
			return 106;
		
		case 131072:
			return 47;
		
		case 262144:
			return 101;
		
		default:
			break;
	}
	return -1;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		
		case 4:
			return -520696743;
		
		case 8:
			return -295901403;
		
		case 16:
			return -1445837674;
		
		case 32:
			return -75278298;
		
		case 64:
			return -675249331;
		
		case 128:
			return -1822243680;
		
		case 256:
			return -1307199059;
		
		case 512:
			return -17701163;
		
		case 1024:
			return -172170798;
		
		case 2048:
			return 1836682179;
		
		case 4096:
			return -67934460;
		
		case 8192:
			return 410776537;
		
		case 16384:
			return -240986174;
		
		case 32768:
			return 1505721140;
		
		case 65536:
			return 2023114891;
		
		case 131072:
			return -30217677;
		
		case 262144:
			return 653209800;
		
		default:
			break;
	}
	return 0;
}

int func_587(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			
			case 10:
				return -1;
			
			case 12:
				return -1;
			
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			
			case 8:
				return -1;
			
			case 7:
				return -1;
			
			case 6:
				return -1;
			
			default:
				return -1;
		}
	}
	if (iVar2 >= func_1080())
	{
		iVar2 = func_1080();
	}
	iVar5 = func_1081(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_448(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_448(iVar6) == 0)
			{
				return func_1082(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_448(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_448(iVar6) == 0)
			{
				return func_1082(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_1082(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_588(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_589(int iParam0)
{
	return (Global_40.f_12018.f_26 && iParam0) != 0;
}

int func_590(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_1083(iParam0);
}

int func_591()
{
	return Global_40.f_11095.f_35;
}

void func_592(int iParam0, int iParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_1084(iParam0, iParam1);
}

int func_593(int iParam0)
{
	if (func_205() != -1)
	{
		return 0;
	}
	if (!func_206(iParam0))
	{
		return 0;
	}
	return func_583(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_594(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_205() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_595()
{
	int iVar0;
	int iVar1;
	
	if (BUILTIN::VDIST(Global_36, ((*Global_1347702)[112 /*49*/])->f_24) < 300f)
	{
		return 0;
	}
	else if (BUILTIN::VDIST(Global_36, ((*Global_1347702)[113 /*49*/])->f_24) < 300f)
	{
		return 0;
	}
	iVar0 = func_1085(((*Global_1347702)[112 /*49*/])->f_15);
	func_978(&iVar0, 0, 0, 4, 0, 0, 0, 0);
	if (!func_1086(func_459(), iVar0, 1))
	{
		return 0;
	}
	iVar1 = func_755(1);
	if (iVar1 > 1)
	{
		return 0;
	}
	return 1;
}

int func_596(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return func_1087(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_597(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1088(iParam1, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return false;
	}
	iVar1 = func_1089(iParam0, 1);
	if (iVar1 < 0 || iVar1 > 31)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar1);
}

bool func_598(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_802(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_599(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_802(iParam0))
		{
			return false;
		}
	}
	func_1090(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

int func_600(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, float fParam5)
{
	if (!bParam4)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !func_1091())
		{
			return 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 1;
	}
	if (fParam1 == -1f)
	{
		fParam1 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		fParam2 = (fParam2 * fParam2);
		if (fParam5 != -1f)
		{
			fParam5 = (fParam5 * fParam5);
		}
	}
	if (fParam1 < fParam2)
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		return iParam3;
	}
	else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return 1;
	}
	else if (fParam5 != -1f && fParam1 >= fParam5)
	{
		if (PED::_0x164CECC59E70DF86(iParam0, 75f))
		{
			return 0;
		}
	}
	else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_601(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_209(*uParam0, 1))
	{
		return 0;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return 0;
	}
	else if (func_857(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				func_1092(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				func_1093(uParam0, &Global_35, 1176256512, -1, 0, 1077936128, 1, 1, 0, 1, 0, 0);
			}
		}
		return 0;
	}
	return 1;
}

void func_602(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_802(iParam0))
		{
			return;
		}
	}
	func_1090(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_603(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!func_57(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	if (iVar0 == 1)
	{
		iVar4 = func_111(iParam0);
		if (iVar4 == 23)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
			if (func_594(134, 0) && func_755(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == 16)
		{
			iVar2 = 0;
			if (bParam1)
			{
				if (func_1096(134))
				{
					if (func_754(134, iVar2, 0, 0, 0))
					{
					}
					else
					{
						func_1094(134, iVar2, 0);
					}
				}
				else
				{
					func_1095(134, iVar2, 0);
				}
				if (!func_593(138) && func_1096(138))
				{
					if (func_754(138, 1, 0, 0, 0))
					{
					}
					else
					{
						func_1094(138, 1, 0);
					}
				}
				else
				{
					func_1095(138, 1, 0);
				}
			}
			else
			{
				func_1095(134, iVar2, 0);
				func_1095(138, 1, 0);
			}
			return;
		}
		else if (iVar4 == 46)
		{
			if (func_593(58))
			{
				iVar1 = 140;
				if (bParam1)
				{
					if (func_754(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_1094(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_1095(iVar1, iVar2, bVar3);
				}
			}
		}
		else if (iVar4 == 17)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			if (func_593(5) && func_756(12))
			{
				iVar1 = 21;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_754(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_1094(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_1095(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 138;
			iVar2 = 0;
		}
		else if (iVar4 == 15)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			iVar1 = 59;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
		}
		else if (iVar4 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar4 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar4 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar4 == 10)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			if ((func_583(((*Global_1835011)[11 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[14 /*74*/])->f_1, 1)) && func_583(((*Global_1347702)[61 /*49*/])->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_754(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_1094(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_1095(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 59;
			iVar2 = 0;
		}
		else if (iVar4 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar5 = func_111(iParam0);
		if (iVar5 == 0)
		{
			if (func_757(15))
			{
				if (bParam1)
				{
					if (func_758(15, 0, 0))
					{
					}
				}
				else
				{
					func_1097(15, 0);
				}
			}
			iVar1 = 97;
		}
		else if (iVar5 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar5 == 61)
		{
			if (func_757(15))
			{
				if (bParam1)
				{
					if (func_758(15, 0, 0))
					{
					}
				}
				else
				{
					func_1097(15, 0);
				}
			}
			if (func_757(9))
			{
				if (bParam1)
				{
					if (func_758(9, 0, 0))
					{
					}
				}
				else
				{
					func_1097(9, 0);
				}
			}
			if (!func_583(((*Global_1347702)[63 /*49*/])->f_15, 1))
			{
				iVar1 = 63;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 62)
		{
			if (func_757(15))
			{
				if (bParam1)
				{
					if (func_758(15, 0, 0))
					{
					}
				}
				else
				{
					func_1097(15, 0);
				}
			}
			if (func_757(9))
			{
				if (bParam1)
				{
					if (func_758(9, 0, 0))
					{
					}
				}
				else
				{
					func_1097(9, 0);
				}
			}
			iVar1 = 112;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			iVar1 = 97;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			iVar1 = 63;
		}
		else if (iVar5 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar5 == 76)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
		}
		else if (iVar5 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
			bVar3 = true;
		}
		else if (iVar5 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar5 == 84)
		{
			iVar1 = 85;
			iVar2 = 1;
		}
		else if (iVar5 == 97)
		{
			if (func_583(((*Global_1835011)[6 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[13 /*74*/])->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (bParam1)
				{
					if (func_754(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_1094(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_1095(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = -1;
		}
		else if (iVar5 == 114)
		{
			if (func_583(((*Global_1835011)[9 /*74*/])->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 134)
		{
			iVar1 = 95;
			if (bParam1)
			{
				if (func_754(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_1094(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_1095(iVar1, iVar2, bVar3);
			}
			iVar1 = 138;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (func_754(iVar1, iVar2, bVar3, 0, 0))
		{
		}
		else
		{
			func_1094(iVar1, iVar2, bVar3);
		}
	}
	else
	{
		func_1095(iVar1, iVar2, bVar3);
	}
}

void func_604(int iParam0)
{
	if (!func_609(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 65:
		case 68:
		case 76:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_606(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_1098(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_1099(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_1100(iVar0) < func_1101(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_1102(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_607(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar0 = func_574();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_608(int iParam0)
{
	int iVar0;
	
	iVar0 = -1337945352;
	if (!func_206(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

int func_609(int iParam0)
{
	if (func_205() != -1)
	{
		return 0;
	}
	if (!func_206(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_610(int iParam0)
{
	switch (func_205())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_611(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_612(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_613(int iParam0)
{
	if (!func_1103(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_1104(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_1105(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_1105(iParam0), false) <= func_1106();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_1106();
	}
	return func_1107();
}

int func_614(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_615(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_57(iParam0))
	{
		return;
	}
	switch (func_110(iParam0))
	{
		case 1:
			iVar0 = func_111(iParam0);
			if (func_1108(iVar0, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_1109(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_1109(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_1110(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_1111((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		
		case 8:
			iVar1 = func_111(iParam0);
			if (func_1112(iVar1, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_608(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					
					case 2103462781:
						iVar2 = -1032930804;
						break;
					
					case -1485222547:
						iVar2 = 13700166;
						break;
					
					case 1673015813:
						iVar2 = -592708248;
						break;
					
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_608(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_611(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

int func_616(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

int func_617(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (fParam1 <= (func_1113(iParam0) * func_1113(iParam0)))
	{
		if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
		{
			iVar0 = ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[iParam0 /*49*/])->f_21);
			if (iVar0 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar0)
				{
					iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, ((*Global_1347702)[iParam0 /*49*/])->f_21);
					iVar5 = iVar4;
					if (ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar5))
						{
							iVar1++;
							iVar6 = iVar5;
							if (ENTITY::IS_ENTITY_DEAD(iVar6))
							{
							}
							else
							{
								if (!PED::_0x5102307CE88798EB(iVar6))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar6);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar6))
								{
								}
								else
								{
									bVar3 = true;
								}
								else
								{
									iVar2++;
								}
								if (iVar1 > 0)
								{
									if (!bVar3)
									{
										return 0;
									}
								}
								iVar2 = 0;
								while (iVar2 < iVar0)
								{
									iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, ((*Global_1347702)[iParam0 /*49*/])->f_21);
									iVar8 = iVar7;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::IS_ENTITY_A_PED(iVar8)) && !ENTITY::IS_ENTITY_DEAD(iVar8)) && PED::_0x5102307CE88798EB(iVar8))
									{
										PED::_0x3088634CF8C819CF(iVar8);
									}
									iVar2++;
								}
								return 1;
								Jump @310; //curOff = 292
								if (fParam1 < 10f)
								{
									return 1;
								}
								Jump @317; //curOff = 310
								return 1;
								return 0;
							}
						}
					}
				}
			}
		}
	}

bool func_618(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_205() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

int func_619()
{
	if (!func_1114() && func_1115(1))
	{
		return 1;
	}
	return 0;
}

void func_620(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_772(iParam0, &iVar0, &iVar1);
	if (!func_773(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1116(iParam0, 1024))
	{
		return;
	}
	func_774(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

struct<8> func_621(int iParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "script@timelapse@", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[iParam0 /*49*/])->f_3), 64);
	StringConCat(&cVar0, "_timelapse", 64);
	return cVar0;
}

struct<8> func_622(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_1117(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_253() };
	}
	return Var0;
}

void func_623(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_348)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_348);
	}
}

int func_624(var uParam0)
{
	return 0;
}

bool func_625(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_626(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (func_625(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_344), {func_1118("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_344), {func_1118("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_310(uParam0, 8192);
}

Vector3 func_627(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_628(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	
	MemCopy(&uVar0, {func_1119(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_349))
	{
		uParam0->f_349 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_349, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_349, func_1120(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_349, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_349);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_629(var uParam0, vector3 vParam1)
{
	if (func_257(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_630(var uParam0)
{
	return uParam0->f_339;
}

void func_631()
{
	struct<4> Var0;
	
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1121(Var0);
	}
}

void func_632(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, uParam0->f_366[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, uParam0->f_366[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_348, uParam0->f_366[iVar0 /*9*/]);
		}
		(uParam0->f_366[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

float func_633(var uParam0)
{
	return uParam0->f_338;
}

void func_634(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_625(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_677(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1122());
		func_310(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1123(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_310(uParam0, 16);
	}
}

void func_635(var uParam0)
{
	if ((!func_625(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_348)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_348, 0))
	{
		func_1124(uParam0);
		func_1125(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_348, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_348);
		}
		func_310(uParam0, 32768);
	}
}

bool func_636()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_637(int iParam0)
{
	struct<4> Var0;
	
	if (func_1126(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1121(Var0);
}

int func_638(char* sParam0)
{
	return sParam0->f_9;
}

void func_639(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

int func_640(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if ((uParam0->f_177 == 6 && func_642(uParam0) == -1) || func_32(uParam0, 64))
			{
				return 1;
			}
			break;
		
		case 8:
			return uParam0->f_177 == 6;
		
		case 2:
			return uParam0->f_177 == 2;
		
		case 3:
			return uParam0->f_177 == 9;
		
		case 4:
			return func_375(&(uParam0->f_753));
		
		case 5:
			return uParam0->f_177 == 8;
		
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
	}
	return 0;
}

int func_641(char* sParam0)
{
	return sParam0->f_10;
}

int func_642(var uParam0)
{
	return uParam0->f_169;
}

int func_643(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	uParam0->f_781 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_776);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return 1;
		}
		if (!bParam4)
		{
			uParam0->f_776 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_776 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_782 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_776);
	if (!uParam0->f_782)
	{
		if (!bParam4)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_1127(uParam0);
	uParam0->f_776.f_2 = 0;
	uParam0->f_789 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_776.f_2 = 12;
	uParam0->f_791 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_782 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_644(var uParam0, int iParam1)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_776.f_1), &(uParam0->f_776));
}

bool func_645(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;
	
	if (iParam2 == -1)
	{
		if (func_646(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_646(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_646(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_646(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_646(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_646(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_646(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_784) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_646(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_646(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_646(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_776));
}

bool func_647(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_776));
}

int func_648(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_261((*uParam0)[iVar0 /*16*/], 1048576) && MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*16*/], sParam1)) && ((*uParam0)[iVar0 /*16*/])->f_9 == sParam1->f_9) && ((*uParam0)[iVar0 /*16*/])->f_10 == sParam1->f_10)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_649(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_776);
	uParam0->f_776 = 0;
	uParam0->f_782 = 0;
}

void func_650(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_651(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	
	if (func_6(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = func_1128(iParam1, vParam2, fParam5, bParam6, bParam7, iParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_1129(iParam1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 179, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 270583);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			func_1(&(uParam0->f_172), 64);
		}
	}
	return iVar0;
}

int func_652()
{
	int iVar0;
	
	iVar0 = -1;
	switch (iLocal_784)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_926[0 /*6*/])))
			{
				Local_926[0 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_926[0 /*6*/])->f_3, 0, "pl_leadin", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_926[0 /*6*/]));
				func_1130(iLocal_784, 1);
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(&(Local_926[0 /*6*/]), 1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_297) && !ENTITY::IS_ENTITY_DEAD(iLocal_300))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[0 /*6*/]), "p_cs_book03x", iLocal_297, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[0 /*6*/]), "AbigailRoberts", iLocal_300, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[0 /*6*/]), "ARTHUR", Global_35, 0);
					ANIMSCENE::START_ANIM_SCENE(&(Local_926[0 /*6*/]));
					PED::_0x2208438012482A1A(iLocal_300, false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[0 /*6*/]), "s_greet");
					MISC::_0xFC6ECB9170145ECE();
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_300, "RABI1_ANTI_GRIEF", ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false), 0, 0);
					func_1130(iLocal_784, 2);
				}
			}
			break;
		
		case 2:
			func_1131();
			if (iLocal_806 > 0)
			{
				iVar0 = func_863(&iLocal_300, &iLocal_313, 4f, &Local_374, 0f, 3, 1, 0, 1, 0, 0, 2, -1082130432);
				if (iVar0 == 0)
				{
					func_311();
					PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
					PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
					PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
					if (PED::_0xD5FE956C70FF370B(Global_35))
					{
						PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
					}
					bLocal_150 = true;
					func_1130(iLocal_784, 6);
				}
			}
			break;
		
		case 6:
			func_1131();
			PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
			PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
			PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
			if (!PED::IS_PED_FACING_PED(Global_35, iLocal_300, 90f))
			{
				if (!func_352(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_300, 0, -1082130432, -1082130432, -1082130432);
				}
			}
			if (ANIMSCENE::_0x25557E324489393C(&(Local_926[0 /*6*/])))
			{
				if (((ANIMSCENE::_0x1F0E401031E20146(&(Local_926[0 /*6*/]), "s_postgreetleadin") && ANIMSCENE::_GET_ANIM_SCENE_TIME(&(Local_926[0 /*6*/])) >= 3.1f) || ANIMSCENE::_GET_ANIM_SCENE_TIME(&(Local_926[0 /*6*/])) >= 14.2f) || ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[0 /*6*/]), 0))
				{
					func_1130(iLocal_784, 7);
					return 1;
				}
			}
			break;
		
		case 7:
			return 1;
	}
	return 0;
}

int func_653()
{
	if (&iLocal_172[2])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_302))
	{
		iLocal_302 = func_696(1, 1, 1, 3750f, 156.3f, 50.33f, 0f, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (func_209(iLocal_302, 1) && !&iLocal_172[2])
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_302, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_302, true, true);
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_302, 3750f, 156.3f, 50.33f, true, false, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_302, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_302, false);
		TASK::CLEAR_PED_TASKS(iLocal_302, 1, 0);
		TASK::TASK_STAND_STILL(iLocal_302, -1);
		func_518(1, 1);
		iLocal_172[2] = 1;
		return 1;
	}
	return 0;
}

void func_654(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_1132(&(uParam0->f_643), iParam1, sParam2, bParam3);
}

void func_655()
{
	char* sVar0;
	int iVar1;
	
	if (&Global_40.f_11184[0] != 1309979101)
	{
		if (!func_907())
		{
			Global_40.f_11184[0] = 1309979101;
			sVar0 = func_1134(func_1133(1309979101), 109029619);
			iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Fishing");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar1, "LureName", sVar0);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar1, "LureCount", "");
			DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar1, "LureTexture", -973584697);
		}
	}
}

int func_656(int iParam0, int iParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857;
	}
	else if (iParam0 == 26)
	{
		return -1744398657;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184;
	}
	else if (iParam0 == 58)
	{
		return -1739686743;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131;
	}
	else if (iParam0 == 77)
	{
		return -434412386;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512;
	}
	else if (iParam0 == 89)
	{
		return 1970061205;
	}
	else if (iParam0 == 101)
	{
		return -1259688762;
	}
	else if (iParam0 == 115)
	{
		return 1079956634;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885;
	}
	else if (iParam0 == 121)
	{
		if (iParam1 || func_583(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 415367144;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616;
	}
	else if (iParam0 == 136)
	{
		return 194953189;
	}
	else if (iParam0 == 143)
	{
		return 825960713;
	}
	else if (iParam0 == 147)
	{
		if (iParam1 || func_583(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 1770336866;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_36;
}

char* func_657(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_1040(sParam1));
}

void func_658(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_276(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_277(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_277(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, 0, 0);
}

void func_659(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;
	
	if (!func_1067(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_660(int iParam0)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_1136(iParam0, func_1135(iParam0) + 1);
}

int func_661(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1032(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_1137(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_1138(iVar0, iParam1);
	return iParam1;
}

void func_662(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_663(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_664(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_665(bool bParam0)
{
	func_1139(bParam0);
	func_1140(bParam0);
	func_1141(bParam0);
	func_1142(bParam0);
	func_1143(bParam0);
	func_1144(bParam0);
	func_1145(bParam0);
	func_1146(bParam0);
}

void func_666(bool bParam0)
{
	if (func_205() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_365(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_365(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_1147(1, bParam0, 1);
	func_1148();
	Global_40.f_11095.f_43 = bParam0;
}

void func_667(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_205() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1149(Global_1898077->f_7, Global_1898077->f_3);
}

void func_668(int iParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_205() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1150(Global_1898077->f_7, Global_1898077->f_4);
}

int func_669(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_670(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_568(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_671(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_568(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_568(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_205() == -1 && !func_669(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = 379542007;
				break;
			
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_669(-183018591))
				{
					bVar0 = -183018591;
				}
				else
				{
					bVar0 = 379542007;
				}
				break;
			
			default:
				bVar0 = 379542007;
				break;
		}
	}
	else if (bVar0 == -164645981 && iParam0 == Global_35)
	{
		bVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_568(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_1151(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1152(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1153(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_672(float fParam0)
{
	func_1154(10, fParam0);
}

void func_673()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_674(var uParam0)
{
	int iVar0;
	
	iVar0 = func_1155(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	SCRIPTS::_0x50B72A754EE64A71(iVar0);
}

void func_675(var uParam0)
{
	int iVar0;
	
	iVar0 = func_1155(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	SCRIPTS::_0x7D654266025E921B(iVar0);
}

int func_676()
{
	return Global_1572864->f_10;
}

bool func_677(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_678(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_110(iParam0) == 1)
	{
		cVar0 = func_1156(func_945(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_110(iParam0) == 8)
	{
		cVar0 = func_766(func_152(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	func_133(1, 1);
	func_570(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_155(0);
	func_156(0);
	func_158(1f);
}

void func_679(var uParam0, vector3 vParam1)
{
	if (!func_257(vParam1))
	{
		uParam0->f_206.f_5 = { vParam1 };
	}
	else
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
}

void func_680(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_1157(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_681(var uParam0, vector3 vParam1, char* sParam4)
{
	func_516(iLocal_760);
	iLocal_760 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 4f, 4f, 3f, sParam4);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_760))
	{
		func_1158(uParam0, &iLocal_760, 0, 0, 0, 0);
	}
}

void func_682(var uParam0)
{
	func_867(&Local_374, 1, 1, 1, 0);
	func_868(&iLocal_300);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
}

void func_683(var uParam0, int iParam1)
{
	func_1159(&(uParam0->f_206), iParam1);
}

void func_684(var uParam0)
{
	if (func_1160(uParam0, "RABI1_RSC_1"))
	{
		func_1161(10, 1);
		if (!iLocal_170)
		{
			func_467(266, 1, 0, 0, 1);
			func_467(8, 1, 0, 0, 1);
			iLocal_170 = 1;
		}
		func_303();
		func_347(1);
		func_894(0);
		func_389();
		func_1162();
		func_1163();
		func_298();
		func_653();
		PAD::DISABLE_CONTROL_ACTION(0, 782960533, false);
		if (func_299(vLocal_594, fLocal_597, 1) && func_301(Local_926[1 /*6*/]))
		{
			if (bLocal_143)
			{
				if (!iLocal_169)
				{
					func_314(1, 1);
					iLocal_169 = 1;
				}
			}
		}
		if (func_1164(uParam0, iLocal_300, 0, 0, 1, 1))
		{
			if (!iLocal_156)
			{
				func_797();
				iLocal_156 = 1;
			}
		}
		if (bLocal_143)
		{
			if (func_1164(uParam0, Global_35, 0, 0, 1, 1))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
		}
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (!iLocal_156)
				{
					func_797();
					iLocal_156 = 1;
				}
				if (bLocal_143)
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				}
			}
		}
		if (func_303())
		{
		}
	}
	if (func_1160(uParam0, "RABI1_RSC2"))
	{
		func_335(Global_35, 1);
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 2011525043, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1618006066, false);
		if (!func_210(20))
		{
			if (!func_79(&uLocal_531))
			{
				func_214(&uLocal_531);
			}
			else if (func_215(&uLocal_531) > 1f)
			{
				func_336();
				func_326(20);
			}
		}
		else if (!func_694(7))
		{
			if (func_438(&uLocal_531) > 35f)
			{
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
				}
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
				}
				func_695(7);
				func_243(&uLocal_531);
			}
		}
		func_429();
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				TASK::CLEAR_PED_TASKS(iLocal_306, 1, 0);
				if (func_575(iLocal_306, vLocal_587, 0) > 3f)
				{
					ENTITY::_0x203BEFFDBE12E96A(iLocal_306, vLocal_587, fLocal_590, 1, false, 1);
					TASK::TASK_STAND_STILL(iLocal_306, -1);
				}
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
				}
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
				}
			}
		}
	}
	if (func_1160(uParam0, "RABI1_RSC4"))
	{
		if (!iLocal_171)
		{
			func_467(58, 1, 0, 0, 1);
			iLocal_171 = 1;
		}
		func_350(iLocal_291, 1, 1);
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		if (PED::IS_PED_ON_MOUNT(iLocal_301))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iLocal_301, true, false);
		}
		if (func_1164(uParam0, Global_35, 0, 0, 1, 1))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
			if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
			{
			}
		}
		if (func_1164(uParam0, iLocal_300, 0, 0, 1, 1))
		{
			if (func_517(13))
			{
				func_320(13, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
			}
		}
		if (func_785(uParam0, 1))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		func_349(((*Global_1347702)[0 /*49*/])->f_15);
	}
}

void func_685(var uParam0, int iParam1)
{
	func_1165(&(uParam0->f_206), iParam1);
}

int func_686(var uParam0, int iParam1)
{
	if (&iLocal_179[iParam1])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_310[iParam1])))
	{
		uLocal_310[iParam1] = func_651(uParam0, &(iLocal_282[iParam1]), *(vLocal_613[iParam1 /*3*/]), &(fLocal_620[iParam1]), 1, 1, 0, 1, 1, 1, 1, 0);
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_310[iParam1])))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(&(uLocal_310[iParam1])))
		{
			ENTITY::SET_ENTITY_VISIBLE(&(uLocal_310[iParam1]), false);
		}
		PED::_0xCAC43D060099EA72(&(uLocal_310[iParam1]));
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, &(uLocal_310[iParam1]), false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(&(uLocal_310[iParam1]), Global_35, false);
		ENTITY::SET_ENTITY_PROOFS(&(uLocal_310[iParam1]), 8, false);
		if (!func_352(&(uLocal_310[iParam1]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(uLocal_310[iParam1]), -1);
		}
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(&(uLocal_310[iParam1]), 48, true);
		AUDIO::STOP_PED_SPEAKING(&(uLocal_310[iParam1]), true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_282[iParam1]));
		iLocal_179[iParam1] = 1;
		return 1;
	}
	return 0;
}

int func_687(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (iLocal_1036)
	{
		return 1;
	}
	sVar0 = "1-DayVersion";
	sVar1 = "2-NightVersion-PlayerWearingHat";
	sVar2 = "3-NightVersion-PlayerNotWearingHat";
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_206.f_348))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_206.f_348, 1, 0))
	{
		return 0;
	}
	if ((!ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, sVar0) || !ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, sVar2)) || !ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, sVar1))
	{
		return 0;
	}
	if ((!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar0) || !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar2)) || !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar1))
	{
		return 0;
	}
	iLocal_1036 = 1;
	return 1;
}

char* func_688(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_689()
{
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false)) < 4f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 782960533, false);
		if (iLocal_793 != 1)
		{
			iLocal_793 = 1;
		}
	}
}

void func_690()
{
	int iVar0;
	
	if (func_218(iLocal_301, iLocal_300, 0, 1) < 5f && !func_694(6))
	{
		if (!TASK::_0x841475AC96E794D1(iLocal_1037))
		{
			iLocal_1037 = TASK::_0xF533D68FF970D190(vLocal_1038, 240644744, 1.5f, 0, 0);
		}
		if (TASK::_0x841475AC96E794D1(iLocal_1037))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1038, 1.5f, -1, 0.25f, 8193, 40000f);
			TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1037, 0, 0, 1, 0, 0, 0, -1082130432, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_695(6);
		}
	}
}

void func_691(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_1166(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = func_356(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	func_1167(iParam1, fParam3);
	func_1168(iParam0, iParam1, uParam2, fVar0);
	func_1169(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_1170(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			iVar2 = 1;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				iVar2 = func_1171(iParam1, iParam0);
			}
			if (iVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_1172(iParam1);
			}
		}
	}
}

void func_692(int iParam0, int iParam1, int iParam2, int iParam3)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (iParam0 == 1 && !CAM::_0xA24C1D341C6E0D53(0, 0, 1))
	{
		PAD::ENABLE_CONTROL_ACTION(0, -1450761377, true);
		PAD::ENABLE_CONTROL_ACTION(0, -771458680, true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	if (iParam2 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
	}
	if (iParam1 == 1)
	{
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
	if (iParam3 == 0)
	{
		func_1173();
	}
}

int func_693(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_571(*iParam1, 128))
	{
		if (!func_1174(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_571(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_1175(iVar2))
			{
				return 0;
			}
			if (!func_1174(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_1176(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_571(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_1065(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			func_1177(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_571(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_571(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_1175(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_1065(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_1065(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_1065(iParam2, 8192))
				{
					HUD::_0x8BC7C1F929D07BF3(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_571(*iParam1, 2336))
		{
			if (!func_1175(iVar2))
			{
			}
			if (func_1178(iVar2, *iParam1))
			{
				func_1179(iParam1, 32);
				func_1179(iParam1, 256);
				func_1179(iParam1, 2048);
				func_1177(iParam1, 512);
				func_1177(iParam1, 1024);
				func_1177(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_571(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_1175(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_1179(iParam1, 64);
			}
		}
		if (func_1065(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_1065(iParam2, 1024))) || func_1065(iParam2, 8)) && !func_571(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_1177(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_1065(iParam2, 4096)) && !func_571(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_1177(iParam1, 2048);
			func_1177(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_1065(iParam2, 32)) && !func_571(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_1177(iParam1, 256);
			func_1177(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_1177(iParam1, 64);
		}
		else if (!func_1065(iParam2, 1))
		{
			if (!func_1065(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_1176(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_571(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_1177(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_1177(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_1065(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_1177(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_1065(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_1177(iParam1, 8);
	}
	return 0;
}

int func_694(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_196, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_695(int iParam0)
{
	if (!func_694(iParam0))
	{
		MISC::SET_BIT(&iLocal_196, iParam0);
	}
}

int func_696(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!func_521(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_599(iParam0, 2, 1))
			{
				func_726(iParam0, 2, 1);
			}
			if (func_598(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_602(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_320(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_209(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_209(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_1180(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_602(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_1181(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_602(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_1181(iParam0, 1);
			}
			else
			{
				return 0;
			}
		
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_599(iParam0, 44, 0))
			{
				func_602(iParam0, 44, 0);
			}
			if (func_1182(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_1181(iParam0, 2);
			}
			break;
		
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_726(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_729(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_697(iParam0, 0, 0, 1);
			}
			func_726(iParam0, 33, 1);
			func_726(iParam0, 34, 1);
			func_726(iParam0, 29, 1);
			if (!func_257(vVar0) && iParam7)
			{
				func_1181(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1181(iParam0, 4);
			}
			else
			{
				func_1181(iParam0, 5);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_1180(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_1183(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_1181(iParam0, 4);
			}
			else
			{
				func_1181(iParam0, 5);
			}
			break;
		
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_1184(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_1185(iParam0, iParam13, 0);
						func_1186(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_599(iParam0, 25, 0))
						{
							func_726(iParam0, 25, 0);
						}
						func_602(iParam0, 66, 0);
						func_1181(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1181(iParam0, 5);
				}
				func_602(iParam0, 28, 1);
			}
			else
			{
				func_1181(iParam0, 5);
			}
			break;
		
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_1181(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_209(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_1187(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_335(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_1181(iParam0, 7);
		
		case 7:
			func_729(iParam0, bParam9, bParam15, 0);
			func_724(iParam0, 4, bParam11);
			func_725(iParam0);
			if (bParam20)
			{
				if (func_1188(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_1189(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_1181(iParam0, 0);
			func_1190(iParam0, 16, 1);
			func_726(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_697(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_521(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1191(iParam0, bParam3);
	}
	else
	{
		func_1192(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_1193(iParam0, bParam3);
	}
	else
	{
		func_1194(iParam0, bParam3);
	}
}

bool func_698(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

void func_699(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_700(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return iVar0;
	}
	func_699(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return iVar0;
}

void func_701(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_702(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	var uVar0;
	int iVar1;
	
	if (!func_802(iParam0))
	{
		return 0;
	}
	iVar1 = func_1195(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, bParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_703(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_839(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_704()
{
	Local_248 = { 0f, 0f, 0f };
	Local_248.f_4 = 21030;
	Local_248.f_3 = iLocal_300;
	Local_248.f_8 = 4;
	Local_248.f_19 = 4;
	Local_248.f_21 = 4;
	Local_248.f_17 = 4;
	Local_248.f_18 = 4;
	Local_248.f_7 = 0;
}

int func_705()
{
	int iVar0;
	
	iVar0 = func_707();
	if (func_708(iVar0) >= 6 && func_708(iVar0) < 18)
	{
		return 0;
	}
	return 1;
}

bool func_706(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_0xFB4891BD7578CDC1(iParam0, iParam1);
}

var func_707()
{
	return &Global_1899515;
}

int func_708(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_709(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_710(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_711(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_712(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_713(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_714(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1196(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_715(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_716(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

bool func_717(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_718(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_717(iParam0))
	{
		return;
	}
	iVar0 = func_1197(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_719(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_717(iParam0))
	{
		return;
	}
	iVar0 = func_1197(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_720(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_717(iParam0))
	{
		return;
	}
	iVar0 = func_1197(iParam0);
	if (bParam1)
	{
		func_1198(iParam0, 4);
		func_1199(iVar0, 1);
		func_1200(iVar0, 1);
	}
	else
	{
		func_1201(iParam0, 4);
		func_1200(iVar0, 0);
	}
}

void func_721(int* iParam0, char* sParam1)
{
	if (func_717(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_719(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_1202(iParam0, 1);
}

void func_722(int iParam0)
{
	func_724(iParam0, 8, 1);
}

void func_723(var uParam0, var uParam1)
{
	uParam0->f_169 = uParam1;
}

void func_724(int iParam0, int iParam1, bool bParam2)
{
	if (!func_802(iParam0))
	{
		return;
	}
	func_1203(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_725(int iParam0)
{
	func_602(iParam0, 36, 1);
}

void func_726(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_802(iParam0))
		{
			return;
		}
	}
	func_1090(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_727(int iParam0, bool bParam1)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_1204(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_728(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_521(iParam0))
	{
		iVar1 = func_1205(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_1206(iParam0);
		}
	}
	if (func_599(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_1205(iParam0), 137, true);
	}
}

void func_729(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_802(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_726(iParam0, 50, 1);
		func_726(iParam0, 48, 1);
		func_726(iParam0, 49, 1);
		func_726(iParam0, 51, 1);
		func_726(iParam0, 52, 1);
		func_726(iParam0, 54, 1);
		func_726(iParam0, 55, 1);
	}
	else
	{
		func_602(iParam0, 50, 1);
		func_602(iParam0, 48, 1);
		func_602(iParam0, 49, 1);
		func_602(iParam0, 51, 1);
		if (bParam3)
		{
			func_602(iParam0, 54, 1);
		}
		else
		{
			func_726(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_602(iParam0, 52, 1);
			if (bParam3)
			{
				func_602(iParam0, 55, 1);
			}
		}
		else
		{
			func_726(iParam0, 52, 1);
			if (!bParam3)
			{
				func_726(iParam0, 55, 1);
			}
		}
	}
}

void func_730(int iParam0, bool bParam1)
{
	if (!func_802(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_1205(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_1205(iParam0), 204, false);
	}
}

void func_731(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_521(iParam0))
	{
		return;
	}
	if (func_517(iParam0))
	{
		if (!func_522(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_599(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_727(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_1205(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_1207(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_602(iParam0, 2, 1);
	}
	else
	{
		func_1208(iParam0);
		func_602(iParam0, 1, 1);
	}
}

void func_732(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_521(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_733(int iParam0)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_734(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_802(iParam1))
	{
		return;
	}
	iVar0 = func_733(iParam1);
	if (func_1209(iParam1))
	{
		if (!func_1210(iParam1))
		{
			return;
		}
	}
	func_726(iParam1, 39, 1);
	func_1211(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_1211(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_1211(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_602(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1212(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_735(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (func_1213(uParam0, vParam2, fParam5, bParam6, bParam7, iParam8, iParam9, iParam10))
	{
		*iParam1 = uParam0->f_2572;
		return 1;
	}
	return 0;
}

void func_736(bool bParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
	{
		func_964(-1415022764, 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
}

void func_737(bool bParam0)
{
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
	{
		func_1214(-1415022764, 1, bParam0, -142743235, 0);
	}
}

void func_738(int iParam0)
{
	if (func_384(iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_195, iParam0);
	}
}

int func_739(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	
	iVar0 = MAP::_0x554D9D53F696D002(iParam0, vParam1);
	if (bParam4)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
	}
	return iVar0;
}

int func_740(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_741(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = MAP::_0xA6EF0C54A3443E70(iParam0, iParam1);
	if (bParam2)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
	}
	return iVar0;
}

int func_742()
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_306) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_306)) && PED::_0xA0BC8FAED8CFEB3C(iLocal_306))
	{
		return 1;
	}
	return 0;
}

int func_743(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_1215(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

void func_744(bool bParam0)
{
	if (bParam0)
	{
		if (!PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInLeftHand"))
		{
			PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInLeftHand", 1, -1);
		}
	}
	else if (!PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInRightHand"))
	{
		PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInRightHand", 1, -1);
	}
}

void func_745(int iParam0)
{
	if (!func_1216(iParam0))
	{
		func_1177(&(Global_1900073->f_1), iParam0);
	}
}

void func_746(int iParam0)
{
	if (func_1216(iParam0))
	{
		func_1179(&(Global_1900073->f_1), iParam0);
	}
}

int func_747(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*iParam0 = func_1217(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!func_209(*iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_748()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_774))
	{
		iLocal_774 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-130.873f, -31.644f, 95.866f, 0f, 0f, 84f, 5f, 6f, 3f, "DUTCH_TENT");
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_774))
	{
		if (iLocal_476 == 0)
		{
			iLocal_476 = func_700(iLocal_774, 0, 0, 0);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_749()
{
	if (&iLocal_172[3])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_307))
	{
		iLocal_307 = func_696(0, 1, 1, vLocal_583.x, vLocal_583.y, vLocal_583.z, fLocal_586, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return 0;
	}
	if (func_209(iLocal_307, 1))
	{
		iLocal_172[3] = 1;
	}
	return 1;
}

int func_750()
{
	if (iLocal_140)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293))
	{
		iLocal_293 = OBJECT::CREATE_OBJECT(iLocal_276, vLocal_594 - Vector(10f, 0f, 0f), true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_293))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_293, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_276);
		iLocal_140 = 1;
		return 1;
	}
	return 0;
}

int func_751(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 1, 0, false, true);
		return 0;
	}
	if (!uParam0->f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_293))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "AbigailRoberts", iLocal_300, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_486, iLocal_293, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return 0;
		}
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_752(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 2, 0, false, true);
		return 0;
	}
	if (!uParam0->f_1)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && !ENTITY::IS_ENTITY_DEAD(iLocal_293))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "AbigailRoberts", iLocal_300, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "Horse_01", iParam1, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JackMarston", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "arthur", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_486, iLocal_293, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return 0;
		}
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_753(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
}

int func_754(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (!func_206(iParam0))
	{
		return 1;
	}
	if (!func_594(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return 1;
		}
		func_476(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 1024))
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1024);
		}
	}
	if (iParam4 && !func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 8192))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 8192);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false))
	{
		if (func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 64))
		{
			return 1;
		}
		return 0;
	}
	if (!func_938(iParam0))
	{
		func_1218(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	else if (iParam3 && !func_1219(((*Global_1347702)[iParam0 /*49*/])->f_15))
	{
		func_1220(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (!func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 256))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 256);
	}
	return 0;
}

int func_755(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
						if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
							if (func_1067(iVar2) && !func_1221(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_756(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_583(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_757(int iParam0)
{
	int iVar0;
	
	if (!func_1067(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_758(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1067(iParam0))
	{
		return 1;
	}
	if (func_60(32768))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*74*/])->f_16, false))
	{
		return 1;
	}
	iVar0 = func_1223(func_1222(iParam0));
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 1;
	}
	if (!func_282(func_1222(iParam0)))
	{
		func_1224(iParam0, 0, 0, -1);
	}
	if (func_1225(iVar0))
	{
		if (!((*Global_1835011)[iParam0 /*74*/])->f_71)
		{
			if (bParam1)
			{
				func_1226(iVar0, 256);
			}
			if (bParam2)
			{
				func_1226(iVar0, 512);
			}
			((*Global_1835011)[iParam0 /*74*/])->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

void func_759(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_1157(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

int func_760(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		return 1;
	}
	fVar0 = BUILTIN::VDIST2(((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	func_692(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		if (func_1174(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
		if (!func_1174(Global_35, -982327190))
		{
			TASK::TASK_STAND_STILL(Global_35, 2200);
			func_80(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || func_438(&(uParam0->f_2588)) > 2f)
		{
			func_243(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 1;
		}
	}
	else
	{
		if (!func_79(&(uParam0->f_2588)))
		{
			func_80(&(uParam0->f_2588), 1);
		}
		else if (func_438(&(uParam0->f_2588)) > 5f)
		{
			func_243(&(uParam0->f_2588));
			if (func_1174(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			return 1;
		}
		if (!func_1174(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, -668482597, false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, 1f, 7500, 0.25f, false, 40000f);
		}
		if (func_209(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, -1, 0, 51, 0);
			}
		}
	}
	return 0;
}

Vector3 func_761(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	switch (&uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { (uParam0->f_912[iParam1 /*41*/])->f_4 - (uParam0->f_912[iParam1 /*41*/])->f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_861(vVar10) * Vector(2f, 2f, 2f) };
			*(vVar0[0 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + (uParam0->f_912[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			*(vVar0[1 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + (uParam0->f_912[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[1 /*3*/]), &((vVar0[1 /*3*/])->f_2), 0);
			if (!func_257(*(vVar0[0 /*3*/])))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[0 /*3*/]), (uParam0->f_912[iParam1 /*41*/])->f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[1 /*3*/]), (uParam0->f_912[iParam1 /*41*/])->f_7, true))
				{
					return *(vVar0[1 /*3*/]);
				}
				else
				{
					return *(vVar0[0 /*3*/]);
				}
			}
			break;
		
		case 1:
			fVar13 = 0f;
			if ((uParam0->f_912[iParam1 /*41*/])->f_13 < (uParam0->f_912[iParam1 /*41*/])->f_12)
			{
				fVar13 = (((uParam0->f_912[iParam1 /*41*/])->f_12 + ((uParam0->f_912[iParam1 /*41*/])->f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = (((uParam0->f_912[iParam1 /*41*/])->f_12 + (uParam0->f_912[iParam1 /*41*/])->f_13) / 2f);
			}
			*(vVar0[0 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS(fVar13) * ((uParam0->f_912[iParam1 /*41*/])->f_11 + 5f)), (BUILTIN::SIN(fVar13) * ((uParam0->f_912[iParam1 /*41*/])->f_11 + 5f))) };
			(vVar0[0 /*3*/])->f_2 = ((vVar0[0 /*3*/])->f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			if (!func_257(*(vVar0[0 /*3*/])))
			{
				return *(vVar0[0 /*3*/]);
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_762(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_763(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 - (uParam0->f_1560 && iParam1));
}

bool func_764(var uParam0, int iParam1)
{
	return (uParam0->f_1562.f_1 && iParam1) != 0;
}

bool func_765(var uParam0, int iParam1)
{
	return func_1227(uParam0->f_27, iParam1);
}

var func_766(int iParam0)
{
	var uVar0;
	
	if (!func_206(iParam0))
	{
		return uVar0;
	}
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return uVar0;
}

var func_767(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _NAMESPACE71::_0x2024F4F333095FB1(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_768()
{
	return Global_1900383->f_393;
}

void func_769()
{
	int iVar0;
	
	iVar0 = func_768();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1228(0);
}

void func_770(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_771(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_772(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_773(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1229(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1230(iParam0))
	{
		return 0;
	}
	if (func_1231(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1116(iParam0, 1)) || func_60(32768))
	{
		if (!func_1116(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1232())
	{
		return 0;
	}
	return 1;
}

void func_774(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_775(var uParam0)
{
	return *uParam0;
}

void func_776(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || func_625(uParam0, 512))
	{
		if (!func_1233(uParam0->f_405, 128))
		{
			func_1234();
		}
		return;
	}
	if ((func_788(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, func_1120(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, func_1120(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!func_1233(uParam0->f_405, 128))
		{
			func_1234();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_891(iVar1))
		{
			if (func_1235(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_1233(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (func_1236(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		func_1234();
	}
}

void func_777(var uParam0, char* sParam1, var uParam2)
{
	struct<8> Var0;
	char cVar8[32];
	
	func_1237(uParam2);
	if (!func_625(uParam0, 301989888))
	{
		func_1238(uParam0, &(uParam2->f_753));
	}
	if (func_775(uParam0) == 2 && (func_1239(uParam0->f_404, 16384) || func_625(uParam0, 268435456)))
	{
		Var0 = { func_622(uParam0) };
		func_256(uParam0, &Var0);
	}
	func_1240(uParam0, sParam1);
	if (func_625(uParam0, 131072))
	{
		func_1241(uParam0, 0);
	}
	if (func_1242())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_1243();
	}
	if (func_1022())
	{
		func_491(1);
	}
	func_634(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1244(uParam0, cVar8);
	func_783(1, 0);
	func_632(uParam0);
	if (func_779(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_340);
	}
	func_1245(uParam0);
	func_1125(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_348);
	Global_43799 = uParam0->f_348;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_778(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_214(&(uParam0->f_1));
}

bool func_779(var uParam0, int iParam1)
{
	return (uParam0->f_343 && iParam1) != 0;
}

void func_780(var uParam0)
{
	if (func_32(uParam0, 4))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_641);
	}
}

int func_781(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_839(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_782(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_783(bool bParam0, int iParam1)
{
	if (func_851())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1037())
		{
			func_338(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_784(var uParam0)
{
	vector3 vVar0;
	
	if (!func_625(uParam0, 4))
	{
		if (func_1239(uParam0->f_404, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_1246(uParam0) };
		if (!func_1239(uParam0->f_404, 524288))
		{
			func_1247(&(uParam0->f_416));
		}
		func_1248(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1249(uParam0, 0f, 0f, 0f);
		func_1250(uParam0);
		func_1251(uParam0);
		func_1252(uParam0, 0f, 0f, 0f, 0, 0);
		func_1253(uParam0);
		func_310(uParam0, 4);
		func_1254(uParam0, 0);
		func_1255(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_417)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_417));
		}
	}
}

int func_785(var uParam0, int iParam1)
{
	if (func_625(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_348))
	{
		func_310(uParam0, 262144);
		func_1254(uParam0, 1);
		return 1;
	}
	return 0;
}

int func_786(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_348) * 1000f));
}

int func_787(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) * 1000f));
}

int func_788(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_1256(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_789(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_348, 0))
	{
		if (func_625(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_348) && func_625(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_790(var uParam0)
{
	if (((func_625(uParam0, 1073741824) && !func_625(uParam0, 524288)) && func_625(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_791(var uParam0)
{
	if (!func_625(uParam0, 536870912))
	{
		func_1254(uParam0, 1);
		func_792(&(uParam0->f_405), uParam0->f_416);
		func_631();
		func_310(uParam0, 536870912);
	}
	if (func_625(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1257(uParam0);
	func_778(uParam0, 1);
	func_367(uParam0);
	func_1258(uParam0);
	func_1259(uParam0);
	func_1260(uParam0, 4);
	func_435(uParam0);
	func_1241(uParam0, 1);
	func_632(uParam0);
	func_243(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	func_1261(!func_1233(uParam0->f_405, 128));
	if (!func_1233(uParam0->f_405, 128))
	{
		func_1234();
	}
}

void func_792(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1262(2000);
	Global_16 = 0;
	func_1263();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_1233(*uParam0, 8));
	if (!func_1233(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_1233(*uParam0, 2) || func_1233(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1233(*uParam0, 16))
	{
		func_1264(1);
	}
	if (func_1233(*uParam0, 32))
	{
		func_1265(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1266(-1623728698, 0);
	}
	func_1255(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_793()
{
	Global_1935630->f_52 = 1;
}

int func_794(var uParam0)
{
	if (func_32(uParam0, 8))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_642);
		if (StackVal)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		Stack.Push(!func_779(&(uParam0->f_206), 4));
		Stack.Push(&(uParam0->f_206));
		Call_Loc(uParam0->f_206.f_342);
		if (StackVal || StackVal)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_795(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

void func_796(var uParam0)
{
	func_1267(uParam0);
	func_1268(uParam0, 0);
	uParam0->f_1 = 0;
	func_1269();
}

void func_797()
{
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(-154.2044f, -25.8951f, 94.8997f);
	TASK::TASK_EXTEND_ROUTE(-153.3487f, -19.4153f, 95.1742f);
	TASK::TASK_EXTEND_ROUTE(vLocal_575);
	TASK::TASK_FOLLOW_POINT_ROUTE(iLocal_300, 1f, 0, 1056964608, 1084227584, 1193033728);
}

bool func_798(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_1205(iParam0);
	if (bParam1)
	{
		if (!func_209(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_1270(), 1);
}

int func_799(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;
	
	if (!func_521(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (func_798(iParam0, 0))
	{
		func_1271(iParam0, 1);
		return 1;
	}
	if (!func_1272())
	{
		return 0;
	}
	if (bParam1)
	{
		func_1180(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_1271(iParam0, 1);
	Global_1359489->f_15 = func_1273(1);
	func_602(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_1205(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_1205(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_1270(), 0);
	func_1274(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_117();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

void func_800(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_521(iParam0))
	{
		iVar0 = func_1205(iParam0);
		if (func_209(iVar0, 0))
		{
			if (PED::IS_PED_IN_GROUP(iVar0))
			{
				func_1275(&iVar1, iParam1);
				COMPANION::_0x1740E3DEE0AE4D27(iVar0, iVar1);
			}
		}
	}
}

void func_801(int iParam0)
{
	int iVar0;
	struct<15> Var1;
	
	if (!func_521(iParam0))
	{
		return;
	}
	if (!func_798(iParam0, 0))
	{
	}
	func_1276(iParam0);
	Global_1359489->f_15 = func_1273(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_1277();
	func_726(iParam0, 32, 1);
	if (func_209(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_117();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

bool func_802(int iParam0)
{
	return iParam0 > -1;
}

int func_803(int iParam0)
{
	if (!func_802(iParam0))
	{
		return 0;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_2))
	{
		return 1;
	}
	return 0;
}

int func_804(int iParam0)
{
	int iVar0;
	
	if (!func_802(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_2))
	{
		iVar0 = ((*Global_1360165)[iParam0 /*1157*/])->f_2;
	}
	return iVar0;
}

int func_805(var uParam0)
{
	return uParam0->f_1;
}

void func_806(var uParam0)
{
	bool bVar0;
	
	if (!func_183(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(-1181125641);
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-1181125641))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_1278(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1278(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_819(uParam0, 134217728);
		}
	}
}

void func_807(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_183(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231->f_4)
	{
		return;
	}
	if (!func_183(uParam0, 4096) && uParam0->f_1792)
	{
		return;
	}
	if (!func_183(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_817(uParam0);
	func_1279(uParam0, uParam0->f_1793, uParam0->f_1795);
	func_1280(uParam0);
	if (uParam0->f_1796 && !uParam0->f_1795)
	{
		if (((((uParam0->f_1791 >= 0 && (uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 > 0f) && uParam0->f_1584 >= 0) && !func_781(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, ((uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 + 5f), 1, 1)) && !func_183(uParam0, 33554432)) && !func_183(uParam0, 4))
		{
			func_1281(uParam0, uParam0->f_1793);
			return;
		}
	}
	if (!func_183(uParam0, 4))
	{
		if (func_1282(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1580 = uParam0->f_1584;
				func_819(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1281(uParam0, uParam0->f_1793);
		}
		if ((uParam0->f_912[uParam0->f_1586 /*41*/])->f_29)
		{
			fVar0 = func_1283(uParam0, uParam0->f_1586);
			if (fVar0 < 0f || (uParam0->f_1793 && fVar0 < 1f))
			{
				uParam0->f_1584 = uParam0->f_1586;
				if (!bParam2)
				{
					uParam0->f_1580 = uParam0->f_1586;
					func_819(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1585 == -1f || fVar0 <= uParam0->f_1585) || uParam0->f_1586 == uParam0->f_1584)
				{
					if (uParam0->f_1586 != uParam0->f_1584)
					{
					}
					uParam0->f_1584 = uParam0->f_1586;
					uParam0->f_1585 = fVar0;
					func_819(uParam0, 16);
					if (((!func_183(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, true) < ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_11 + 5f))
					{
						func_1284(uParam0);
						func_819(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1584 == uParam0->f_1586)
			{
				func_763(uParam0, 16);
			}
		}
		if (uParam0->f_1586 + 1 >= 8)
		{
			uParam0->f_1586 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1586 + 1;
			while (iVar2 <= 7)
			{
				if ((uParam0->f_912[iVar2 /*41*/])->f_29)
				{
					uParam0->f_1586 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1586 = 0;
			}
		}
		if (uParam0->f_1584 < 0)
		{
			return;
		}
		if (func_765(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && uParam0->f_1793)
		{
			return;
		}
	}
	if (func_183(uParam0, 16))
	{
		fVar4 = func_575(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1);
		if (uParam0->f_1793 && fVar4 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		}
		fVar5 = func_1285(Global_36, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 || VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 + (uParam0->f_912[uParam0->f_1584 /*41*/])->f_10))
			{
				func_816(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, fVar6);
			}
			if ((uParam0->f_1795 && VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1797) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
			}
		}
		else if ((uParam0->f_1793 && fVar4 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1794))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1794, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		}
	}
	if (((uParam0->f_1793 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1794) > 1.25f) || func_183(uParam0, 4))
	{
		if (((VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775) && func_1283(uParam0, uParam0->f_1584) < 10000f) && func_183(uParam0, 16)) || func_183(uParam0, 4))
		{
			if (!func_183(uParam0, 4))
			{
				func_819(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_814(uParam0, uParam0->f_1584))
			{
				iVar7 |= 2048;
			}
			if (func_693(Global_35, &(uParam0->f_1582), iVar7, 0, 0, 1084227584, 100, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				uParam0->f_1582 = 0;
				func_763(uParam0, 4);
			}
		}
	}
	else if (func_183(uParam0, 4))
	{
		func_763(uParam0, 4);
	}
}

int func_808(var uParam0)
{
	return *uParam0;
}

void func_809(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_183(uParam0, 512))
	{
		return;
	}
	if (func_438(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (func_1236(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_819(uParam0, 524288);
	}
}

void func_810(var uParam0, int iParam1)
{
	uParam0->f_1579 = iParam1;
}

void func_811(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_812(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_764(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_0x8BC7C1F929D07BF3(-1679307491);
			HUD::_0x8BC7C1F929D07BF3(474191950);
			break;
		
		default:
			if (func_1286())
			{
				if (!func_183(uParam0, 524288))
				{
					HUD::_0x4CC5F2FC1332577F(-1679307491);
				}
				HUD::_0x8BC7C1F929D07BF3(474191950);
			}
			break;
	}
	if (func_1286())
	{
		func_763(uParam0, 512);
		func_1287(uParam0, 128);
		PED::_0xCB9401F918CB0F75(Global_35, "PlayLeadin", 0, -1);
		if (func_1288(uParam0->f_912[uParam0->f_1580 /*41*/], 4))
		{
			PED::_0xCB9401F918CB0F75(Global_35, func_1289((uParam0->f_912[uParam0->f_1580 /*41*/])->f_39), 0, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_1269();
	func_1290(uParam0, 1, 0);
	func_26(uParam0);
	if (func_183(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	func_1287(uParam0, 4);
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_1771);
	}
	if (func_764(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_1291()))
	{
		CAM::_0x798BE43C9393632B(func_1291());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1241[iVar0 /*22*/])->f_2), func_1291())) && CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
		{
			if ((uParam0->f_1241[iVar0 /*22*/])->f_21)
			{
				CAM::_0x798BE43C9393632B(&((uParam0->f_1241[iVar0 /*22*/])->f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_183(uParam0, 524288) || iParam1 == 1)
	{
		func_1234();
	}
	if (func_764(uParam0, 16))
	{
		if (func_808(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
		}
	}
	func_1292();
	if (func_764(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797))
	{
		if (!func_183(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
		}
	}
	func_824(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1817);
	}
	return 1;
}

void func_813()
{
	Global_1905944->f_5695 = 1;
}

int func_814(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_371[iVar0 /*18*/])->f_17 == 1 && (uParam0->f_371[iVar0 /*18*/])->f_2 == 4) && &uParam0->f_371[iVar0 /*18*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_815(var uParam0)
{
	return uParam0->f_2;
}

void func_816(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_1227(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_1227(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1793)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1794, 214, true);
	}
	if (uParam0->f_1792 && func_183(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_1227(uParam1, 262144) && Global_1935630->f_44 == 2055893578)
	{
		iVar0 |= 16;
	}
	func_1293(&iVar1, uParam2);
	func_1294(&(uParam0->f_1800), iVar0, iVar1, fParam3);
	if (!Global_1935630->f_12)
	{
		if (!func_183(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_1295();
	func_1296(uParam0, 1);
}

void func_817(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	
	iVar0 = uParam0->f_1584;
	if (iVar0 >= 0 && !func_823(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, true) <= (uParam0->f_912[iVar0 /*41*/])->f_16;
		Var2 = { uParam0->f_1588 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
			{
				StringCopy(&(uParam0->f_1588), func_688((uParam0->f_1241[iVar0 /*22*/])->f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588), func_1291(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_10)))
			{
				StringCopy(&(uParam0->f_1588.f_8), func_688((uParam0->f_1241[iVar0 /*22*/])->f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588.f_8), func_1297(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1588)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1588.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !&uParam0->f_1241[iVar0 /*22*/])
		{
			if (!func_1298((uParam0->f_1241[iVar0 /*22*/])->f_1, 8))
			{
				if (!func_1298((uParam0->f_1241[iVar0 /*22*/])->f_1, 8))
				{
					func_1293(&iVar19, (uParam0->f_1241[iVar0 /*22*/])->f_1);
					func_1299(&(uParam0->f_1800), iVar19);
				}
			}
			else
			{
				vVar20 = { (uParam0->f_912[iVar0 /*41*/])->f_1 };
				iVar24 = -1;
				if ((uParam0->f_1241[iVar0 /*22*/])->f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 27)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar25 /*13*/])->f_2))
						{
							if ((uParam0->f_1241[iVar0 /*22*/])->f_20 == (uParam0->f_3[iVar25 /*13*/])->f_3)
							{
								iVar23 = (uParam0->f_3[iVar25 /*13*/])->f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_1298((uParam0->f_1241[iVar0 /*22*/])->f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = (uParam0->f_3[(uParam0->f_1241[iVar0 /*22*/])->f_20 /*13*/])->f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798) || iVar26 != uParam0->f_1798))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
											func_1287(uParam0, 16);
										}
										return;
									}
								}
								if ((uParam0->f_1241[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1241[iVar0 /*22*/])->f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1300(Global_35, iVar23, 1), (uParam0->f_1241[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1241[iVar0 /*22*/])->f_19) };
								}
							}
							else if ((uParam0->f_1241[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1241[iVar0 /*22*/])->f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1285(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, 1), (uParam0->f_1241[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1241[iVar0 /*22*/])->f_19) };
							}
							fVar27 = (uParam0->f_912[iVar0 /*41*/])->f_16;
							fVar28 = (uParam0->f_912[iVar0 /*41*/])->f_14;
							bVar29 = func_1298((uParam0->f_1241[iVar0 /*22*/])->f_1, 2);
							bVar30 = (func_1298((uParam0->f_1241[iVar0 /*22*/])->f_1, 1) && !bVar29);
							bVar31 = func_1298((uParam0->f_1241[iVar0 /*22*/])->f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1588));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_1301(0, 0);
								}
								bVar32 = true;
								func_1287(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1604.f_16 != iVar23);
								bVar32 = (bVar32 || !func_740(uParam0->f_1604.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1604.f_22 != bVar30);
								uParam0->f_1604.f_16 = iVar23;
								uParam0->f_1604.f_17 = { vVar20 };
								uParam0->f_1604.f_20 = fVar27;
								uParam0->f_1604.f_21 = fVar28;
								uParam0->f_1604.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1604 = { uParam0->f_1588 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1604));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1627.f_16 != iVar23);
								bVar32 = (bVar32 || !func_740(uParam0->f_1627.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1627.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1627.f_21 != bVar30);
								uParam0->f_1627.f_16 = iVar23;
								uParam0->f_1627.f_17 = { vVar20 };
								uParam0->f_1627.f_20 = !bVar31;
								uParam0->f_1627.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1627 = { uParam0->f_1588 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1627));
								}
							}
							Jump @1468; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
							}
							StringCopy(&(uParam0->f_1588), "", 64);
							StringCopy(&(uParam0->f_1588.f_8), "", 64);
							func_1302(uParam0, 2);
						}
					}
				}
			}
		}
	}

int func_818(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1303(uParam0, &iVar0))
	{
		func_1304(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_819(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 || iParam1);
}

void func_820(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;
	
	if (func_808(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1584;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < (uParam0->f_912[iVar0 /*41*/])->f_1.f_2)
		{
			return;
		}
		fVar1 = (uParam0->f_912[iVar0 /*41*/])->f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = (uParam0->f_912[iVar0 /*41*/])->f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - (uParam0->f_912[iVar0 /*41*/])->f_1.f_2));
		bVar4 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771);
		if (bVar4)
		{
			vVar6 = { VOLUME::_0xF70F00013A62F866(uParam0->f_1771) };
			fVar5 = MISC::ABSF((vVar6.z - (uParam0->f_912[iVar0 /*41*/])->f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= (uParam0->f_912[iVar0 /*41*/])->f_10 || (bVar4 && fVar5 <= (uParam0->f_912[iVar0 /*41*/])->f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_912[iVar0 /*41*/])->f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798))
			{
				func_819(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1798 == iVar9)
			{
				func_819(uParam0, 65536);
				return;
			}
		}
		func_763(uParam0, 65536);
	}
}

void func_821(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_805(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if ((uParam0->f_371[iVar0 /*18*/])->f_7)
			{
				func_1305(uParam0, iVar0, iParam1);
			}
			else if ((uParam0->f_371[iVar0 /*18*/])->f_6)
			{
				bVar1 = func_1306(uParam0, iVar0);
				if (bVar1)
				{
					func_1307(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_814(uParam0, uParam0->f_1580))
		{
			func_1308(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_7)
		{
			func_1305(uParam0, iVar0, iParam1);
		}
		else if ((uParam0->f_371[iVar0 /*18*/])->f_6)
		{
			bVar1 = func_1306(uParam0, iVar0);
			if (bVar1)
			{
				func_1307(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_822(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1817);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1817);
			if (MISC::_0xBDC6E364C9C78178(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_823(var uParam0, int iParam1)
{
	return (uParam0->f_1561 && iParam1) != 0;
}

void func_824(var uParam0)
{
	func_1309(&(uParam0->f_1800));
}

void func_825(var uParam0)
{
	uParam0->f_1561 = 0;
}

void func_826(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	func_1310(uParam0, 4);
	if (func_1311(uParam0, &sParam1, iParam5))
	{
		func_811(uParam0, 1);
	}
}

void func_827(var uParam0)
{
	if (!func_1312(uParam0))
	{
		return;
	}
	if (!func_183(uParam0, 4194304))
	{
		func_1313(uParam0);
		func_819(uParam0, 4194304);
	}
	if (func_1314(uParam0))
	{
		func_1315(uParam0);
		func_1316(uParam0);
		func_811(uParam0, 2);
	}
}

void func_828(var uParam0)
{
	uParam0->f_1581 = -1;
	func_810(uParam0, 0);
	func_811(uParam0, 3);
	func_1317(uParam0, 0);
	func_243(&(uParam0->f_1765));
	func_1318(uParam0);
	func_243(&(uParam0->f_1768));
}

void func_829(int iParam0)
{
	int iVar0;
	
	if (func_205() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_209(func_1205(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1205(iVar0), func_1270(), 1))
			{
				func_1319(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_830()
{
	Global_18 = 1;
	Global_43883 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_831(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (func_575(Global_35, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_1, 0) < (uParam0->f_912[uParam0->f_1580 /*41*/])->f_14)
		{
			return 1;
		}
		else if ((uParam0->f_912[uParam0->f_1580 /*41*/])->f_14 >= (uParam0->f_912[uParam0->f_1580 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

int func_832(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (func_575(Global_35, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_1, 0) < (uParam0->f_912[uParam0->f_1580 /*41*/])->f_15)
		{
			return 1;
		}
		else if ((uParam0->f_912[uParam0->f_1580 /*41*/])->f_15 >= (uParam0->f_912[uParam0->f_1580 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

int func_833(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (uParam0->f_1581 < 0)
	{
		return 1;
	}
	switch ((uParam0->f_371[uParam0->f_1581 /*18*/])->f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, 1) == 8)
			{
				return 1;
			}
			else if (func_215(&(uParam0->f_1768)) >= 15f)
			{
				func_819(uParam0, 32768);
				return 1;
			}
			break;
		
		case 9:
			if (!uParam0->f_1664)
			{
				if (func_215(&(uParam0->f_1768)) >= 15f)
				{
					func_819(uParam0, 32768);
					return 1;
				}
				if (ANIMSCENE::_0x25557E324489393C(func_1320(uParam0)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(func_1320(uParam0), 0))
				{
					uParam0->f_1664 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(func_1320(uParam0));
				bVar1 = ANIMSCENE::_0xD8254CB2C586412B(func_1320(uParam0), 0);
				bVar2 = ANIMSCENE::_0xCDC5512A407CF08D(func_1320(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		
		case 11:
			return 1;
		
		default:
			return func_215(&(uParam0->f_1768)) >= 15f;
	}
	return 0;
}

int func_834(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_17 == 2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_835(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_17 == 2 && func_1321(uParam0->f_371[iVar0 /*18*/], 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_836(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_205() != -1)
	{
		return &Global_38104[iParam0 /*9*/] > 0;
	}
	return &Global_27572[iParam0 /*9*/] > 0;
}

int func_837(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_205() != -1)
	{
		return &(Global_38104[iParam0 /*9*/]);
	}
	else
	{
		return &(Global_27572[iParam0 /*9*/]);
	}
	return 0;
}

Vector3 func_838(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1f, -1f, -1f;
	}
	if (func_205() != -1)
	{
		return func_1322((Global_38104[iParam0 /*9*/])->f_1);
	}
	return func_1322((Global_27572[iParam0 /*9*/])->f_1);
}

float func_839(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_840(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_205() != -1)
	{
		return (Global_38104[iParam0 /*9*/])->f_4[iParam1] & 1073741824 != 0;
	}
	return (Global_27572[iParam0 /*9*/])->f_4[iParam1] & 1073741824 != 0;
}

void func_841(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_205() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_4[iParam1] = (&(Global_38104[iParam0 /*9*/])->f_4[iParam1] - (Global_38104[iParam0 /*9*/])->f_4[iParam1] & 4096);
		return;
	}
	(Global_27572[iParam0 /*9*/])->f_4[iParam1] = (&(Global_27572[iParam0 /*9*/])->f_4[iParam1] - (Global_27572[iParam0 /*9*/])->f_4[iParam1] & 4096);
}

void func_842(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_205() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_3 = ((Global_38104[iParam0 /*9*/])->f_3 || iParam1);
		return;
	}
	(Global_27572[iParam0 /*9*/])->f_3 = ((Global_27572[iParam0 /*9*/])->f_3 || iParam1);
}

void func_843()
{
	Local_198 = { 0f, 0f, 0f };
	Local_198.f_3 = Global_35;
	Local_198.f_4 = 21030;
	Local_198.f_8 = 4;
	Local_198.f_19 = 4;
	Local_198.f_21 = 4;
	Local_198.f_17 = 4;
	Local_198.f_18 = 4;
	Local_198.f_7 = 0;
}

int func_844(int iParam0)
{
	if (iParam0 == 0)
	{
		return (func_431() && func_907());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return func_1323(iParam0, 1);
	}
	return 0;
}

bool func_845(int iParam0)
{
	return &Global_1900073->f_26[iParam0 /*30*/] == 12;
}

void func_846()
{
	Local_223 = { 0f, 0f, 0f };
	Local_223.f_3 = iLocal_301;
	Local_223.f_4 = 21030;
	Local_223.f_8 = 4;
	Local_223.f_19 = 4;
	Local_223.f_21 = 4;
	Local_223.f_17 = 4;
	Local_223.f_18 = 4;
	Local_223.f_7 = 0;
}

void func_847(int iParam0)
{
	if (func_694(iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_196, iParam0);
	}
}

void func_848(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_1324(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_1325());
		}
		return;
	}
	iVar0 = func_1326();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_1325());
}

void func_849(int iParam0)
{
	int iVar0;
	
	iVar0 = func_707();
	if (func_708(iVar0) < iParam0)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	else
	{
		func_1327(iParam0, 0, 0, 0);
	}
}

void func_850(int iParam0, int iParam1)
{
	iLocal_813 = iParam1;
}

bool func_851()
{
	return func_888(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

int func_852()
{
	if ((func_409() && func_210(23)) && !func_1328("ABI1_FOUND"))
	{
		return 1;
	}
	return 0;
}

void func_853(int iParam0, int iParam1)
{
	switch (Local_18)
	{
		case 0:
			if (((func_205() != 0 && ENTITY::DOES_ENTITY_EXIST(iParam1)) && func_1329()) && func_1330(iParam1))
			{
				func_1038(1);
			}
			break;
		
		case 1:
			break;
		
		case 2:
			if (func_1331(iParam0))
			{
				func_1038(3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if (func_1332())
			{
				func_1038(1);
			}
			break;
		
		case 5:
			func_508();
			break;
	}
	if (((Local_18 == 1 || Local_18 == 2) || Local_18 == 3) || Local_18 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_18.f_5);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_18.f_6);
		}
	}
}

void func_854(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_855(int iParam0, int iParam1)
{
	iLocal_811 = iParam1;
}

void func_856(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 0);
}

int func_857(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_1333(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_1334(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_1335(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_1336(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_1337(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_1338(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_217(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_1335(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_1339(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_1340(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_1335(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_1341(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_1335(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_1342(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_1342(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_1335(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_1343(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_1344(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_1345(uParam2, 4000))
				{
					if ((func_1346(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_1347(uParam2, iParam0)) && func_1348(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_1335(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_1346(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_1347(uParam2, iParam0)) && func_1348(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_1349(iParam0, Global_1935630->f_41))
							{
								func_1350();
								*uParam3 = 2;
								func_1335(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_1349(iParam0, Global_1935630->f_41))
						{
							func_1350();
							*uParam3 = 2;
							func_1335(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_1351(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_273() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_1350();
						*uParam3 = 2;
						func_1335(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_1352())
					{
						if (func_1349(iParam0, Global_1935630->f_42))
						{
							func_1350();
							*uParam3 = 2;
							func_1335(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_1353(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_1335(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_1354(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_1355(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_1335(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_1356(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_1357(uParam2, 4000))
				{
					if (func_1358(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_1335(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_1359(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_1335(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_1360(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_1335(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_858(char* sParam0, int iParam1, int iParam2)
{
	func_1361(sParam0, iParam1, iParam2);
}

int func_859()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_772, true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_300))
	{
		return 1;
	}
	return 0;
}

int func_860(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 0, 0, false, true);
		return 0;
	}
	if (!uParam0->f_1)
	{
		if (func_323(vLocal_727, vLocal_730, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JackMarston", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "arthur", Global_35, 0);
			if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_4, "ARTHUR UPPER"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_484, iLocal_291, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_485, iLocal_292, 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return 0;
		}
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_861(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_862(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_657(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, func_1362());
}

int func_863(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		func_1363(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = func_356(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_691(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_214(&(iParam1->f_13));
		}
		if (func_1364(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1365(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_863(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_868(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							func_1366(*iParam0, 1, 1);
						}
					}
					else if (func_1367(iParam1, 22))
					{
						func_1366(*iParam0, 0, 1);
					}
				}
				if (func_1368(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1369(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1370(iParam8);
					func_1371(iParam1, uParam3);
					if (func_1372(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_1373(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_1374(iParam1, uParam3, fVar8);
					if (func_1375(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_867(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			
			case 3:
				if (func_1368(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1376(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1372(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1369(iParam0, func_1368(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1370(iParam8);
					func_1371(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_867(uParam3, 0, 0, 1, 1);
					func_1377(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_1174(Global_35, 501393341) && !func_1174(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_1378(Global_35, *iParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_209(iParam1->f_28, 0)) && func_1379(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_1174(iParam1->f_28, 518218985)) && !func_1174(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_1174(Global_35, -828834893) && !func_1174(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_1378(Global_35, *iParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_1171(iParam1, iParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_1172(iParam1)))
					{
					}
					else if (!func_1380(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_214(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_1381(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			
			case 4:
				if (func_1382(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			
			case 2:
				if (func_1368(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1376(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1372(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1369(iParam0, func_1368(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1370(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_867(uParam3, 0, 0, 1, 1);
					}
					func_1377(iParam1, 1);
				}
				func_1374(iParam1, uParam3, fVar8);
				if (func_1382(iParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_1383(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

int func_864(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	vVar0 = { func_1384(vParam4, fParam7) };
	vVar3 = { func_1384(vParam4, fParam8) };
	vVar6 = { func_1385(vVar0, 0) };
	vVar9 = { func_1385(vVar3, 0) };
	if (!func_781(Global_35, vParam0, fParam3, 1, 1))
	{
		return 0;
	}
	vVar12 = { Global_36 - vParam0 };
	if (func_1386(vVar12, vVar6) >= 0f)
	{
		if (func_1386(vVar12, vVar9) < 0f)
		{
			return 1;
		}
	}
	return 0;
}

int func_865(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_717(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_1235(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_866(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_1387(iParam0, 13))
	{
		func_1388(iParam0, 0);
	}
	else
	{
		func_1202(iParam0, 0);
	}
	if (func_717(iParam0->f_6))
	{
		if (bParam2)
		{
			func_1389(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_867(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_717(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_1389(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

void func_868(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 297, false);
	}
}

void func_869(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

void func_870(var uParam0)
{
	if (!func_694(2))
	{
		if (ANIMSCENE::_0x25557E324489393C(&(Local_926[7 /*6*/])))
		{
			if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[7 /*6*/]), 0))
			{
				func_894(7);
				func_695(2);
			}
		}
	}
	else if (!func_211())
	{
		if (!func_694(1))
		{
			if (func_406(uParam0, "ABI1_MOUNTUP", 0))
			{
				func_695(1);
			}
		}
	}
}

void func_871(int iParam0)
{
	iLocal_812 = iParam0;
}

void func_872()
{
	func_894(1);
	func_894(9);
	func_894(8);
	func_894(10);
}

int func_873()
{
	return Global_40.f_4283.f_1;
}

Vector3 func_874(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		
		case 8:
			return func_1390();
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_875(int iParam0)
{
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1391(iParam0, 32);
	func_539();
}

void func_876(int iParam0, int iParam1)
{
	iLocal_807 = iParam1;
}

Vector3 func_877()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	vVar0 = { -2f, 1f, 0f };
	vVar3 = { 2f, 1f, 0f };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, vVar0) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, vVar3) };
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false) };
	if (BUILTIN::VDIST(vVar6, vVar12) < BUILTIN::VDIST(vVar9, vVar12))
	{
		return vVar6;
	}
	return vVar9;
}

int func_878()
{
	if (ANIMSCENE::_0x95531A4A20CCE7BC(&(Local_926[3 /*6*/]), 0))
	{
		if (!iLocal_1005)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(Local_926[3 /*6*/]), "JackMarston", &Local_101, true, "pl_IG7_Mount_Left", 2))
			{
				iLocal_1005 = 1;
			}
		}
		if (!iLocal_1006)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(Local_926[3 /*6*/]), "JackMarston", &Local_113, true, "pl_IG7_Mount_Right", 2))
			{
				iLocal_1006 = 1;
			}
		}
		if (iLocal_1005 && iLocal_1006)
		{
			return 1;
		}
	}
	return 0;
}

int func_879(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar0 = { -1.5f, 0f, 0f };
	vVar3 = { 1.5f, 0f, 0f };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam3, vVar0) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam3, vVar3) };
	if (BUILTIN::VDIST(vParam0, vVar9) < BUILTIN::VDIST(vParam0, vVar6))
	{
		return 1;
	}
	return 0;
}

int func_880(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { (vParam0.x - 0.25f), (vParam0.y - 0.25f), (vParam0.z - 0.25f) };
	vVar3 = { (vParam0.x + 0.25f), (vParam0.y + 0.25f), (vParam0.z + 0.25f) };
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam0);
	if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar3, vVar0))
	{
		return 1;
	}
	return 0;
}

bool func_881(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1392(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_882()
{
	switch (iLocal_804)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -543.8303f, 202.0431f, 40.2648f, false) < 100f)
			{
				iLocal_804 = 1;
			}
			break;
		
		case 1:
			break;
	}
}

int func_883(int iParam0)
{
	if (iParam0 > iLocal_791)
	{
		iLocal_791 = iParam0;
		func_243(&uLocal_504);
		return 1;
	}
	return 0;
}

int func_884()
{
	if (Global_1935630->f_44 != 0 && Global_1935630->f_44 != joaat("weapon_unarmed"))
	{
		return 1;
	}
	return 0;
}

int func_885(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	
	if (!Global_1935630->f_27 && !bParam4)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, -128997553))
	{
		fVar0 = func_218(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return 0;
					}
				}
				iVar3 = func_1393(PLAYER::PLAYER_PED_ID(), 0);
				if (func_1394(iVar3) && !PAD::IS_CONTROL_PRESSED(0, 130948705))
				{
					return 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { func_1395(0) };
				vVar10 = { func_861(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_886(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	int iVar13;
	int iVar14;
	
	if (((!func_210(15) && !func_851()) && !func_1396()) && !func_79(&uLocal_525))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(iLocal_301, &iVar2, -1, -1);
		if (iVar0 > 0)
		{
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iVar2[iVar0])) && MISC::ARE_STRINGS_EQUAL(sLocal_480, "NULL"))
				{
					iVar13 = ENTITY::GET_ENTITY_MODEL(&(iVar2[iVar0]));
					if (((func_1397(iVar13) && ENTITY::IS_ENTITY_ON_SCREEN(&(iVar2[iVar0]))) && !ENTITY::IS_ENTITY_OCCLUDED(&(iVar2[iVar0]))) && func_218(Global_35, &(iVar2[iVar0]), 1, 1) < 40f)
					{
						iVar14 = iVar0;
						switch (iVar13)
						{
							case 1110710183:
								iVar1 = 0;
								sLocal_480 = "ABI1_DEER";
								break;
							
							case -1963605336:
								iVar1 = 1;
								sLocal_480 = "ABI1_BUCK";
								break;
							
							case 2028722809:
								iVar1 = 2;
								sLocal_480 = "ABI1_BOAR";
								break;
							
							case 252669332:
								iVar1 = 3;
								sLocal_480 = "ABI1_FOX";
								break;
							
							case 1465438313:
								iVar1 = 4;
								sLocal_480 = "ABI1_SQUIR";
								break;
							
							case 1459778951:
								iVar1 = 5;
								sLocal_480 = "ABI1_EAGLE";
								break;
							
							case -541762431:
								iVar1 = 6;
								sLocal_480 = "ABI1_RABB";
								break;
							
							case 480688259:
								iVar1 = 7;
								sLocal_480 = "ABI1_COYOTE";
								break;
						}
					}
				}
				iVar0++;
			}
		}
		if ((((((ENTITY::DOES_ENTITY_EXIST(&(iVar2[iVar14])) && !MISC::ARE_STRINGS_EQUAL(sLocal_480, "NULL")) && ENTITY::IS_ENTITY_ON_SCREEN(&(iVar2[iVar14]))) && !ENTITY::IS_ENTITY_OCCLUDED(&(iVar2[iVar14]))) && func_218(Global_35, &(iVar2[iVar14]), 1, 1) < 40f) && !&iLocal_794[iVar1]) && !func_444())
		{
			if (func_406(uParam0, sLocal_480, 0))
			{
				func_243(&uLocal_504);
				iLocal_794[iVar1] = 1;
				func_326(15);
			}
		}
		else
		{
			sLocal_480 = "NULL";
		}
	}
	else if (!func_79(&uLocal_528))
	{
		if (!func_412(sLocal_480) && !func_1396())
		{
			func_214(&uLocal_528);
		}
	}
	else if (func_215(&uLocal_528) > 10f)
	{
		sLocal_480 = "NULL";
		func_410(15);
		func_243(&uLocal_528);
	}
}

void func_887(var uParam0)
{
	int iVar0;
	
	if (((((((func_409() && func_575(iLocal_301, vLocal_594, 0) > 15f) && func_575(iLocal_301, vLocal_678, 0) > 75f) && !func_210(15)) && !func_210(3)) && !func_851()) && !func_1396()) && !func_79(&uLocal_525))
	{
		if (!iLocal_153)
		{
			if (!iLocal_155)
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					iLocal_777 = func_1398();
					iLocal_155 = 1;
				}
			}
			else if (!func_79(&uLocal_543))
			{
				func_214(&uLocal_543);
			}
			else if (func_215(&uLocal_543) > 4f)
			{
				iVar0 = func_1398();
				if (iVar0 == iLocal_777)
				{
					sLocal_487 = func_1399(iVar0);
					if (!MISC::ARE_STRINGS_EQUAL(sLocal_487, "NULL"))
					{
						iLocal_153 = 1;
					}
				}
				else
				{
					iLocal_155 = 0;
					func_243(&uLocal_543);
				}
			}
		}
		else if (func_406(uParam0, sLocal_487, 0))
		{
			iLocal_777 = iVar0;
			iLocal_155 = 0;
			iLocal_153 = 0;
			func_243(&uLocal_543);
		}
	}
	else
	{
		func_243(&uLocal_543);
	}
}

bool func_888(int iParam0)
{
	return iParam0 != 0;
}

bool func_889(char* sParam0)
{
	return AUDIO::_0xD89504D9D7D5057D(sParam0);
}

var func_890(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_891(int iParam0)
{
	int iVar0;
	
	if (func_888(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

int func_892(float fParam0)
{
	int iVar0;
	
	iVar0 = func_440(iLocal_301);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (PED::_0xF60165E1D2C5370B(iVar0, &fLocal_183, &fLocal_184))
		{
			if (fLocal_183 >= fParam0 || fLocal_184 >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_893(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

void func_894(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(&(Local_926[iParam0 /*6*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_926[iParam0 /*6*/]));
	}
}

bool func_895(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

void func_896(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "ABI_TITHE", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "JACK1_TITHE", 16);
			break;
		
		case 2:
			StringCopy(sParam0, "JACK2_TITHE", 16);
			break;
		
		case 3:
			StringCopy(sParam0, "CHAR1_TITHE", 16);
			break;
		
		case 4:
			StringCopy(sParam0, "CHAR2_TITHE", 16);
			break;
		
		case 5:
			StringCopy(sParam0, "CHAR3_TITHE", 16);
			break;
		
		case 6:
			StringCopy(sParam0, "CHAR4_TITHE", 16);
			break;
		
		case 7:
			StringCopy(sParam0, "SUSAN1_TITHE", 16);
			break;
		
		case 8:
			StringCopy(sParam0, "SUSAN2_TITHE", 16);
			break;
		
		case 9:
			StringCopy(sParam0, "SWANS_TITHE", 16);
			break;
		
		case 10:
			StringCopy(sParam0, "PEARS1_TITHE", 16);
			break;
		
		case 11:
			StringCopy(sParam0, "PEARS2_TITHE", 16);
			break;
		
		case 12:
			StringCopy(sParam0, "JAVIER_TITHE", 16);
			break;
		
		case 13:
			StringCopy(sParam0, "BILL_TITHE", 16);
			break;
		
		case 14:
			StringCopy(sParam0, "SEAN_TITHE", 16);
			break;
		
		case 15:
			StringCopy(sParam0, "KIER_TITHE", 16);
			break;
		
		case 16:
			StringCopy(sParam0, "TILLY_TITHE", 16);
			break;
		
		case 17:
			StringCopy(sParam0, "HOSEA1_TITHE", 16);
			break;
		
		case 18:
			StringCopy(sParam0, "HOSEA2_TITHE", 16);
			break;
		
		case 19:
			StringCopy(sParam0, "LENNY1_TITHE", 16);
			break;
		
		case 20:
			StringCopy(sParam0, "LENNY2_TITHE", 16);
			break;
		
		case 21:
			StringCopy(sParam0, "UNCLE_TITHE", 16);
			break;
		
		case 22:
			StringCopy(sParam0, "MARY1_TITHE", 16);
			break;
		
		case 23:
			StringCopy(sParam0, "MARY2_TITHE", 16);
			break;
		
		case 24:
			StringCopy(sParam0, "TREWL_TITHE", 16);
			break;
		
		case 25:
			StringCopy(sParam0, "MOLLY_TITHE", 16);
			break;
		
		case 26:
			StringCopy(sParam0, "STRAU_TITHE", 16);
			break;
		
		case 27:
			StringCopy(sParam0, "KAREN_TITHE", 16);
			break;
		
		case 28:
			StringCopy(sParam0, "DUTCH_TITHE", 16);
			break;
		
		case 29:
			StringCopy(sParam0, "SADIE_TITHE", 16);
			break;
		
		case 30:
			StringCopy(sParam0, "MICAH_TITHE", 16);
			break;
	}
}

char* func_897(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_898(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	StringCopy(&(uParam0->f_12), "script@vignette@ITM@Handover@item_handover", 64);
	switch (iParam1)
	{
		case 1:
			uParam0->f_1 = 1613651027;
			uParam0->f_2 = 1;
			uParam0->f_3 = 3;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMBILLA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMBILLA2", 24);
			uParam0->f_22 = func_1400(-1780177928);
			uParam0->f_23 = -1574283183;
			break;
		
		case 3:
			uParam0->f_1 = 299161628;
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_CHAMOONR1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_CHAMOONR2", 24);
			uParam0->f_22 = -1759362478;
			uParam0->f_23 = -1460756997;
			break;
		
		case 2:
			uParam0->f_1 = -2048623764;
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CABCH_ITMCHRA1", 24);
			uParam0->f_22 = func_1400(1627068364);
			break;
		
		case 4:
			uParam0->f_1 = -2051332199;
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMCHRB1", 24);
			uParam0->f_22 = -2063399157;
			uParam0->f_23 = -2002658258;
			break;
		
		case 5:
			uParam0->f_1 = -497602986;
			uParam0->f_2 = 1;
			uParam0->f_3 = 0;
			uParam0->f_4 = 0;
			uParam0->f_5 = 3;
			uParam0->f_20 = 495;
			StringCopy(&(uParam0->f_12), "", 64);
			break;
		
		case 6:
			uParam0->f_1 = -793862732;
			uParam0->f_2 = 1;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMHOSA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMHOSA2", 24);
			uParam0->f_22 = func_1400(-1635450397);
			uParam0->f_23 = -1482853672;
			break;
		
		case 7:
			uParam0->f_1 = 1433048902;
			uParam0->f_2 = 2;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMHOSA1", 24);
			StringCopy(&(uParam0->f_9), "CALCM_ITMHOSA2", 24);
			uParam0->f_22 = func_1400(-755485480);
			uParam0->f_23 = -535255159;
			break;
		
		case 8:
			uParam0->f_1 = -1487662509;
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMJCKA2", 24);
			uParam0->f_22 = func_1400(-951828978);
			uParam0->f_23 = -1674175748;
			break;
		
		case 9:
			uParam0->f_1 = 1427759409;
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMJCKA1", 24);
			break;
		
		case 10:
			uParam0->f_1 = -2051332199;
			uParam0->f_2 = 1;
			uParam0->f_3 = 2;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_ITMJAVA1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_ITMJAVA2", 24);
			uParam0->f_22 = -1127655651;
			uParam0->f_23 = 2001398556;
			break;
		
		case 11:
			uParam0->f_1 = -398744080;
			uParam0->f_2 = 2;
			uParam0->f_3 = 10;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMKIEA1", 24);
			StringCopy(&(uParam0->f_9), "CALCM_ITMKIEA2", 24);
			uParam0->f_22 = func_1400(-2076104686);
			uParam0->f_23 = 1519213086;
			break;
		
		case 12:
			uParam0->f_1 = -963759116;
			uParam0->f_2 = 1;
			uParam0->f_3 = 9;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMLENA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMLENA2", 24);
			uParam0->f_22 = 2007368749;
			break;
		
		case 13:
			uParam0->f_1 = 353848785;
			uParam0->f_2 = 1;
			uParam0->f_3 = 15;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_MB_ITEM", 24);
			uParam0->f_22 = func_1400(1478239863);
			break;
		
		case 14:
			uParam0->f_1 = -574122036;
			uParam0->f_2 = 1;
			uParam0->f_3 = 16;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMMOLA1", 24);
			uParam0->f_22 = func_1400(338147422);
			uParam0->f_23 = 167109702;
			break;
		
		case 15:
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 1;
			StringCopy(&(uParam0->f_6), "CAHSO_ITMPRSA1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_ITMPRSA2", 24);
			StringCopy(&(uParam0->f_12), "", 64);
			break;
		
		case 16:
			uParam0->f_1 = -735913145;
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMPRSA1", 24);
			uParam0->f_22 = func_1400(1483206625);
			uParam0->f_23 = 671600831;
			break;
		
		case 17:
			uParam0->f_1 = 660636780;
			uParam0->f_2 = 1;
			uParam0->f_3 = 11;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMSADA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMSADA2", 24);
			uParam0->f_22 = func_1400(-898386032);
			uParam0->f_23 = 309887362;
			break;
		
		case 18:
			uParam0->f_1 = 688258043;
			uParam0->f_2 = 1;
			uParam0->f_3 = 8;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_SEAN_ITM", 24);
			uParam0->f_22 = -1903398558;
			uParam0->f_23 = 1023107731;
			break;
		
		case 19:
			uParam0->f_1 = 546981776;
			uParam0->f_2 = 2;
			uParam0->f_3 = 19;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMSUS1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMSUS2", 24);
			uParam0->f_22 = func_1400(730856618);
			uParam0->f_23 = -1467557935;
			break;
		
		case 20:
			uParam0->f_1 = 844655121;
			uParam0->f_2 = 1;
			uParam0->f_3 = 22;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMTLL", 24);
			uParam0->f_22 = func_1400(230530039);
			uParam0->f_23 = -234712774;
			break;
		
		case 21:
			uParam0->f_1 = 128702355;
			uParam0->f_2 = 1;
			uParam0->f_3 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CABCH_ITMUNCA1", 24);
			StringCopy(&(uParam0->f_9), "CABCH_ITMUNCA2", 24);
			break;
	}
}

void func_899(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			if (func_1401(1427759409, 0, 0) < 1)
			{
				func_1402();
				func_1403(-2137341727, 0.68f);
				func_1403(-1564940634, 0.68f);
				func_1403(-1881226198, 0.68f);
			}
			break;
	}
}

void func_900(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1404(*uParam0);
	iVar1 = func_1405(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(func_1406(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(9, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(9, iVar0, func_874(func_1407()), 1307979820, func_1408(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(9, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(9, iVar0, iVar1, 404961913);
		if (*uParam0 == 21)
		{
			func_1409(1, 688258043, 0);
			func_1409(2, -1477273558, 0);
			func_1409(3, 128702355, 0);
			func_1409(4, 1613651027, 0);
			func_1409(5, 0, -998653403);
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					func_1410(uParam0, iVar3, &((Global_1359489->f_361.f_258[iVar3 /*6*/])->f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

void func_901(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	
	iVar0 = func_1411(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &sVar4);
		sVar3 = func_1134(&sVar4, 109029619);
		sVar2 = func_970(uParam0->f_3, 0);
		func_1410(uParam0, 1896170705, MISC::_CREATE_VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_1410(uParam0, 1896170705, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

void func_902(int iParam0, int iParam1)
{
	(Global_40.f_6563[iParam0 /*27*/])->f_24 = iParam1;
}

void func_903()
{
	int iVar0;
	
	iVar0 = Global_1359489->f_361.f_1 + 1;
	if (iVar0 > 10)
	{
		return;
	}
	Global_1359489->f_361.f_1++;
}

struct<2> func_904(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_905(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_906(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

int func_907()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1900073, false))
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-506425016) > 0)
	{
		return 1;
	}
	return 0;
}

void func_908(int iParam0, int iParam1)
{
	if (&Global_1900073->f_179[iParam0] != iParam1)
	{
		Global_1900073->f_179[iParam0] = iParam1;
	}
}

void func_909()
{
	switch (iLocal_803)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_926[11 /*6*/])))
			{
				Local_926[11 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_926[11 /*6*/])->f_3, 0, "PBL_Enter", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_926[11 /*6*/]));
				func_919(iLocal_803, 1);
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(&(Local_926[11 /*6*/]), 1, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_296))
				{
					iLocal_296 = OBJECT::CREATE_OBJECT(iLocal_277, vLocal_605, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_294))
				{
					iLocal_294 = OBJECT::CREATE_OBJECT(iLocal_278, vLocal_605, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_295))
				{
					iLocal_295 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_605, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
				{
					iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vLocal_605, true, true, false, false, true);
				}
				if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_296) && !ENTITY::IS_ENTITY_DEAD(iLocal_294)) && !ENTITY::IS_ENTITY_DEAD(iLocal_295)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291)) && !ENTITY::IS_ENTITY_DEAD(iLocal_301)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_278);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[11 /*6*/]), "JackMarston", iLocal_301, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[11 /*6*/]), "arthur", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[11 /*6*/]), sLocal_484, iLocal_291, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[11 /*6*/]), sLocal_481, iLocal_296, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_296, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[11 /*6*/]), sLocal_482, iLocal_294, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_294, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[11 /*6*/]), sLocal_483, iLocal_295, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_295, false);
					func_919(iLocal_803, 2);
				}
			}
			break;
		
		case 2:
			if (ANIMSCENE::_0x95531A4A20CCE7BC(&(Local_926[11 /*6*/]), 0))
			{
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[11 /*6*/]), "PBL_Enter"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(Local_926[11 /*6*/]), "JackMarston", &Local_77, true, "PBL_Enter", 2))
					{
						if (func_740(vLocal_609, Local_77, 1.5f, 1))
						{
							vLocal_609 = { Local_77 };
							fLocal_612 = Local_77.f_3.f_2;
						}
					}
				}
			}
			func_326(17);
			func_919(iLocal_803, 3);
			break;
		
		case 3:
			break;
		
		case 4:
			func_1412();
			func_410(5);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_294, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_296, true);
			ANIMSCENE::START_ANIM_SCENE(&(Local_926[11 /*6*/]));
			func_919(iLocal_803, 6);
			break;
		
		case 6:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[11 /*6*/]), "PBL_Base");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[11 /*6*/]), "PBL_Base"))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(&(Local_926[11 /*6*/]), "S_Base", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[11 /*6*/]), "PBL_Base", true);
					func_919(iLocal_803, 7);
				}
			}
			break;
		
		case 7:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[11 /*6*/]), "PBL_Conversation");
			if (!func_210(24))
			{
				if (func_1413())
				{
					func_326(24);
				}
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[11 /*6*/]), "PBL_Conversation") && func_210(24))
			{
				func_423(0, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[11 /*6*/]), "Loop", true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[11 /*6*/]), "PBL_Conversation", true);
				func_425();
				func_919(iLocal_803, 8);
			}
			break;
		
		case 8:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[11 /*6*/]), "PBL_Base");
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(Local_926[11 /*6*/]), "S_Base", 1) && ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[11 /*6*/]), "PBL_Base"))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(&(Local_926[11 /*6*/]), "Loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[11 /*6*/]), "Loop", false, false);
				}
				func_410(24);
				func_1414();
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[11 /*6*/]), "PBL_Base", true);
				func_919(iLocal_803, 9);
			}
			break;
		
		case 9:
			break;
	}
}

void func_910()
{
	if (!iLocal_1032)
	{
		if (func_1415(0.3f))
		{
			if (func_352(iLocal_301, 1056466932))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
				{
					TASK::TASK_STAND_STILL(iLocal_301, -1);
				}
			}
			iLocal_1032 = 1;
		}
	}
	else if (!func_1415(0.3f))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false)) < 10f && !func_352(iLocal_301, 1056466932))
		{
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
		}
		iLocal_1032 = 0;
	}
}

void func_911(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_521(iParam0))
	{
		return;
	}
	if (!func_1416(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_1205(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_1417(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_1418())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

void func_912(int iParam0, int iParam1)
{
	iLocal_787 = iParam1;
}

void func_913(var uParam0, bool bParam1)
{
	func_1419(uParam0);
	func_1420();
	func_1421();
	func_1422();
	func_1423();
	switch (iLocal_780)
	{
		case 0:
			func_1424(iLocal_780, 1);
			break;
		
		case 1:
			if (func_914())
			{
				if (!func_79(&uLocal_558))
				{
					func_214(&uLocal_558);
				}
				if (!func_431())
				{
					if (!func_210(6))
					{
						if (!func_79(&uLocal_537))
						{
							func_214(&uLocal_537);
						}
						else if (func_438(&uLocal_537) > 5f)
						{
							if (!func_419() && func_406(uParam0, "ABI1_FISH0", 0))
							{
								func_243(&uLocal_537);
								func_326(6);
							}
						}
					}
					else if (!func_412("ABI1_FISH0"))
					{
						func_410(6);
					}
				}
				else if (!func_1425())
				{
					if (!func_419() && func_406(uParam0, "ABI1_JFISH1", 0))
					{
						func_243(&uLocal_537);
						func_1424(iLocal_780, 2);
					}
				}
				else
				{
					func_243(&uLocal_537);
					func_1424(iLocal_780, 3);
				}
			}
			break;
		
		case 2:
			if (func_431())
			{
				if (func_1425())
				{
					if (!func_412("ABI1_JFISH1") && !func_412("ABI1_NOFISHN"))
					{
						if (func_406(uParam0, "ABI1_JFISH1A", 0))
						{
							func_1424(iLocal_780, 3);
						}
					}
				}
				else if (!func_210(6))
				{
					if (!func_79(&uLocal_537))
					{
						func_214(&uLocal_537);
					}
					else if (func_438(&uLocal_537) > fLocal_1028)
					{
						if (!func_419() && func_406(uParam0, "ABI1_NOFISHN", 0))
						{
							func_243(&uLocal_537);
							func_326(6);
						}
					}
				}
				else if (!func_412("ABI1_NOFISHN"))
				{
					func_410(6);
				}
			}
			break;
		
		case 3:
			if (func_431())
			{
				if (func_1425() && !func_412("ABI1_JFISH1A"))
				{
					if (func_406(uParam0, "ABI1_AFISH2", 0))
					{
						func_243(&uLocal_537);
						func_1424(iLocal_780, 4);
					}
				}
			}
			else
			{
				iLocal_793 = 3;
				func_243(&uLocal_537);
				func_1424(iLocal_780, 1);
			}
			break;
		
		case 4:
			if (func_844(0) && func_1426(0))
			{
				func_333(14);
				func_333(6);
				func_1424(iLocal_780, 7);
			}
			else if (!func_412("ABI1_AFISH2") && !func_384(0))
			{
				if (!func_210(6))
				{
					if (!func_79(&uLocal_537))
					{
						func_214(&uLocal_537);
					}
					else if (func_438(&uLocal_537) > 5f)
					{
						if (!func_419() && func_406(uParam0, "ABI1_NOFISHN", 0))
						{
							func_243(&uLocal_537);
							func_326(6);
						}
					}
				}
				else if (!func_412("ABI1_NOFISHN"))
				{
					func_410(6);
				}
			}
			break;
		
		case 7:
			if (func_384(7))
			{
				if (!func_419())
				{
					if (func_406(uParam0, "ABI1_JFISH2", 0))
					{
						func_425();
						iLocal_145 = 1;
						func_1424(iLocal_780, 8);
					}
				}
			}
			break;
		
		case 8:
			if (!func_419())
			{
				iLocal_792 = 3;
				if (func_406(uParam0, "ABI1_JFISH3", 0))
				{
					func_1424(iLocal_780, 9);
				}
			}
			break;
		
		case 9:
			if (!func_419())
			{
				if (func_406(uParam0, "ABI1_JFISH5", 0))
				{
					func_1424(iLocal_780, 10);
				}
			}
			break;
		
		case 10:
			if (!func_412("ABI1_JFISH5"))
			{
				func_1414();
				func_243(&uLocal_537);
				func_214(&uLocal_552);
				func_1424(iLocal_780, 12);
			}
			break;
		
		case 12:
			if (!func_1425())
			{
				func_1424(iLocal_780, 11);
				return;
			}
			if (!func_921(0) && !func_210(24))
			{
				func_1427();
			}
			if (!func_419())
			{
				if (!iLocal_165)
				{
					if (func_844(0))
					{
						if (!iLocal_145)
						{
							if (func_1426(0))
							{
								iLocal_145 = 1;
								if (!func_210(16) && !func_210(24))
								{
									func_1424(iLocal_780, 13);
								}
								return;
							}
						}
						if (((!iLocal_144 && !bLocal_163) && !func_210(16)) && func_923(0))
						{
							iLocal_144 = 1;
							if (!func_210(16) && !func_210(24))
							{
								func_423(0, 0);
								func_1424(iLocal_780, 14);
							}
							return;
						}
						if (!iLocal_148 && func_1428(0))
						{
							iLocal_144 = 1;
							iLocal_148 = 1;
							if (!func_210(16) && !func_210(24))
							{
								func_423(0, 0);
								func_1424(iLocal_780, 15);
							}
							return;
						}
						if (!iLocal_149 && func_1429(0))
						{
							if (!func_210(19))
							{
								func_326(19);
							}
							iLocal_144 = 0;
							iLocal_148 = 0;
							iLocal_149 = 1;
							if (!func_210(16) && !func_210(24))
							{
								func_423(0, 0);
								func_1424(iLocal_780, 18);
							}
							return;
						}
						if (!iLocal_147)
						{
							if (iLocal_146 && !func_412("ABI1_JFISH12"))
							{
								if ((((((func_1430(0) && !func_1431(0)) && !func_1429(0)) && !func_845(0)) && !func_210(16)) && !func_210(24)) && !iLocal_165)
								{
									if (func_406(uParam0, "ABI1_JFISH13", 0))
									{
										iLocal_147 = 1;
									}
								}
							}
						}
					}
					func_1432(uParam0, bParam1);
				}
			}
			break;
		
		case 11:
			func_1432(uParam0, bParam1);
			if (func_1425())
			{
				func_1424(iLocal_780, 12);
			}
			break;
		
		case 20:
			if (!func_419() && !func_210(24))
			{
				func_1414();
				func_243(&uLocal_537);
				func_1424(iLocal_780, 12);
			}
			break;
		
		case 13:
			if (!func_419() && !func_210(24))
			{
				if (func_406(uParam0, "ABI1_JFISH4", 0))
				{
					func_243(&uLocal_537);
					func_1424(iLocal_780, 12);
				}
			}
			else
			{
				func_243(&uLocal_537);
				func_1424(iLocal_780, 12);
			}
			break;
		
		case 14:
			if (func_406(uParam0, "ABI1_JFISH8", 0))
			{
				func_1424(iLocal_780, 15);
			}
			break;
		
		case 15:
			if (!func_419())
			{
				if ((func_1430(0) && !func_1429(0)) && !func_210(24))
				{
					if (func_406(uParam0, "ABI1_JFISH7", 0))
					{
						func_243(&uLocal_540);
						if ((!bLocal_163 && !func_210(16)) || iLocal_167)
						{
							func_1424(iLocal_780, 16);
						}
						else
						{
							func_1424(iLocal_780, 12);
						}
					}
				}
				else if (!func_79(&uLocal_540))
				{
					func_214(&uLocal_540);
				}
				else if (!func_923(0))
				{
					if (func_215(&uLocal_540) > 2f)
					{
						func_243(&uLocal_540);
						iLocal_144 = 0;
						func_1424(iLocal_780, 18);
					}
				}
				else
				{
					func_243(&uLocal_540);
				}
			}
			break;
		
		case 16:
			if (!func_412("ABI1_JFISH7"))
			{
				if ((func_1430(0) && !func_1429(0)) || func_845(0))
				{
					if (!bLocal_163 && !func_210(16))
					{
						if (func_406(uParam0, "ABI1_JFISH10", 0))
						{
							if (!iLocal_146)
							{
								func_1424(iLocal_780, 17);
							}
							else
							{
								func_243(&uLocal_537);
								func_1424(iLocal_780, 12);
							}
						}
					}
					else if (!iLocal_146)
					{
						func_1424(iLocal_780, 17);
					}
					else
					{
						func_243(&uLocal_537);
						func_1424(iLocal_780, 12);
					}
				}
				else
				{
					func_1424(iLocal_780, 18);
				}
			}
			break;
		
		case 17:
			if (!func_412("ABI1_JFISH10"))
			{
				if (!func_1429(0))
				{
					if (func_1430(0))
					{
						if (func_1431(0))
						{
							if (func_406(uParam0, "ABI1_JFISH12", 0))
							{
								func_243(&uLocal_537);
								iLocal_146 = 1;
								func_1424(iLocal_780, 12);
							}
						}
					}
					else if (iLocal_165)
					{
						func_243(&uLocal_537);
						func_1424(iLocal_780, 12);
					}
				}
				else
				{
					func_1424(iLocal_780, 18);
				}
			}
			break;
		
		case 18:
			if (!func_923(0))
			{
				if (!func_419())
				{
					if (func_406(uParam0, "ABI1_JFISH6", 0))
					{
						func_1424(iLocal_780, 19);
					}
				}
			}
			else
			{
				func_1424(iLocal_780, 15);
			}
			break;
		
		case 19:
			if (!func_923(0))
			{
				if (!func_419())
				{
					if (func_406(uParam0, "ABI1_JFISH9", 0))
					{
						func_243(&uLocal_537);
						iLocal_149 = 0;
						func_1424(iLocal_780, 12);
					}
				}
			}
			else
			{
				func_858("ABI1_JFISH6", 0, 0);
				func_1424(iLocal_780, 15);
			}
			break;
		
		case 21:
			if (!func_210(16))
			{
				func_1424(iLocal_780, 12);
			}
			break;
	}
}

int func_914()
{
	if (bLocal_168)
	{
		if (func_893(iLocal_764, Global_36))
		{
			return 1;
		}
	}
	else if (func_893(iLocal_765, Global_36) && !func_1415(0.3f))
	{
		return 1;
	}
	return 0;
}

int func_915()
{
	if (iLocal_162)
	{
		return 1;
	}
	if (!iLocal_162)
	{
		if (func_79(&uLocal_552))
		{
			if (func_438(&uLocal_552) > 45f)
			{
				func_243(&uLocal_552);
				iLocal_162 = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_916()
{
	if ((func_426(0) - iLocal_193) > 0)
	{
		return 1;
	}
	return 0;
}

int func_917()
{
	if (func_921(0))
	{
		if (func_1430(0))
		{
			return 1;
		}
		if (func_845(0) || func_923(0))
		{
			return 1;
		}
	}
	return 0;
}

void func_918()
{
	switch (iLocal_823)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_926[12 /*6*/])))
			{
				Local_926[12 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE((Local_926[12 /*6*/])->f_3, 0, 0, false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(Local_926[12 /*6*/]));
				func_1433(iLocal_823, 1);
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(&(Local_926[12 /*6*/]), 1, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_298))
				{
					iLocal_298 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_605, false, true, true, true, false);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299))
				{
					iLocal_299 = OBJECT::CREATE_OBJECT(iLocal_278, vLocal_605, false, true, true, true, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[12 /*6*/]), "JackMarston", iLocal_301, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[12 /*6*/]), "p_fishingpole01x", iLocal_291, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[12 /*6*/]), "s_inv_yarrow01x", iLocal_298, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_926[12 /*6*/]), "s_inv_yarrow01cx", iLocal_299, 0);
					func_1433(iLocal_823, 2);
				}
			}
			break;
		
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[12 /*6*/]), "Pl_IG13_JackPickYarrow_YarrowPlantStartPose");
			if (ANIMSCENE::_0x95531A4A20CCE7BC(&(Local_926[12 /*6*/]), 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(Local_926[12 /*6*/]), "JackMarston", &Local_125, false, 0, 2))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[12 /*6*/]), "Pl_IG13_JackPickYarrow_YarrowPlantStartPose"))
					{
						vLocal_605 = { Local_125 };
						fLocal_608 = Local_125.f_3.f_2;
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[12 /*6*/]), "Pl_IG13_JackPickYarrow_YarrowPlantStartPos", true);
						ANIMSCENE::START_ANIM_SCENE(&(Local_926[12 /*6*/]));
						func_1433(iLocal_823, 3);
					}
				}
			}
			break;
		
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[12 /*6*/]), "Pl_IG13_JackPickYarrow");
			if (bLocal_164)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_605, 1.5f, -1, 0.25f, false, fLocal_608);
				bLocal_163 = true;
				func_1433(iLocal_823, 4);
			}
			break;
		
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 713668775, 0) == 8)
			{
				func_410(5);
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_301, &(Local_926[12 /*6*/]), "JackMarston", "Pl_IG13_JackPickYarrow", 1f, 1, 0, 20000, -1082130432);
				func_1433(iLocal_823, 5);
			}
			break;
		
		case 5:
			if (ANIMSCENE::_0xD8254CB2C586412B(&(Local_926[12 /*6*/]), 0) || ANIMSCENE::_0xCDC5512A407CF08D(&(Local_926[12 /*6*/])))
			{
				func_1412();
				func_334(1, 1);
				func_326(5);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_609, 1f, -1, 0.25f, false, fLocal_612);
				bLocal_163 = false;
				func_1433(iLocal_823, 6);
			}
			break;
		
		case 6:
			func_894(12);
			func_1433(iLocal_823, 8);
			break;
	}
}

void func_919(int iParam0, int iParam1)
{
	iLocal_803 = iParam1;
}

void func_920(int iParam0, int iParam1)
{
	if (&Global_1900073->f_184[iParam0] != iParam1)
	{
		Global_1900073->f_184[iParam0] = iParam1;
	}
}

int func_921(int iParam0)
{
	if (&Global_1900073->f_147[iParam0] == 1)
	{
		if (&Global_1900073->f_26[iParam0 /*30*/] >= 2 && &Global_1900073->f_26[iParam0 /*30*/] != 9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_922(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_923(int iParam0)
{
	return func_1323(iParam0, 32);
}

void func_924()
{
	func_908(0, 0);
	func_908(1, 0);
	func_908(2, 0);
	func_908(3, 0);
	func_920(0, 0);
	func_920(1, 0);
	func_920(2, 0);
	func_920(3, 0);
	func_1434(1, 0);
	func_1434(2, 0);
	func_1434(3, 0);
	func_344(0);
	func_345(0);
	func_1435(0);
	func_337(0);
	func_1436(1, 0);
	func_1436(2, 0);
	func_1436(3, 0);
	func_1437(0, 2048);
	func_1437(1, 2048);
	func_1437(2, 2048);
	func_1437(3, 2048);
	func_1438(0);
	func_1439(0);
	func_1440(0);
	func_1441(0);
	func_1442(0);
	func_339(0);
	func_340(0);
	func_1443(0);
	func_341(0);
	func_342(0);
	func_343(0);
	func_242(0);
	func_1444(0);
	func_1445();
	func_1446(0f, 0f, 0f);
	HUD::_0x160825DADF1B04B3();
	func_746(8);
	func_746(2048);
}

struct<8> func_925()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

int func_926()
{
	if (func_205() == -1 && func_146(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return 0;
}

bool func_927(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_928(int iParam0)
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

void func_929(int iParam0)
{
	func_338(1);
}

bool func_930(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_772(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_931(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_772(iParam0, &iVar0, &iVar1);
	func_1447(iVar0, iVar1);
}

void func_932(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	
	StringCopy(&cVar0, func_1448(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_688(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_933(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;
	
	StringCopy(&cVar0, func_1448(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_688(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

int func_934(int iParam0)
{
	if (func_1449(iParam0))
	{
		return 1;
	}
	if (func_1450() == iParam0)
	{
		return 1;
	}
	if (func_1451(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_935(int iParam0)
{
	if (!func_1452(iParam0))
	{
		return false;
	}
	return &Global_1327590->f_19574[iParam0 /*8*/] != -1;
}

var func_936()
{
	return UILOG::_UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE();
}

void func_937(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			func_1453(iParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_206(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

int func_938(int iParam0)
{
	if (func_205() != -1)
	{
		return 0;
	}
	if (!func_206(iParam0))
	{
		return 0;
	}
	return func_282(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_939(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_57(iParam0))
	{
		return;
	}
	if (func_282(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	iVar0 = func_1223(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

int func_940(int iParam0)
{
	int iVar0;
	
	if (func_593(iParam0))
	{
		return 0;
	}
	if (func_594(iParam0, 0))
	{
		func_1454(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_1454(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_941(int iParam0)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_48 == -1)
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_47 == 0)
	{
		return 1;
	}
	iVar0 = func_1455(iParam0);
	return func_1456(iVar0, 1);
}

bool func_942(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

var func_943(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

var func_944(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_945(int iParam0)
{
	if (func_110(iParam0) == 1)
	{
		return func_111(iParam0);
	}
	return -1;
}

void func_946(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

int func_947(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!bParam0 && func_1034(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_500(bParam0);
	return 1;
}

void func_948()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_521(iVar17))
		{
			iVar18 = func_1205(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_243(&(Global_1359489->f_55));
	if (func_596(1777191912, 1))
	{
		func_1457(1777191912, 1, 0);
	}
}

void func_949(int iParam0)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_1136(iParam0, (func_1135(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_950(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

bool func_951()
{
	return func_591() > 0;
}

void func_952(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1458(-1032423150, iParam1);
			break;
		
		case 18:
			func_1458(294066959, iParam1);
			func_1458(-1925639563, iParam1);
			func_1458(-378582304, iParam1);
			func_1458(-338306437, iParam1);
			break;
		
		case 20:
			func_1458(437270255, iParam1);
			break;
		
		case 2:
			func_1458(-304000413, iParam1);
			func_1458(-533612796, iParam1);
			func_1458(48036954, iParam1);
			break;
		
		case 23:
			func_1458(193108691, iParam1);
			func_1458(491732588, iParam1);
			func_1458(671962088, iParam1);
			func_1459(1);
			break;
		
		case 16:
			func_1458(-1836056650, iParam1);
			func_1458(-754657922, iParam1);
			func_1458(-1752355838, iParam1);
			func_1458(-1375324510, iParam1);
			break;
		
		case 59:
			func_1458(-514392105, iParam1);
			func_1458(-822060246, iParam1);
			if (func_1460(146))
			{
				func_1458(1372748575, iParam1);
			}
			func_1459(1);
			break;
		
		case 76:
			func_1458(1991352213, iParam1);
			if (func_1461() == 0)
			{
				func_1458(1852488616, iParam1);
			}
			else
			{
				func_1458(-9866350, iParam1);
			}
			break;
		
		case 44:
			func_1458(863852599, iParam1);
			func_1458(1228374935, iParam1);
			func_1458(1517889050, iParam1);
			func_1458(830657578, iParam1);
			func_1458(1901354958, iParam1);
			break;
		
		case 46:
			func_1458(-582805654, iParam1);
			func_1458(250378940, iParam1);
			func_1458(-2143265426, iParam1);
			break;
		
		case 17:
			func_1458(-941494139, iParam1);
			func_1458(1641489521, iParam1);
			break;
		
		case 19:
			func_1458(-1829423531, iParam1);
			func_1458(-1590504752, iParam1);
			func_1458(1357221321, iParam1);
			break;
		
		case 21:
			func_1458(-1037992610, iParam1);
			func_1458(-1286414399, iParam1);
			func_1459(0);
			break;
		
		case 15:
			func_1458(-1014460309, iParam1);
			func_1458(-1030502825, iParam1);
			break;
		
		case 33:
			func_1458(479388090, iParam1);
			func_1458(-1396342239, iParam1);
			func_1458(-619618632, iParam1);
			break;
		
		case 34:
			func_1458(1193561641, iParam1);
			break;
		
		case 64:
			func_1458(1363960851, iParam1);
			break;
		
		case 60:
			func_1458(-1232453926, iParam1);
			func_1458(-882833584, iParam1);
			break;
		
		case 73:
			func_1458(2023205767, iParam1);
			break;
		
		case 74:
			func_1458(-2135286513, iParam1);
			if (func_1461() == 0)
			{
				func_1458(33799444, iParam1);
			}
			else
			{
				func_1458(-161343203, iParam1);
			}
			break;
		
		case 8:
			func_1458(841639693, iParam1);
			func_1458(358952323, iParam1);
			break;
		
		case 36:
			func_1458(852538149, iParam1);
			func_1458(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1458(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1458(1116039310, iParam1);
			}
			break;
		
		case 27:
			func_1458(107633428, iParam1);
			func_1458(335902282, iParam1);
			func_1458(575673055, iParam1);
			func_1458(-425944207, iParam1);
			break;
		
		case 28:
			func_1458(-1941530250, iParam1);
			func_1458(1399269304, iParam1);
			func_1458(1839684664, iParam1);
			func_1458(923168503, iParam1);
			func_1458(-1485078322, iParam1);
			break;
		
		case 29:
			func_1458(574995900, iParam1);
			func_1458(-1691275407, iParam1);
			func_1458(-1725307861, iParam1);
			break;
		
		case 31:
			func_1458(-2108383238, iParam1);
			func_1458(-1321828931, iParam1);
			func_1458(-1632118592, iParam1);
			func_1458(334938948, iParam1);
			break;
		
		case 4:
			func_1458(115823701, iParam1);
			func_1458(-1896939736, iParam1);
			func_1458(-1830746356, iParam1);
			func_1458(-1235169781, iParam1);
			func_1459(0);
			break;
		
		case 6:
			func_1458(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1458(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1458(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1458(-384176140, iParam1);
			}
			break;
		
		case 25:
			func_1458(1056132658, iParam1);
			break;
		
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1458(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1458(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1458(-1374849484, iParam1);
			}
			break;
		
		case 48:
			func_1458(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1458(217772674, iParam1);
			}
			else
			{
				func_1458(2071798160, iParam1);
			}
			if (func_1462(51))
			{
				func_1458(-792802286, iParam1);
			}
			break;
		
		case 49:
			func_1458(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1458(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1458(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1458(1402120602, iParam1);
			}
			break;
		
		case 58:
			func_1458(-1661934591, iParam1);
			break;
		
		case 50:
			func_1458(-1713759426, iParam1);
			break;
		
		case 52:
			func_1458(-314799932, iParam1);
			func_1458(-462260432, iParam1);
			func_1458(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_1458(345256028, iParam1);
				func_1458(-1635084094, iParam1);
			}
			else
			{
				func_1458(114267347, iParam1);
			}
			break;
		
		case 32:
			func_1458(615304157, iParam1);
			break;
		
		case 47:
			func_1458(415434835, iParam1);
			break;
		
		case 69:
			func_1458(1373465877, iParam1);
			if (func_583(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_1458(-2058273527, iParam1);
			}
			break;
		
		case 70:
			func_1458(451334985, iParam1);
			if (func_1461() == 0)
			{
				func_1458(-224150200, iParam1);
			}
			else
			{
				func_1458(289012628, iParam1);
			}
			break;
		
		case 71:
			if (func_1461() == 0)
			{
				func_1458(-41692120, iParam1);
			}
			else
			{
				func_1458(1537840678, iParam1);
			}
			break;
		
		case 37:
			func_1458(1520478365, iParam1);
			break;
		
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1458(1842132550, iParam1);
			}
			else
			{
				func_1458(-785735240, iParam1);
			}
			func_1458(-1605690566, iParam1);
			break;
		
		case 13:
			func_1458(-731367459, iParam1);
			func_1458(224176585, iParam1);
			func_1458(-14545580, iParam1);
			break;
		
		case 53:
			func_1458(1095274522, iParam1);
			break;
		
		case 54:
			func_1458(-572027988, iParam1);
			break;
		
		case 56:
			func_1458(1339307101, iParam1);
			func_1458(2102267732, iParam1);
			break;
		
		case 57:
			func_1458(710102686, iParam1);
			break;
		
		case 22:
			func_1458(-1754368482, iParam1);
			func_1458(-2071408557, iParam1);
			break;
		
		case 12:
			func_1458(-181334543, iParam1);
			break;
		
		case 0:
			func_1458(-2134669864, iParam1);
			func_1458(-548289709, iParam1);
			func_1458(-911271922, iParam1);
			func_1458(-604455775, iParam1);
			break;
		
		case 1:
			func_1459(1);
			break;
		
		case 3:
			if (func_982())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_1458(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_1458(-1478534115, iParam1);
			}
			break;
		
		default:
			break;
	}
}

void func_953(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1458(-145926707, iParam1);
			func_1458(-604922090, iParam1);
			func_1458(-848690769, iParam1);
			break;
		
		case 1:
			func_1458(-1477631591, iParam1);
			break;
		
		case 2:
			func_1458(76112544, iParam1);
			break;
		
		case 9:
			func_1458(1396404308, iParam1);
			func_1458(-1357381228, iParam1);
			if (func_583(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_1458(1902679064, iParam1);
			}
			else
			{
				func_1458(-2146422425, iParam1);
			}
			break;
		
		case 22:
			func_1458(-1534761730, iParam1);
			break;
		
		case 26:
			if (bParam3 == 1)
			{
				func_1458(-1934184559, iParam1);
				func_1458(1281755988, iParam1);
			}
			else
			{
				func_1458(-1745220872, iParam1);
				func_1458(-1044976796, iParam1);
			}
			break;
		
		case 29:
			if (bParam3 == 1)
			{
				func_1458(-1641504538, iParam1);
				func_1458(-988014485, iParam1);
			}
			else if (func_1460(26))
			{
				func_1458(-343043950, iParam1);
				func_1458(-640062214, iParam1);
			}
			else
			{
				func_1458(-1272028496, iParam1);
			}
			break;
		
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1458(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1458(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1458(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1458(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1458(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1458(1301690984, iParam1);
				}
			}
			else
			{
				func_1458(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1458(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1458(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1458(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1458(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1458(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1458(-1868882771, iParam1);
				}
			}
			break;
		
		case 35:
			if (bParam3 == 1)
			{
				func_1458(-754570528, iParam1);
			}
			else
			{
				func_1458(1690083163, iParam1);
			}
			break;
		
		case 36:
			if (bParam3 == 1)
			{
				func_1458(-2072125821, iParam1);
			}
			else
			{
				func_1458(270040030, iParam1);
			}
			break;
		
		case 37:
			func_1458(-870030001, iParam1);
			break;
		
		case 53:
			if (bParam3 == 1)
			{
				func_1458(-505314737, iParam1);
				func_1458(-1853052860, iParam1);
			}
			else
			{
				func_1458(-1975624994, iParam1);
				func_1458(1648135852, iParam1);
			}
			break;
		
		case 54:
			if (bParam3 == 1)
			{
				func_1458(1690231002, iParam1);
			}
			else
			{
				func_1458(517031924, iParam1);
			}
			break;
		
		case 55:
			if (bParam3 == 1)
			{
				func_1458(1225386280, iParam1);
			}
			else if (func_1460(54))
			{
				func_1458(-283235773, iParam1);
			}
			else
			{
				func_1458(701962369, iParam1);
			}
			break;
		
		case 38:
			if (bParam3 == 1)
			{
				func_1458(1355398007, iParam1);
			}
			else
			{
				func_1458(-1900349467, iParam1);
			}
			break;
		
		case 39:
			if (bParam3 == 1)
			{
				func_1458(574636806, iParam1);
			}
			else
			{
				func_1458(-196256251, iParam1);
			}
			break;
		
		case 40:
			if (bParam3 == 1)
			{
				func_1458(821118338, iParam1);
			}
			else if (func_1460(39))
			{
				func_1458(846829260, iParam1);
			}
			else
			{
				func_1458(-1212247553, iParam1);
			}
			break;
		
		case 43:
			if (bParam3 == 1)
			{
				if (func_577(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_1458(1422779093, iParam1);
				}
				else
				{
					func_1458(-1769536986, iParam1);
				}
			}
			else
			{
				func_1458(-600786233, iParam1);
			}
			break;
		
		case 45:
			if (bParam3 == 1)
			{
				func_1458(352134789, iParam1);
			}
			else if (func_1460(43))
			{
				func_1458(260723113, iParam1);
			}
			else
			{
				func_1458(1080243038, iParam1);
			}
			break;
		
		case 41:
			if (bParam3 == 1)
			{
				func_1458(-457958799, iParam1);
			}
			else
			{
				func_1458(2076458086, iParam1);
			}
			break;
		
		case 42:
			if (func_1460(41))
			{
				func_1458(-546824600, iParam1);
			}
			else
			{
				func_1458(-308364587, iParam1);
			}
			break;
		
		case 49:
			if (bParam3 == 1)
			{
				func_1458(1297261593, iParam1);
			}
			else
			{
				func_1458(1940089142, iParam1);
			}
			break;
		
		case 50:
			if (bParam3 == 1)
			{
				func_1458(2068484886, iParam1);
			}
			else if (func_1460(49))
			{
				func_1458(-1489080639, iParam1);
				func_1458(-2102244050, iParam1);
			}
			else
			{
				func_1458(-1863040467, iParam1);
			}
			break;
		
		case 51:
			func_1458(-2055943209, iParam1);
			break;
		
		case 58:
			if (func_583(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_1458(1650066845, iParam1);
			}
			else
			{
				func_1458(151370023, iParam1);
			}
			func_1458(1426057961, iParam1);
			func_1458(476379584, iParam1);
			break;
		
		case 59:
			func_1458(-1638117866, iParam1);
			break;
		
		case 62:
			func_1458(199541730, iParam1);
			break;
		
		case 63:
			func_1458(1703485804, iParam1);
			func_1458(-800449045, iParam1);
			break;
		
		case 65:
			func_1458(-1678210868, iParam1);
			func_1458(-1448238026, iParam1);
			func_1458(-1200864845, iParam1);
			func_1458(1473511536, iParam1);
			break;
		
		case 66:
			func_1458(-1774490051, iParam1);
			func_1458(-34645921, iParam1);
			func_1458(174027075, iParam1);
			func_1458(-1155999, iParam1);
			func_1459(1);
			break;
		
		case 67:
			func_1458(701612593, iParam1);
			func_1458(-1069631343, iParam1);
			func_1458(1673428882, iParam1);
			break;
		
		case 68:
			func_1458(-739133286, iParam1);
			func_1458(-2130089358, iParam1);
			func_1458(2056190391, iParam1);
			func_1458(1941753817, iParam1);
			func_1459(0);
			break;
		
		case 70:
			func_1458(-1217555753, iParam1);
			break;
		
		case 71:
			func_1458(697048821, iParam1);
			break;
		
		case 73:
			func_1458(-553148661, iParam1);
			break;
		
		case 75:
			func_1458(1349250531, iParam1);
			break;
		
		case 77:
			if (bParam3 == 1)
			{
				func_1458(1414263863, iParam1);
			}
			else
			{
				func_1458(-1772294468, iParam1);
			}
			break;
		
		case 79:
			if (bParam3 == 1)
			{
				func_1458(1835465936, iParam1);
				func_1458(523715611, iParam1);
			}
			else if (func_1460(78))
			{
				func_1458(1420338873, iParam1);
			}
			else
			{
				func_1458(-46362051, iParam1);
			}
			break;
		
		case 80:
			if (bParam3 == 1)
			{
				func_1458(10180941, iParam1);
			}
			else if (func_1460(79))
			{
				func_1458(768420635, iParam1);
			}
			else
			{
				func_1458(-1734012650, iParam1);
			}
			break;
		
		case 85:
			if (bParam3 == 1)
			{
				func_1458(-383601523, iParam1);
			}
			else
			{
				func_1458(1004812390, iParam1);
			}
			break;
		
		case 86:
			if (bParam3 == 1)
			{
				func_1458(1606472408, iParam1);
			}
			else
			{
				func_1458(1405690220, iParam1);
			}
			break;
		
		case 87:
			if (bParam3 == 1)
			{
				func_1458(-203571927, iParam1);
			}
			else
			{
				func_1458(640033630, iParam1);
			}
			break;
		
		case 88:
			if (bParam3 == 1)
			{
				func_1458(729886222, iParam1);
			}
			else
			{
				func_1458(-158717807, iParam1);
			}
			break;
		
		case 89:
			if (bParam3 == 1)
			{
				func_1458(-714816362, iParam1);
			}
			else
			{
				func_1458(1160146336, iParam1);
			}
			break;
		
		case 92:
			if (bParam3 == 1)
			{
				func_1458(-932932179, iParam1);
				func_1458(-1458537240, iParam1);
			}
			else
			{
				func_1458(-1764383885, iParam1);
				func_1458(894349517, iParam1);
			}
			break;
		
		case 93:
			if (bParam3 == 1)
			{
				func_1458(1741466706, iParam1);
			}
			else
			{
				func_1458(1405815775, iParam1);
			}
			break;
		
		case 94:
			func_1458(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1458(1905280979, iParam1);
			}
			else
			{
				func_1458(-1966245299, iParam1);
			}
			func_1458(721468880, iParam1);
			break;
		
		case 99:
			func_1458(800644248, iParam1);
			break;
		
		case 101:
			if (bParam3 == 1)
			{
				func_1458(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1458(-1117781095, iParam1);
				}
				else
				{
					func_1458(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1458(141494548, iParam1);
			}
			else
			{
				func_1458(-633957459, iParam1);
			}
			break;
		
		case 102:
			if (bParam3 == 1)
			{
				func_1458(-369525697, iParam1);
			}
			else if (func_1460(101))
			{
				func_1458(1595015219, iParam1);
			}
			else
			{
				func_1458(-321486961, iParam1);
			}
			break;
		
		case 103:
			func_1458(1422724221, iParam1);
			break;
		
		case 104:
			if (bParam3 == 1)
			{
				func_1458(793460477, iParam1);
				func_1458(-1610242176, iParam1);
			}
			else if (func_1460(103))
			{
				func_1458(1830897187, iParam1);
			}
			else
			{
				func_1458(1419017828, iParam1);
			}
			break;
		
		case 105:
			if (bParam3 == 1)
			{
				func_1458(1528309077, iParam1);
			}
			else if (func_1460(104))
			{
				func_1458(1864966105, iParam1);
			}
			else
			{
				func_1458(-103336013, iParam1);
			}
			break;
		
		case 108:
			func_1458(1175579551, iParam1);
			break;
		
		case 109:
			if (bParam3 == 1)
			{
				func_1458(-1123227713, iParam1);
				func_1458(-889574341, iParam1);
			}
			else
			{
				func_1458(2065385917, iParam1);
				func_1458(780305039, iParam1);
			}
			break;
		
		case 110:
			if (bParam3 == 1)
			{
				func_1458(-887421691, iParam1);
			}
			else if (func_1460(109))
			{
				func_1458(-1318117949, iParam1);
			}
			else
			{
				func_1458(1632244327, iParam1);
			}
			break;
		
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1458(284822762, iParam1);
				}
				else
				{
					func_1458(-1425017554, iParam1);
				}
			}
			else if (func_1460(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1458(553087292, iParam1);
				}
				else
				{
					func_1458(-1766870331, iParam1);
					func_1458(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1458(-1980598735, iParam1);
			}
			else
			{
				func_1458(-442732098, iParam1);
				func_1458(1955756409, iParam1);
			}
			break;
		
		case 115:
			func_1458(394303528, iParam1);
			func_1458(-2040171028, iParam1);
			break;
		
		case 143:
			if (bParam3 == 1)
			{
				func_1458(1182403394, iParam1);
			}
			else
			{
				func_1458(-2116547899, iParam1);
			}
			break;
		
		case 144:
			if (bParam3 == 1)
			{
				func_1458(924445424, iParam1);
			}
			else
			{
				func_1458(1227062271, iParam1);
			}
			break;
		
		case 117:
			if (bParam3 == 1)
			{
				func_1458(430755273, iParam1);
				func_1458(-1473879802, iParam1);
			}
			else
			{
				func_1458(1121266049, iParam1);
			}
			break;
		
		case 118:
			if (bParam3 == 1)
			{
				func_1458(73885747, iParam1);
			}
			else if (func_1460(117))
			{
				func_1458(1559707913, iParam1);
			}
			else
			{
				func_1458(926897873, iParam1);
			}
			break;
		
		case 119:
			if (bParam3 == 1)
			{
				func_1458(-2103887972, iParam1);
			}
			else if (func_1460(118))
			{
				func_1458(-435828462, iParam1);
			}
			else
			{
				func_1458(-516020583, iParam1);
			}
			break;
		
		case 121:
			if (bParam3 == 1)
			{
				func_1458(2054486196, iParam1);
			}
			else
			{
				func_1458(1809320262, iParam1);
			}
			break;
		
		case 122:
			if (bParam3 == 1)
			{
				func_1458(-570086056, iParam1);
			}
			else if (func_1460(121))
			{
				func_1458(32337856, iParam1);
			}
			else
			{
				func_1458(-206811842, iParam1);
			}
			break;
		
		case 124:
			if (bParam3 == 1)
			{
				func_1458(813493663, iParam1);
			}
			else if (func_1460(122))
			{
				func_1458(-2132763590, iParam1);
			}
			else
			{
				func_1458(477901035, iParam1);
			}
			break;
		
		case 125:
			if (bParam3 == 1)
			{
				func_1458(-66240572, iParam1);
				func_1458(1563075046, iParam1);
			}
			else
			{
				func_1458(-787011772, iParam1);
				func_1458(-1523377438, iParam1);
			}
			break;
		
		case 127:
			func_1458(61020800, iParam1);
			break;
		
		case 129:
			func_1458(428985222, iParam1);
			break;
		
		case 131:
			func_1458(-1393851036, iParam1);
			break;
		
		case 133:
			func_1458(1559531342, iParam1);
			break;
		
		case 134:
			func_1458(-718846442, iParam1);
			break;
		
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1458(-1374407408, iParam1);
				}
				else
				{
					func_1458(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_1458(-472672138, iParam1);
				}
				else
				{
					func_1458(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1458(-1678710489, iParam1);
			}
			else
			{
				func_1458(1522210661, iParam1);
			}
			break;
		
		case 136:
			if (bParam3 == 1)
			{
				func_1458(1717582460, iParam1);
			}
			else
			{
				func_1458(343644664, iParam1);
			}
			break;
		
		case 137:
			if (bParam3 == 1)
			{
				func_1458(1568112362, iParam1);
				func_1458(1388317526, iParam1);
			}
			else if (func_1460(136))
			{
				func_1458(-1597534828, iParam1);
				func_1458(-1207918353, iParam1);
			}
			else
			{
				func_1458(-1940891082, iParam1);
				func_1458(-598277294, iParam1);
			}
			break;
		
		case 142:
			if (iParam2 == 1)
			{
				func_1458(448334530, iParam1);
				func_1458(2145375502, iParam1);
			}
			else
			{
				func_1458(-1891994685, iParam1);
			}
			break;
		
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1458(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1458(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1458(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1458(848633571, iParam1);
			}
			break;
		
		case 147:
			if (bParam3 == 1)
			{
				func_1458(-66616327, iParam1);
			}
			else
			{
				func_1458(1978361607, iParam1);
			}
			break;
		
		case 148:
			if (bParam3 == 1)
			{
				func_1458(1862916706, iParam1);
			}
			else if (func_1460(147))
			{
				func_1458(675105199, iParam1);
			}
			else
			{
				func_1458(-1993800776, iParam1);
			}
			break;
		
		case 149:
			if (bParam3 == 1)
			{
				func_1458(174409701, iParam1);
			}
			else if (func_1460(148))
			{
				func_1458(-1730895475, iParam1);
			}
			else
			{
				func_1458(-342396910, iParam1);
			}
			break;
		
		case 150:
			if (bParam3 == 1)
			{
				func_1458(1295237052, iParam1);
			}
			else if (func_1460(149))
			{
				func_1458(-788577684, iParam1);
			}
			else
			{
				func_1458(1527015024, iParam1);
			}
			break;
		
		default:
			break;
	}
}

int func_954(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_110(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_945(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				
				case 1:
					return -694047360;
				
				case 2:
					return -757336127;
				
				case 3:
					return -164763388;
				
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				
				case 5:
					return 2030928096;
				
				case 6:
					return -332258016;
				
				case 10:
					return 1817180056;
				
				case 13:
					return 545240164;
				
				case 15:
					return 1141344854;
				
				case 8:
					return 1796786552;
				
				case 25:
					return 1783253542;
				
				case 14:
					return -2129915369;
				
				case 7:
					return -1393633441;
				
				case 9:
					if (func_577(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				
				case 11:
					return 278608719;
				
				case 12:
					return -561040434;
				
				case 16:
					return 95619635;
				
				case 17:
					return 1185998732;
				
				case 53:
					return -221923309;
				
				case 18:
					return -620369863;
				
				case 19:
					return -1738185394;
				
				case 20:
					return -637873918;
				
				case 22:
					return 561912024;
				
				case 23:
					return 951007010;
				
				case 24:
					return -1512720465;
				
				case 21:
					return 920901415;
				
				case 26:
					return -1664107227;
				
				case 27:
					return -1934704933;
				
				case 28:
					return -582523927;
				
				case 29:
					return -259827569;
				
				case 30:
					return -1633236438;
				
				case 31:
					return -1396074730;
				
				case 32:
					return -248683070;
				
				case 33:
					return 1454698172;
				
				case 34:
					return -1548165899;
				
				case 35:
					return -1486701482;
				
				case 36:
					return 1249990864;
				
				case 37:
					return -164125056;
				
				case 38:
					return -1198456774;
				
				case 39:
					return -820014425;
				
				case 40:
					return -2071373019;
				
				case 41:
					return -162152912;
				
				case 42:
					return -532430534;
				
				case 43:
					return -695655810;
				
				case 44:
					return -1238376790;
				
				case 45:
					return 1927460276;
				
				case 46:
					return 1824331150;
				
				case 47:
					return 1888528254;
				
				case 48:
					return 1971155641;
				
				case 49:
					return -1757085331;
				
				case 50:
					return 1264235360;
				
				case 51:
					return 1157034909;
				
				case 52:
					return 512067206;
				
				case 54:
					return -258855820;
				
				case 55:
					return 2143139308;
				
				case 56:
					return -18183703;
				
				case 57:
					return 692218123;
				
				case 58:
					return 127002552;
				
				case 59:
					return 1769573516;
				
				case 60:
					return 501194998;
				
				case 61:
					return -219249641;
				
				case 62:
					return 1935952956;
				
				case 63:
					return 121222228;
				
				case 64:
					return -1381943684;
				
				case 65:
					return -1417145007;
				
				case 66:
					return -314300362;
				
				case 67:
					return -445710060;
				
				case 68:
					return 122725574;
				
				case 69:
					return -935212592;
				
				case 70:
					return -597010176;
				
				case 71:
					return 534386033;
				
				case 72:
					return -330340613;
				
				case 73:
					return 1425403638;
				
				case 74:
					return 124507607;
				
				case 75:
					return 747937920;
				
				case 76:
					return 1636680094;
			}
			break;
		
		case 8:
			iVar2 = func_111(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				
				case 0:
					return -172442174;
				
				case 63:
					return 569547151;
				
				case 97:
					return 1150653348;
				
				case 98:
					return -2075517304;
				
				case 94:
					return -1048889581;
				
				case 59:
					return 2137967386;
				
				case 61:
					return -1955429862;
				
				case 62:
					return 1899640864;
				
				case 112:
					return 1469701481;
				
				case 113:
					return -954047483;
				
				case 114:
					return -1868521635;
				
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				
				case 76:
					return 281905065;
				
				case 134:
					return 1132574871;
				
				case 3:
					return 709886296;
				
				case 5:
					return -1646431667;
				
				case 21:
					return 2143106360;
				
				case 37:
					return 1073595144;
				
				case 138:
					return -1582252733;
				
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				
				case 106:
					return 195634974;
				
				case 107:
					return 1508162848;
				
				case 115:
					return -1971110347;
				
				case 116:
					return 446631778;
				
				case 22:
					return 1909655985;
				
				case 23:
					return -303175962;
				
				case 82:
					return 437096661;
				
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				
				case 140:
					return 1593516439;
				
				case 142:
					return 1234351222;
				
				case 58:
					return -1988547710;
				
				case 64:
					return 98434060;
				
				case 65:
					return 1937922313;
				
				case 108:
					return -713369135;
				
				case 8:
					return -1538781541;
				
				case 10:
					return -925475803;
				
				case 2:
					return -1479860879;
				
				case 96:
					return -1025265051;
				
				case 52:
					return -270246276;
				
				default:
					break;
			}
			break;
		
		case 11:
			iVar3 = func_111(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				
				case -1220302226:
					return 703663141;
				
				case -839878969:
					return 1534808110;
				
				case -360730635:
					return -742985447;
				
				case 687859577:
					return -331451824;
				
				case 1202375449:
					return 1344816618;
				
				case -1891229662:
					return 597768834;
				
				case -668333238:
					return -120359954;
				
				case 99378894:
					return -290258665;
				
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_955(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_1463(iParam0);
	uVar3 = func_1464(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_459();
				func_978(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_1465(iParam0, 1);
			if (func_1466(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_1467(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1468(1, iParam0);
				}
				else
				{
					func_1469(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_956(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		
		case 76:
			*uParam1 = 35;
			return 70;
		
		case 70:
			*uParam1 = 35;
			return 70;
		
		case 73:
			*uParam1 = 35;
			return 70;
		
		case 19:
			*uParam1 = 25;
			return 50;
		
		case 21:
			*uParam1 = 35;
			return 70;
		
		case 60:
			*uParam1 = 35;
			return 70;
		
		case 61:
			*uParam1 = 35;
			return 70;
		
		case 62:
			*uParam1 = 35;
			return 70;
		
		case 63:
			*uParam1 = 35;
			return 70;
		
		case 64:
			*uParam1 = 35;
			return 70;
		
		case 65:
			*uParam1 = 35;
			return 70;
		
		case 66:
			*uParam1 = 35;
			return 70;
		
		case 67:
			*uParam1 = 35;
			return 70;
		
		case 32:
			*uParam1 = 35;
			return 70;
		
		case 48:
			*uParam1 = 35;
			return 70;
		
		case 49:
			*uParam1 = 35;
			return 70;
		
		case 47:
			*uParam1 = 30;
			return 60;
		
		case 58:
			*uParam1 = 30;
			return 60;
		
		case 27:
			*uParam1 = 30;
			return 60;
		
		case 29:
			*uParam1 = 40;
			return 100;
		
		case 30:
			*uParam1 = 50;
			return 100;
		
		case 33:
			*uParam1 = 30;
			return 60;
		
		case 23:
			*uParam1 = 30;
			return 60;
		
		case 10:
			*uParam1 = 30;
			return 60;
		
		case 5:
			*uParam1 = 45;
			return 60;
		
		case 11:
			*uParam1 = 35;
			return 70;
		
		case 9:
			*uParam1 = 45;
			return 70;
		
		case 15:
			*uParam1 = 15;
			return 35;
		
		case 35:
			*uParam1 = 50;
			return 70;
		
		case 8:
			*uParam1 = 50;
			return 100;
		
		case 36:
			*uParam1 = 40;
			return 80;
		
		case 22:
			*uParam1 = 25;
			return 45;
		
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_957(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_958(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		
		case 60:
			*iParam1 = 0;
			return 0;
		
		case 74:
			*iParam1 = 45;
			return 75;
		
		case 119:
			*iParam1 = 45;
			return 75;
		
		case 84:
			*iParam1 = 45;
			return 75;
		
		case 85:
			*iParam1 = 45;
			return 75;
		
		case 106:
			*iParam1 = 20;
			return 35;
		
		case 107:
			*iParam1 = 20;
			return 35;
		
		case 8:
			*iParam1 = 45;
			return 75;
		
		case 9:
			*iParam1 = 45;
			return 75;
		
		case 10:
			*iParam1 = 45;
			return 75;
		
		case 98:
			*iParam1 = 30;
			return 50;
		
		case 82:
			*iParam1 = 30;
			return 50;
		
		case 83:
			*iParam1 = 30;
			return 50;
		
		case 99:
			*iParam1 = 30;
			return 50;
		
		case 138:
			*iParam1 = 30;
			return 50;
		
		case 139:
			*iParam1 = 30;
			return 50;
		
		case 140:
			*iParam1 = 30;
			return 50;
		
		case 141:
			*iParam1 = 30;
			return 50;
		
		case 142:
			*iParam1 = 30;
			return 50;
		
		case 21:
			*iParam1 = 30;
			return 50;
		
		case 136:
			*iParam1 = 30;
			return 50;
		
		case 137:
			*iParam1 = 40;
			return 80;
		
		case 124:
			*iParam1 = 30;
			return 50;
		
		case 125:
			*iParam1 = 30;
			return 50;
		
		case 127:
			*iParam1 = 30;
			return 50;
		
		case 128:
			*iParam1 = 30;
			return 50;
		
		case 131:
			*iParam1 = 30;
			return 50;
		
		case 133:
			*iParam1 = 30;
			return 50;
		
		case 105:
			*iParam1 = 30;
			return 50;
		
		case 89:
			*iParam1 = 30;
			return 50;
		
		case 93:
			*iParam1 = 30;
			return 50;
		
		case 75:
			*iParam1 = 30;
			return 50;
		
		case 5:
			*iParam1 = 50;
			return 100;
		
		case 6:
			*iParam1 = 30;
			return 50;
		
		case 77:
			*iParam1 = 30;
			return 50;
		
		case 78:
			*iParam1 = 30;
			return 50;
		
		case 30:
			*iParam1 = 30;
			return 50;
		
		case 31:
			*iParam1 = 30;
			return 50;
		
		case 32:
			*iParam1 = 30;
			return 50;
		
		case 33:
			*iParam1 = 30;
			return 50;
		
		case 34:
			*iParam1 = 30;
			return 50;
		
		case 35:
			*iParam1 = 30;
			return 50;
		
		case 36:
			*iParam1 = 30;
			return 50;
		
		case 24:
			*iParam1 = 30;
			return 50;
		
		case 25:
			*iParam1 = 30;
			return 50;
		
		case 26:
			*iParam1 = 30;
			return 50;
		
		case 27:
			*iParam1 = 30;
			return 50;
		
		case 28:
			*iParam1 = 30;
			return 50;
		
		case 66:
			*iParam1 = 30;
			return 50;
		
		case 67:
			*iParam1 = 50;
			return 100;
		
		case 146:
			*iParam1 = 30;
			return 50;
		
		case 38:
			*iParam1 = 30;
			return 45;
		
		case 39:
			*iParam1 = 30;
			return 45;
		
		case 40:
			*iParam1 = 30;
			return 45;
		
		case 41:
			*iParam1 = 30;
			return 45;
		
		case 42:
			*iParam1 = 30;
			return 45;
		
		case 43:
			*iParam1 = 30;
			return 45;
		
		case 44:
			*iParam1 = 30;
			return 45;
		
		case 45:
			*iParam1 = 30;
			return 45;
		
		case 46:
			*iParam1 = 30;
			return 45;
		
		case 47:
			*iParam1 = 30;
			return 45;
		
		case 48:
			*iParam1 = 30;
			return 45;
		
		case 49:
			*iParam1 = 30;
			return 45;
		
		case 50:
			*iParam1 = 30;
			return 45;
		
		case 51:
			*iParam1 = 30;
			return 45;
		
		case 112:
			*iParam1 = 10;
			return 20;
		
		case 113:
			*iParam1 = 25;
			return 45;
		
		case 114:
			*iParam1 = 10;
			return 20;
		
		case 59:
			*iParam1 = 15;
			return 35;
		
		case 61:
			*iParam1 = 15;
			return 35;
		
		case 97:
			*iParam1 = 15;
			return 35;
		
		case 94:
			*iParam1 = 20;
			return 30;
		
		case 0:
			*iParam1 = 45;
			return 75;
		
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_960(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_205() != -1)
	{
		return;
	}
	if ((Global_36615 && func_1470(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1471(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1472(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_1473(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1472(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_961(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

int func_962()
{
	if (func_205() != -1)
	{
		return 0;
	}
	if (!func_1474())
	{
		return 0;
	}
	if (!func_583(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_583(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_583(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_583(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_583(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_583(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_583(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_583(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_583(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_583(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_583(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_583(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_583(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_583(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_583(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_583(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_583(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_583(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_583(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_583(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_583(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_583(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_963()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_964(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	if (!func_1477(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1478(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1479(iParam0, bParam2);
	iVar2 = 0;
	if (func_1401(iParam0, 0, 0) == 0)
	{
		if (func_1480(iParam0))
		{
			iVar5 = func_1481(iParam0);
			iVar6 = func_1482(iVar5);
			iVar7 = func_1483(iVar6) + 1;
			func_1484(iVar5);
			if (func_1485(38))
			{
				func_365(483, 0);
			}
			else
			{
				func_365(482, 0);
			}
			if (iVar7 == func_1486(iVar6))
			{
				func_964(func_1487(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_1474() && func_1488(4))
				{
					if (func_1474() && (func_1489(38) || func_1485(38)))
					{
						func_1491(38, func_1487(iVar6), 0, 0, func_1490(), 0, -1, 0);
						func_1492(2);
					}
					else
					{
						func_1491(38, func_1487(iVar6), 0, 0, func_1490(), 0, -1, 0);
						func_1492(1);
					}
				}
			}
			else if (func_1474() && func_1488(4))
			{
				if (func_1474() && (func_1489(38) || func_1485(38)))
				{
					func_1491(38, 0, 0, 0, func_1490(), 0, -1, 0);
					func_1492(2);
				}
				else
				{
					func_1491(38, 0, 0, 0, func_1490(), 0, -1, 0);
					func_1492(1);
				}
			}
			if (func_1474() && func_1488(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_1474() && (func_1489(38) || func_1485(38)))
					{
						func_1493(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1493(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_1494(iParam0) == -1037537535)
	{
		if ((!func_1495(iParam0, 866047851) && !func_1495(iParam0, -1979000645)) && !func_1495(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1496(iParam0, 8388608) && !func_1497(28))
	{
		func_1498(28);
	}
	if (!bVar3)
	{
		if (func_1495(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_1499(iParam0) == -1447088266)
			{
				iVar1 = func_1501(func_1500(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_205() == -1)
					{
						func_670(iVar1);
					}
					if (func_1502(0) && func_1151(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1503(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_205() == -1)
					{
						func_670(iParam0);
					}
					if (func_1502(0) && func_1151(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1503(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_1494(iParam0) == -427144552)
		{
			if (!func_1504(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1494(iParam0) == 307971639 && func_1505(iParam0))
		{
			if (!func_1506(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1495(iParam0, 866047851))
		{
			func_1507(iParam0);
		}
		else if (func_1495(iParam0, 2000026003))
		{
			func_1508(iParam0);
		}
		else if (func_1495(iParam0, -103750053))
		{
			func_905(func_904(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_905(func_1215(-717883113, 2091222383), iVar0);
		}
		else if (func_1495(iParam0, -121341956) && !func_1495(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_365(498, 0);
				}
			}
			if (func_1495(iParam0, -2017733358) || func_1495(iParam0, -1369131378))
			{
				func_1509(iParam0);
			}
		}
		else if (func_1495(iParam0, -136654233))
		{
			if (func_1495(iParam0, -1021472396))
			{
			}
		}
		else if (func_1495(iParam0, -1466706512) && func_1495(iParam0, 1147021565))
		{
			func_365(484, 0);
		}
		else if (func_1495(iParam0, 1147021565) && func_1495(iParam0, -524514947))
		{
		}
		else if (func_1495(iParam0, 554195525))
		{
		}
		else if (func_1495(iParam0, 589988438))
		{
			if (func_1510())
			{
				func_1511(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1495(iParam0, 787083290) && func_1495(iParam0, 949916894))
		{
			func_1512(iParam0);
		}
		else if (func_1495(iParam0, -1718133314))
		{
			func_1513(iParam0);
		}
		else if (func_1495(iParam0, -1738650224))
		{
			func_1514(iParam0);
		}
		else if (func_1495(iParam0, -1112814642) && func_1495(iParam0, 949916894))
		{
			func_1515(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_1495(iParam0, 1841149704))
		{
			func_1516();
		}
		else if (func_1495(iParam0, 606799272))
		{
			func_1517(iParam0, iParam1);
			func_1518(iParam0);
		}
		else if (func_1495(iParam0, -1112814642) && func_1495(iParam0, -1697809989))
		{
			func_1519(iParam0, 0, 0, 0);
		}
		else if (func_1495(iParam0, -2017733358) || func_1495(iParam0, -1369131378))
		{
			func_1509(iParam0);
		}
		else if (func_1495(iParam0, -1921346699))
		{
			if (func_205() != -1)
			{
				return 0;
			}
			func_1520(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_1495(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_990(215778062, 1, 0))
					{
						func_964(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1334018438:
					if (!func_990(670273567, 1, 0))
					{
						func_964(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1055480217:
					if (!func_990(-967317137, 1, 0))
					{
						func_964(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -978159653:
					if (!func_990(526074061, 1, 0))
					{
						func_964(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 2100131425:
					if (!func_990(-1045488665, 1, 0))
					{
						func_964(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -2041382104:
					if (!func_990(471514780, 1, 0))
					{
						func_964(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1495(iParam0, -839724752) && func_1496(iParam0, 4))
		{
			if (!func_1485(42))
			{
				func_1521(iParam0);
			}
		}
		else if (func_1495(iParam0, 1399091007))
		{
			func_1522(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_1495(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_964(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case -1185145312:
				func_1498(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_1265(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1523(&iVar9, 0))
				{
					func_1151(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			
			case 1171350303:
				if (func_205() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_1265(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			
			case -160924582:
				break;
			
			case 2131771850:
				func_365(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1524();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1525();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1526();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1527();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_1148();
				break;
			
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			
			case -1937935584:
				func_1528(499813453, 854119837, 0);
				func_1529(499813453, 0);
				func_1530(1);
				break;
			
			case 2127812557:
				func_1528(499813453, -1292544588, 0);
				func_1529(499813453, 0);
				func_1530(2);
				break;
			
			case 808991383:
				func_1528(499813453, -1003325394, 0);
				func_1529(499813453, 0);
				func_1530(4);
				break;
			
			case 1134518629:
				func_1528(666607663, -335460405, 0);
				func_1529(666607663, 0);
				func_1531(1);
				break;
			
			case 902940106:
				func_1528(666607663, 903797617, 0);
				func_1529(666607663, 0);
				func_1531(2);
				break;
			
			case -418174898:
				func_1528(666607663, 669728650, 0);
				func_1529(666607663, 0);
				func_1531(4);
				break;
			
			case -648114971:
				func_1528(-220219788, 1214120047, 0);
				func_1529(-220219788, 0);
				func_1532(1);
				break;
			
			case 211153747:
				func_1528(-220219788, 655769340, 0);
				func_1529(-220219788, 0);
				func_1532(2);
				break;
			
			case -32876996:
				func_1528(-220219788, 885316185, 0);
				func_1529(-220219788, 0);
				func_1532(4);
				break;
			
			case 1191437462:
				func_1528(218622660, -1491419385, 0);
				func_1529(218622660, 0);
				func_1533(1);
				break;
			
			case 1119149048:
				func_1528(218622660, 1809565830, 0);
				func_1529(218622660, 0);
				func_1533(2);
				break;
			
			case 506073827:
				func_1528(390004462, -628873767, 0);
				func_1529(390004462, 0);
				func_1534(1);
				break;
			
			case -1876986168:
				func_1528(390004462, -405421956, 0);
				func_1529(390004462, 0);
				func_1534(2);
				break;
			
			case 2142623221:
				func_1528(390004462, -1108972386, 0);
				func_1529(390004462, 0);
				func_1534(4);
				break;
			
			case 1508215381:
				func_1528(6410548, 1053716392, 0);
				func_1529(6410548, 0);
				func_1535(1);
				break;
			
			case -888935280:
				func_1528(6410548, 806507056, 0);
				func_1529(6410548, 0);
				func_1535(2);
				break;
			
			case -1252474566:
				func_1528(6410548, 1571925350, 0);
				func_1529(6410548, 0);
				func_1535(4);
				break;
			
			case -1465702449:
				func_1528(6410548, 1330352282, 0);
				func_1529(6410548, 0);
				func_1535(8);
				break;
			
			case -21093309:
				func_1537(242, func_1536(-21093309), 0);
				break;
			
			case 204375141:
				func_1537(240, func_1536(204375141), 0);
				break;
			
			case -417963070:
				func_1537(241, func_1536(-417963070), 0);
				break;
			
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1538(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1538(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1538(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1538(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1538(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1538(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 80178851:
				func_365(488, 0);
				break;
			
			case 1613651027:
				func_365(491, 0);
				break;
			
			case -885810591:
				func_365(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_964(func_1539(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_964(func_1540(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			
			case -601932535:
				if (func_1497(1))
				{
					func_365(487, 0);
				}
				break;
			
			case -898386032:
				func_365(486, 0);
				break;
			
			case -2035110427:
				if (func_205() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			
			case 1510719693:
				func_365(496, 0);
				break;
			
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_1541(&iVar10);
		if (!func_1542(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_1502(0))
		{
			return 1;
		}
		if (func_1494(iParam0) == -1037537535)
		{
			func_1543(iParam0);
		}
		if (func_1495(iParam0, -1979000645))
		{
			func_1544(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_1502(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_964(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1545(iVar2, 0);
		}
	}
	Var35 = { func_1546(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_1547(iParam0);
	if (sParam6 > 0f)
	{
		if (func_1495(iParam0, -839724752))
		{
			func_1548(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_1549(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_965(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (func_1495(iParam0, 1989861793))
	{
		iVar0 = func_1550(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1551(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1552(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1553(iVar14, iVar1);
					if (iVar15 != iParam0 && func_1476(iVar15, 0))
					{
						if (func_1554(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1555(iVar1);
				if (bVar13)
				{
					func_1556(iParam0);
				}
				else
				{
					func_365(306, 0);
				}
			}
		}
	}
}

void func_966()
{
	if (func_205() != -1)
	{
		return;
	}
	func_1557();
	func_1558();
	func_1559();
	func_1560();
	func_1561();
	func_1562();
	func_1563();
}

void func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	
	func_1214(iParam0, 1, 1, -142743235, 1);
	if (func_1564(iParam0))
	{
		func_1565(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_1567(func_1566(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1568(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_1569() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1570(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1570(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_1571(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_1571(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_1571(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_1571(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_1571(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_1571(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_1571(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_1571(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_1571(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1572(iVar8, iVar0))
				{
					func_1573(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1572(iVar8, iVar0))
		{
			func_1573(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_968()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1572(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_1569() == -2125499975 || func_1569() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1573(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1573(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_969()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_970(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		
		case 1:
			return "COMP_JOHN";
		
		case 2:
			return "COMP_JAVIER";
		
		case 3:
			return "COMP_BILL";
		
		case 4:
			return "COMP_UNCLE";
		
		case 5:
			return "COMP_HOSEA";
		
		case 6:
			return "COMP_MICAH";
		
		case 7:
			return "COMP_CHARLES";
		
		case 8:
			return "COMP_SEAN";
		
		case 9:
			return "COMP_LENNY";
		
		case 10:
			return "COMP_KIERAN";
		
		case 23:
			return "COMP_TRELAWNY";
		
		case 17:
			return "COMP_PEARSON";
		
		case 18:
			return "COMP_STRAUSS";
		
		case 13:
			return "COMP_ABIGAIL";
		
		case 14:
			return "COMP_JACK";
		
		case 16:
			return "COMP_MOLLY_OSHEA";
		
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		
		case 15:
			return "COMP_MARY_BETH";
		
		case 20:
			return "COMP_KAREN";
		
		case 22:
			return "COMP_TILLY";
		
		case 11:
			return "COMP_SADIE";
		
		case 24:
			return "COMP_CLEET";
		
		case 25:
			return "COMP_JOE";
		
		case 26:
			return "COMP_EAGLE_FLIES";
		
		case 12:
			if ((func_583(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_583(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_174(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_596(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_971(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1567(iParam0, 1);
	func_1574(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_1574(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_1575(17, iParam0, 0, 0, 0);
		}
	}
	if (func_205() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1574((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1574((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_972()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_973()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_974(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1576(iParam1, 1, 0) };
		iParam3 = func_1577(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1578(iParam3);
	return func_1265(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_975()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_976(int iParam0)
{
	int iVar0;
	
	if (!func_568(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_977(int iParam0, int iParam1)
{
	if (!func_1579(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1580(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_1581(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_978(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_714(*iParam0);
	iVar1 = func_713(*iParam0);
	iVar2 = func_712(*iParam0);
	iVar3 = func_708(*iParam0);
	iVar4 = func_715(*iParam0);
	iVar5 = func_716(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1582(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1582(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1583(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_979(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1579(iParam0))
	{
		return;
	}
	if (!func_1584(iParam1))
	{
		return;
	}
	if (func_1456(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1580(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_977(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1585(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_146(0, 0, 1))
		{
			func_1007(0, 17);
		}
	}
}

void func_980()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_981()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_982()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_983()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_984()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_985()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_986()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_987()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_988()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_989(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_990(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1476(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1494(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_1586(iParam0, 1))
		{
			return false;
		}
	}
	return func_1401(iParam0, 0, bParam2) >= iParam1;
}

void func_991(int iParam0)
{
	if (func_60(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1587(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1587(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_992()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_993()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_994()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_995()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_996()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1475(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_997()
{
	if (func_1588() > 1)
	{
		func_1589();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_365(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_365(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_365(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_365(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_365(452, 1);
		}
	}
}

bool func_998(int iParam0)
{
	return func_598(iParam0, 4, 1);
}

void func_999(int iParam0)
{
	func_1190(iParam0, 4, 1);
}

void func_1000(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_950(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_1001(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(32768))
	{
		return;
	}
	if (!func_57(iParam0))
	{
		return;
	}
	func_285(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_110(iParam0))
	{
		case 1:
			func_905(func_1215(909007663, -587839005), 1);
			iVar0 = func_111(iParam0);
			func_905(func_950(-634848880), 1);
			switch (func_1046(iVar0))
			{
				case 0:
					func_905(func_1215(909007663, 1325140787), 1);
					break;
				
				case 1:
					func_905(func_1215(909007663, 2101241783), 1);
					break;
				
				case 2:
					func_905(func_1215(909007663, -1296936294), 1);
					break;
				
				case 3:
					func_905(func_1215(909007663, -798388728), 1);
					break;
				
				case 4:
					func_905(func_1215(909007663, -1787586531), 1);
					break;
				
				case 5:
					func_905(func_1215(909007663, -1002834519), 1);
					break;
				
				case 6:
					func_905(func_1215(909007663, -50600144), 1);
					break;
				
				case 7:
					func_905(func_1215(909007663, -348503123), 1);
					break;
				
				case 8:
					func_905(func_1215(909007663, -528798161), 1);
					break;
				
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_905(func_1215(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_905(func_1215(909007663, 532323983), 1);
			}
			break;
		
		case 8:
			iVar1 = func_111(iParam0);
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_905(func_950(-634848880), 1);
			}
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_905(func_1215(909007663, -587839005), 1);
				}
				else
				{
					func_905(func_1215(909007663, -2049243343), 1);
				}
			}
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_1047(iVar1))
				{
					case 0:
						func_905(func_1215(909007663, 1325140787), 1);
						break;
					
					case 1:
						func_905(func_1215(909007663, 2101241783), 1);
						break;
					
					case 2:
						func_905(func_1215(909007663, -1296936294), 1);
						break;
					
					case 3:
						func_905(func_1215(909007663, -798388728), 1);
						break;
					
					case 4:
						func_905(func_1215(909007663, -1787586531), 1);
						break;
					
					case 5:
						func_905(func_1215(909007663, -1002834519), 1);
						break;
					
					case 6:
						func_905(func_1215(909007663, -50600144), 1);
						break;
					
					case 7:
						func_905(func_1215(909007663, -348503123), 1);
						break;
					
					case 8:
						func_905(func_1215(909007663, -528798161), 1);
						break;
					
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_905(func_1215(909007663, 532323983), 1);
				}
			}
			else if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_905(func_1215(909007663, 551192206), 1);
				}
				else
				{
					func_905(func_1215(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_1002()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_205() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_83(64))
	{
		return;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_146(0, 0, 1) || func_1590()) || func_962())
	{
		return;
	}
	iVar0 = func_531();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1591(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_943(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_943(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1592(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_1007(0, -1);
	}
	if (iVar2 > 0)
	{
		func_422("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1593(1, 0);
	Global_1956575->f_2 = 1;
}

void func_1003(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_60(32768))
	{
		return;
	}
	func_1594(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1595(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_1004(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1596(iParam0))
	{
		return 0;
	}
	if (!func_1474())
	{
		return 0;
	}
	if (!func_1597(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_1005(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1598(1330954593, 0, -1);
		
		case 1:
			return func_1598(1330954593, 0, -1);
		
		case 2:
			return func_1598(1330954593, 0, -1) * 2;
		
		case 4:
			return func_1598(1330954593, 0, -1);
		
		case 5:
			return func_1598(1330954593, 0, -1);
		
		case 6:
			return func_1598(1330954593, 0, -1) * 2;
		
		case 12:
			return 75000;
		
		case 8:
			return func_1598(1330954593, 0, -1) * 3;
		
		case 9:
			return func_1598(1330954593, 0, -1) * 3;
		
		case 10:
			return func_1598(1330954593, 0, -1) * 3;
		
		case 11:
			return func_1598(1330954593, 0, -1);
		
		default:
			break;
	}
	return 0;
}

void func_1006(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_1879514->f_11)
	{
		iVar0 = func_1008();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_110(Global_1879514->f_1) == 1)
			{
				func_1004(5, 1);
			}
			else if (func_110(Global_1879514->f_1) == 8 && (func_31(((*Global_1347702)[func_111(Global_1879514->f_1) /*49*/])->f_12, 1) || func_31(((*Global_1347702)[func_111(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_1004(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_1007(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_662(&Global_0, 8);
	}
	if (!func_1474() || func_205() != -1)
	{
		return;
	}
	func_662(&Global_0, 1);
}

int func_1008()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1599(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1600(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

Vector3 func_1009(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	
	fVar2 = 9999999f;
	func_1601(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1602() == 0 && !func_1603(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1604(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_1605();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_1606(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1607(iVar0, iVar1) };
			bVar11 = func_1608(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_257(vVar7)) && func_1609(iVar0, uParam8, iParam12)) && !func_1610(iVar0)) || bVar11)
			{
				if (func_1611(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

void func_1010()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_1011()
{
}

void func_1012()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_1013()
{
	if (func_205() != -1)
	{
		return;
	}
	if (!func_1474())
	{
		return;
	}
	func_1612(&(Global_40.f_40));
}

void func_1014()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

bool func_1015()
{
	return !func_257(Global_1310720->f_1);
}

int func_1016()
{
	return Global_40.f_4283.f_4;
}

void func_1017(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1613())
	{
		fVar0 = func_1614(vParam0, Global_40.f_6);
	}
	if (func_1615(33554432))
	{
		if (!func_740(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1614(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

void func_1018()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	
	if (!func_90(&Global_1935630, 8192))
	{
		return;
	}
	if (func_60(32768))
	{
		return;
	}
	func_125(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_743(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_743(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_743(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_743(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_743(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_743(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_743(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_743(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_743(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1616(10f, BUILTIN::TO_FLOAT(func_743(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1616(5f, BUILTIN::TO_FLOAT(func_743(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1616(25f, BUILTIN::TO_FLOAT(func_1617(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1616(1f, BUILTIN::TO_FLOAT(func_1617(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1616(6f, BUILTIN::TO_FLOAT(func_1617(64058978)))));
	fVar0 = (fVar0 + (3f * func_1616(1f, BUILTIN::TO_FLOAT(func_1617(795577402)))));
	iVar1 = func_1618();
	fVar0 = (fVar0 + (0.1111111f * func_1616(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1616(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1616(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_1620()))));
	if (func_593(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_593(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_593(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_593(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_593(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_1619(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1616(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1616(5f, BUILTIN::TO_FLOAT(func_1617(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1616(5f, BUILTIN::TO_FLOAT(func_743(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1621(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1621(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1621(COMPENDIUM::_0x729D52F61A5A9E22(1630085303), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(-1658238931));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1621(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1621(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1621(COMPENDIUM::_0x729D52F61A5A9E22(-2143405780), 48)) / BUILTIN::TO_FLOAT(48)));
	func_1622(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1616((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1616(1f, BUILTIN::TO_FLOAT(func_1623(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_1624());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1616(5f, BUILTIN::TO_FLOAT(func_1617(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1616(1f, BUILTIN::TO_FLOAT(func_1617(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1616(1f, BUILTIN::TO_FLOAT(func_1617(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1616(1f, BUILTIN::TO_FLOAT(func_1617(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1616(1f, BUILTIN::TO_FLOAT(func_743(978382515, 1015970717)))));
	Var6 = { func_950(joaat("total_progress_made")) };
	fVar8 = func_1625(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_57(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_57(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_497(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_939(Global_1898330[iVar61]);
				}
				else
				{
					func_1626(iVar61, 0);
					if (func_110(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_109(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_109(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_109(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

bool func_1019(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1020(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1021(var uParam0)
{
	if (func_1019(uParam0, 1))
	{
		func_1627(1);
	}
}

int func_1022()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1023(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_1628(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1024()
{
	return -1904156936;
}

int func_1025(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_57(iParam0))
	{
		return 0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			iVar0 = func_111(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		
		case 8:
			iVar1 = func_111(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return 0;
}

int func_1026()
{
	return 166188472;
}

int func_1027()
{
	return 2015838421;
}

int func_1028()
{
	return 207908017;
}

var func_1029(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_1030(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	var uVar3;
	
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _NAMESPACE76::_0x815C4065AE6E6071(uParam0, &Var0, iParam3);
	return uVar3;
}

int func_1031(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_1032(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1033(int iParam0)
{
	struct<5> Var0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1138(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_1034(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1629(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_1035(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1630(iParam0);
	}
	else
	{
		func_1631(iParam0, iParam1);
	}
	func_1632();
}

void func_1036(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1633(iParam0, iParam1, bParam2);
}

bool func_1037()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1038(int iParam0)
{
	if (Local_18 != iParam0)
	{
		Local_18 = iParam0;
	}
}

bool func_1039(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

char* func_1040(char* sParam0)
{
	return sParam0;
}

void func_1041(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (func_257(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_740(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_1042(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_1043(int iParam0)
{
	if (iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_1044(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1042(iParam0))
	{
		return false;
	}
	func_1634(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183->f_73[iParam0 /*7*/][iVar0], iVar1);
}

void func_1045(int iParam0, var uParam1)
{
	if (!func_1042(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1635(iParam0, *uParam1, 0);
	func_1636(uParam1);
	Global_1935183->f_24 = 1;
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		
		case 59:
			return 6;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_1047(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		
		case 115:
		case 116:
			return 3;
		
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_1048(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_1049()
{
	float fVar0;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 112;
		
		case 2:
			return 113;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 8:
			return 7;
		
		case 9:
			return 8;
		
		case 10:
			return 9;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 15:
			return 12;
		
		case 16:
			return 13;
		
		case 17:
			return 15;
		
		case 19:
			return 17;
		
		case 20:
			return 18;
		
		case 21:
			return 19;
		
		case 22:
			return 20;
		
		case 23:
			return 21;
		
		case 25:
			return 23;
		
		case 26:
			return 25;
		
		case 27:
			return 26;
		
		case 28:
			return 62;
		
		case 29:
			return 27;
		
		case 49:
			return 28;
		
		case 30:
			return 29;
		
		case 31:
			return 30;
		
		case 32:
			return 31;
		
		case 120:
			return 32;
		
		case 124:
			return 33;
		
		case 125:
			return 34;
		
		case 33:
			return 35;
		
		case 83:
			return 40;
		
		case 35:
			return 42;
		
		case 36:
			return 43;
		
		case 89:
			return 44;
		
		case 115:
			return 46;
		
		case 37:
			return 47;
		
		case 38:
			return 48;
		
		case 39:
			return 49;
		
		case 40:
			return 50;
		
		case 50:
			return 51;
		
		case 42:
			return 52;
		
		case 52:
			return 53;
		
		case 43:
			return 54;
		
		case 45:
			return 57;
		
		case 48:
			return 61;
		
		case 56:
			return 63;
		
		case 57:
			return 64;
		
		case 58:
			return 65;
		
		case 59:
			return 66;
		
		case 60:
			return 67;
		
		case 61:
			return 68;
		
		case 126:
			return 69;
		
		case 127:
			return 70;
		
		case 62:
			return 71;
		
		case 77:
			return 72;
		
		case 64:
			return 73;
		
		case 65:
			return 74;
		
		case 67:
			return 76;
		
		case 68:
			return 78;
		
		case 69:
			return 79;
		
		case 70:
			return 80;
		
		case 71:
			return 81;
		
		case 72:
			return 82;
		
		case 75:
			return 84;
		
		case 76:
			return 85;
		
		case 117:
			return 86;
		
		case 78:
			return 87;
		
		case 79:
			return 88;
		
		case 80:
			return 90;
		
		case 81:
			return 91;
		
		case 82:
			return 92;
		
		case 87:
			return 96;
		
		case 88:
			return 97;
		
		case 91:
			return 98;
		
		case 92:
			return 99;
		
		case 93:
			return 100;
		
		case 94:
			return 101;
		
		case 95:
			return 102;
		
		case 96:
			return 103;
		
		case 97:
			return 104;
		
		case 98:
			return 105;
		
		case 99:
			return 106;
		
		case 100:
			return 107;
		
		case 104:
			return 114;
		
		case 105:
			return 115;
		
		case 107:
			return 118;
		
		case 109:
			return 119;
		
		case 110:
			return 120;
		
		case 111:
			return 121;
		
		case 112:
			return 122;
		
		case 128:
			return 123;
		
		default:
			break;
	}
	return 0;
}

void func_1051(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_1052(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			switch (func_111(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		
		case 8:
			switch (func_111(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_1053(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1637(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1499(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1639(func_1638(iParam0), 6);
}

void func_1054(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1637(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1499(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1640(func_1638(iParam0), 6);
}

bool func_1055(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1056(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_1641(iParam0, 64))
	{
		func_1057(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_1497(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1642(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_1057(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1643(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_1644(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1641(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1645(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_1614(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1646(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1647(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1648(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_1649(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_1643(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			
			case 1:
				iVar22 = 13992470;
				break;
			
			case 2:
				iVar22 = 396341162;
				break;
			
			case 3:
				iVar22 = 623069873;
				break;
			
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			
			case 1:
				iVar22 = 489732756;
				break;
			
			case 2:
				iVar22 = 195204984;
				break;
			
			case 3:
				iVar22 = -103418913;
				break;
			
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_1057(int iParam0)
{
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

int func_1058(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_1650(vParam0, 0f, 0f, 0, 2);
	return func_1650(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

void func_1059(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1064(uParam0, 16);
	}
	else
	{
		func_1063(uParam0, 67108864);
		func_1063(uParam0, 16);
	}
}

void func_1060(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1063(&(uParam0->f_1), 128);
	}
	else
	{
		func_1064(&(uParam0->f_1), 128);
	}
}

void func_1061(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1064(uParam0, 256);
	}
	else
	{
		func_1063(uParam0, 256);
	}
}

void func_1062(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_1064(uParam0, 268435456);
	}
	else
	{
		func_1063(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_1064(uParam0, 1073741824);
	}
	else
	{
		func_1063(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_1064(uParam0, 536870912);
	}
	else
	{
		func_1063(uParam0, 536870912);
	}
}

void func_1063(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1064(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1065(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_1066(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1067(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_1068(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar0 /*49*/])->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1069(var uParam0)
{
	if (!func_1055(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_1070(&(uParam0->f_1), 1);
	}
}

void func_1070(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1071(var uParam0)
{
	if (!func_1055(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			
			default:
				break;
		}
		func_1070(&(uParam0->f_3), 1);
	}
}

void func_1072(var uParam0)
{
	if (!func_1055(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_1070(&(uParam0->f_1), 1);
	}
}

void func_1073(var uParam0)
{
	if (!func_1055(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_CLIP_SET(*uParam0);
		func_1070(&(uParam0->f_1), 1);
	}
}

int func_1074(int iParam0)
{
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return 1;
	}
	return 0;
}

int func_1075(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1651(uParam1, 128);
	if (func_1652("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1653(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_568(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_1651(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_1651(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_1651(uParam1, 16384)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_1654(iVar1);
	}
	if (func_568(iVar0))
	{
	}
	return iVar0;
}

void func_1076(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_1077(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1078(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1079(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_1080()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_1081(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_1082(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_1655(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_1080())
	{
		return -1;
	}
	uVar0 = func_1081(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1035(iVar1, 0);
	func_1136(iVar1, 0);
	func_1656(iVar1, 0);
	func_1084(iVar1, 0);
	func_1657(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1658(iVar1, iParam4);
	}
	return iVar1;
}

int func_1083(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

void func_1084(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

int func_1085(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -15;
	}
	return func_1659(iParam0);
}

bool func_1086(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1584(iParam1) || !func_1584(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1087(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_1660(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_1088(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		
		case -1324765740:
			return 4;
		
		case -1119640448:
			return 6;
		
		case -1015925347:
			return 8;
		
		case -857562377:
			return 7;
		
		case -579939614:
			return 10;
		
		case -193557170:
			return 9;
		
		case 0:
			return 13;
		
		case 15:
			return 14;
		
		case 54488187:
			return 2;
		
		case 100010212:
			return 11;
		
		case 679418883:
			return 0;
		
		case 880414984:
			return 12;
		
		case 1077154516:
			return 1;
		
		case 1620037762:
			return 5;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1089(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1721991356:
			return 2;
		
		case -1439599467:
			return 23;
		
		case -1317052143:
			return 12;
		
		case -1233681761:
			return 19;
		
		case -1148613331:
			return 9;
		
		case -702816767:
			return 3;
		
		case -416908843:
			return 13;
		
		case -273223690:
			return 15;
		
		case -173507739:
			return 6;
		
		case 0:
			return 22;
		
		case 212278652:
			return 14;
		
		case 433385945:
			return 10;
		
		case 603685163:
			return 17;
		
		case 669657108:
			return 0;
		
		case 725623432:
			return 21;
		
		case 821931868:
			return 1;
		
		case 839715153:
			return 7;
		
		case 1420204096:
			return 11;
		
		case 1500834021:
			return 8;
		
		case 1632247697:
			return 18;
		
		case 1679686673:
			return 16;
		
		case 1974067816:
			return 5;
		
		case 2082228755:
			return 20;
		
		case 2137137442:
			return 4;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1090(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_1091()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0;
}

void func_1092(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_209(*uParam0, 1))
	{
		return;
	}
	if (!func_209(*uParam1, 1))
	{
		return;
	}
	if (iParam4 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
	}
	if (iParam5 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam8 == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	}
	if (!func_1174(*uParam0, 780511057))
	{
		TASK::TASK_COMBAT_PED(*uParam0, *uParam1, iParam2, iParam3);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam7);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam6);
}

void func_1093(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	
	if (!func_209(*uParam0, 1))
	{
		return;
	}
	if (!func_209(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		PED::_0xEEED8FAFEC331A70(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346/*func_209*/;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam10, true);
	}
	if (!func_1174(*uParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*uParam0, *uParam1, fParam2, iParam3, iParam4, fParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
}

void func_1094(int iParam0, int iParam1, bool bParam2)
{
	if (func_593(iParam0))
	{
		return;
	}
	if (iParam1 == 1 || func_594(iParam0, 0))
	{
		if ((bParam2 || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 65536)) || func_200(iParam0))
		{
			if (bParam2 && !func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 1024))
			{
				func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1024);
			}
			func_223(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1024);
			func_223(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 32768);
			func_1454(iParam0);
		}
	}
}

void func_1095(int iParam0, int iParam1, bool bParam2)
{
	if (!func_206(iParam0))
	{
		return;
	}
	func_1453(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 1024))
	{
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1024);
	}
	if (func_938(iParam0))
	{
		func_939(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		func_937(iParam0, 1);
	}
}

int func_1096(int iParam0)
{
	float fVar0;
	
	if (func_497(((*Global_1347702)[iParam0 /*49*/])->f_15) == 2 || iParam0 == func_152(Global_1347343->f_2))
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 32 != 0)
	{
		return 1;
	}
	fVar0 = BUILTIN::VDIST2(func_69(iParam0), Global_36);
	if (fVar0 < (((*Global_1347702)[iParam0 /*49*/])->f_16 * ((*Global_1347702)[iParam0 /*49*/])->f_16))
	{
		return 1;
	}
	return 0;
}

void func_1097(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_1067(iParam0))
	{
		return;
	}
	iVar0 = func_1223(func_1222(iParam0));
	if (func_1225(iVar0) && ((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_71 = 0;
	}
	if (!bParam1)
	{
		func_1661(iParam0, -1, 0, 1, 0, 0, 0);
		func_175(func_1222(iParam0), 1, 2);
	}
}

bool func_1098(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_1099(int iParam0)
{
	if (!func_1662(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_1100(int iParam0)
{
	if (func_1662(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_1101(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_1102(int iParam0, int iParam1, float fParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	func_1663(iParam0, uParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_1103(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_1104(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_1105(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_1106()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_1107()
{
	return Global_1894899 & 2 != 0;
}

int func_1108(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (!bParam1 && func_1664(iParam0, uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_1109(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_1665(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_1110(int iParam0)
{
	return func_1221(iParam0);
}

bool func_1111(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_1112(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!bParam1 && func_614(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

float func_1113(int iParam0)
{
	return (((*Global_1347702)[iParam0 /*49*/])->f_18 / 2f);
}

int func_1114()
{
	int iVar0;
	
	if (func_1666())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1115(bool bParam0)
{
	if (func_1667())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_1114())
		{
			return 0;
		}
	}
	if (Global_16)
	{
		return 0;
	}
	if (!func_1232())
	{
		return 0;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return 0;
	}
	if (func_1668())
	{
		return 0;
	}
	return 1;
}

bool func_1116(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

struct<8> func_1117(var uParam0)
{
	return uParam0->f_358;
}

struct<8> func_1118(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;
	
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<4> func_1119(var uParam0)
{
	return uParam0->f_344;
}

char* func_1120(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1669(iVar0);
}

void func_1121(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1670(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1670(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1671(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1672(8);
}

char* func_1122()
{
	return "unnamed";
}

void func_1123(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

void func_1124(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1256(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1673(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

void func_1125(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1256(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_1256(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1674(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_1256(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_1675(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_1126(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1127(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_776, iVar0, func_1676(iVar0));
		iVar0++;
	}
}

int func_1128(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1677(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_1129(int iParam0)
{
	switch (iParam0)
	{
		case -1398443261:
		case -1297016068:
		case -1134756023:
		case -900222268:
		case -592887111:
		case -26529079:
		case 264503396:
		case 286955722:
		case 462409959:
		case 501744437:
		case 953896601:
		case 958101616:
		case 1594496117:
		case 1912073755:
		case 1960786232:
		case 1976314726:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1130(int iParam0, int iParam1)
{
	iLocal_784 = iParam1;
}

void func_1131()
{
	if (bLocal_150)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 782960533, false);
		if (!iLocal_151)
		{
			if (!ANIMSCENE::_0x8D81E7824B7753F7(&(Local_926[0 /*6*/]), "s_greet", 1))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(&(Local_926[0 /*6*/]), "s_postgreetidle", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[0 /*6*/]), "Loop_PostGreetIdle", true, false);
					iLocal_151 = 1;
					func_1678(iLocal_806, 5);
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(&(Local_926[0 /*6*/]), "s_base", 1))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[0 /*6*/]), "s_postgreetleadin");
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[0 /*6*/]), "Loop_PostGreetIdle", true, false);
					iLocal_151 = 1;
					func_214(&uLocal_546);
					func_1678(iLocal_806, 4);
				}
			}
		}
	}
	switch (iLocal_806)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_300))
			{
				if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false)) < 4f)
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_300, 301, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_300, 130, false);
					func_316(Local_374[0 /*17*/], "RABI1_GREET", " ", -163964935, 0, 0, 0, 1, 0);
					func_1679(&iLocal_313, &Local_374, 0, ((*Global_1347702)[0 /*49*/])->f_37, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[0 /*6*/]), "Loop_Base", true, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[0 /*6*/]), "s_postgreetleadin");
					func_1678(iLocal_806, 1);
				}
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(Local_926[0 /*6*/]), "s_postgreetidle", 1))
			{
				func_214(&uLocal_546);
				func_1678(iLocal_806, 2);
			}
			break;
		
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[0 /*6*/]), "s_base");
			if (func_438(&uLocal_546) > 10f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_926[0 /*6*/]), "Loop_Base", false, false);
				func_243(&uLocal_546);
				func_1678(iLocal_806, 3);
			}
			break;
		
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[0 /*6*/]), "s_base");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[0 /*6*/]), "s_base"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[0 /*6*/]), "s_base", true);
				func_1678(iLocal_806, 5);
			}
			break;
		
		case 4:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(Local_926[0 /*6*/]), "s_postgreetleadin");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(&(Local_926[0 /*6*/]), "s_postgreetleadin") && ANIMSCENE::_0x1F0E401031E20146(&(Local_926[0 /*6*/]), "s_postgreetleadin"))
			{
				func_1678(iLocal_806, 5);
			}
			else if (func_215(&uLocal_546) > 4f)
			{
				func_243(&uLocal_546);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Local_926[0 /*6*/]), "s_postgreetleadin", true);
				func_1678(iLocal_806, 5);
			}
			break;
	}
}

void func_1132(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1680(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

char* func_1133(int iParam0)
{
	if (!func_1476(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_1536(iParam0));
}

char* func_1134(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1681(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_1135(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_1136(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_1137(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_448(iParam0);
		func_1682((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_1138(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1683((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1683(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_57(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_501(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_1139(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_1684(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_1140(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1684(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_1141(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1684(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_1142(bool bParam0)
{
	func_1684(Global_1956612, bParam0);
}

void func_1143(bool bParam0)
{
	func_1684(&(Global_1415412->f_3), bParam0);
}

void func_1144(bool bParam0)
{
	if (func_612(Global_1934051->f_33))
	{
		func_1685(Global_1934051->f_33, 7148155);
	}
	func_1684(&(Global_1934051->f_33), bParam0);
}

void func_1145(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1687(func_1686(iVar0));
		if (iVar1 != 0)
		{
			func_1685(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_1684((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_1146(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_1688(iVar0, -1);
		func_1689(iVar0, 0);
		func_1690(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_1147(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_1148()
{
	func_1691();
	func_1692();
	func_1693();
}

void func_1149(var uParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_1150(var uParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

int func_1151(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_1576(bParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1694((375 + iVar28), 1);
			if (func_1695(bParam0, &Var0, iVar5, 0))
			{
				if (func_1696(bParam0, &Var6, iVar5))
				{
					Var29 = { func_1697(bParam0, Var0, iVar5, 0) };
					func_1698(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1502(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_1503(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_1699(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_1152(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		
		case 363815774:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		
		case -1090280091:
		case -1076294934:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_1153(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

void func_1154(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_1700(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1701(1, bVar1, 1, sVar2);
		func_1702(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1703(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_1148();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1703(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1703(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_1155(var uParam0)
{
	switch (uParam0->f_752)
	{
		case 0:
			return -1203766680;
		
		case 1:
			return -1442882073;
		
		case 2:
			return -1342838312;
		
		case 3:
			return -1579201109;
		
		case 4:
			return 1325967359;
		
		case 5:
			return 1026098240;
		
		case 6:
			return 176660218;
		
		case 7:
			return 1555579742;
		
		case 8:
			return 637359589;
		
		case 9:
			return 1557025440;
		
		case 10:
			return -899076624;
		
		case 11:
			return -1213233027;
		
		case 12:
			return 617571003;
		
		case 13:
			return 336380214;
		
		case 14:
			return -2137810390;
		
		case 15:
			return -280594546;
		
		case 16:
			return -601894591;
		
		case 17:
			return -1158115597;
		
		case 18:
			return 934021212;
		
		case 19:
			return 717122929;
		
		case 20:
			return -544418033;
		
		case 21:
			return -834587528;
		
		case 22:
			return -179764601;
		
		case 23:
			return 1672863587;
		
		case 24:
			return 419547640;
	}
	return 0;
}

var func_1156(int iParam0)
{
	var uVar0;
	
	if (!func_1067(iParam0))
	{
		return uVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_8;
}

void func_1157(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1704(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1705(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1706(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1707(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1708(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_1673(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_1709(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

void func_1158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_625(&(uParam0->f_206), 16))
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(*iParam1))
	{
		func_1710(&(uParam0->f_206), *iParam1, iParam2, iParam3, iParam4, iParam5);
	}
}

void func_1159(var uParam0, var uParam1)
{
	uParam0->f_340 = uParam1;
	func_1711(uParam0, 1);
}

bool func_1160(var uParam0, char* sParam1)
{
	return MISC::_DOES_STRING_EXIST_IN_STRING(&(uParam0->f_344), sParam1);
}

int func_1161(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	if ((Global_1327590->f_19685 == 0 || iParam0 == 1) || iParam0 == 20)
	{
		Global_1327590->f_19685 = iParam0;
		Global_1327590->f_19684 = iParam1;
		return 1;
	}
	return 0;
}

int func_1162()
{
	if (iLocal_1014)
	{
		return 1;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_771))
	{
		iLocal_771 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-108.707f, -4.126f, 95.134f, 0f, 0f, 66f, 17f, 17f, 6f, "OUT_OF_CAMP_SBI");
		return 0;
	}
	if (iLocal_474 == 0)
	{
		func_699(iLocal_771, 0);
		func_1712(iLocal_771, 0, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_771, 67552, 8192, 0, -1, -1, 0);
		iLocal_474 = func_700(iLocal_771, 0, 0, 67552);
		return 0;
	}
	if (iLocal_474 != 0)
	{
		iLocal_1014 = 1;
	}
	return 1;
}

int func_1163()
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { -96.3437f, -21.5586f, 94.9232f };
	vVar3 = { -92.4576f, -19.825f, 94.9256f };
	if (bLocal_1015 && iLocal_1016)
	{
		return 1;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_771))
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x112DDF56300BC6E5(230221572)))
		{
			iLocal_1017 = _NAMESPACE48::_0x31C70A716CAE1FEE(_NAMESPACE48::_0x112DDF56300BC6E5(230221572));
		}
		if (!bLocal_1015)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1017))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1017, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1017, false, true);
				}
				else if (func_1713(iLocal_1017, iLocal_771, 1, 0))
				{
					if (func_575(iLocal_1017, vVar0, 0) < 2f)
					{
						if (!func_352(iLocal_1017, 713668775))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1017, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1017, vVar0, 0.55f, -1, 0.25f, false, 40000f);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_1017, -1);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1017, 48, true);
						bLocal_1015 = true;
					}
				}
			}
		}
		if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x112DDF56300BC6E5(1268955201)))
		{
			iLocal_1018 = _NAMESPACE48::_0x31C70A716CAE1FEE(_NAMESPACE48::_0x112DDF56300BC6E5(1268955201));
		}
		if (!iLocal_1016)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1018))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1018, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1018, false, true);
				}
				else if (func_1713(iLocal_1018, iLocal_771, 1, 0))
				{
					if (func_575(iLocal_1018, vVar3, 0) < 2f)
					{
						if (!func_352(iLocal_1018, 713668775))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1018, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1018, vVar3, 0.55f, -1, 0.25f, false, 40000f);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_1018, -1);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1018, 48, true);
						iLocal_1016 = 1;
					}
				}
			}
		}
	}
	if (!bLocal_1015 || !bLocal_1015)
	{
		return 0;
	}
	return 1;
}

bool func_1164(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	return func_1714(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5);
}

void func_1165(var uParam0, var uParam1)
{
	uParam0->f_341 = uParam1;
	func_1711(uParam0, 2);
}

int func_1166(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_209(iParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(iParam1, iParam2);
		MISC::SET_BIT(&(uParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(iParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(iParam1, iParam3);
		}
		MISC::SET_BIT(&(uParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17) && MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

void func_1167(var uParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(*uParam0, 14))
	{
		uParam0->f_26 = uParam1;
	}
}

void func_1168(var uParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	func_1715(uParam0, uParam1);
	fVar0 = func_356(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	if (fVar0 <= uParam1->f_26 || MISC::IS_BIT_SET(uParam1->f_21, 20))
	{
		func_1371(uParam1, uParam2);
		func_1716(uParam1);
		func_1717(uParam1);
		if (!MISC::IS_BIT_SET(*uParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), uParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), uParam1->f_27);
				}
			}
		}
		func_388(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(uParam1->f_21, 2))
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_35))
			{
				uParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, uParam1->f_26, uParam1->f_26, 20f);
			}
			else
			{
				func_1718(uParam1->f_35, 0, 0);
				MISC::SET_BIT(&(uParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*uParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*uParam1, 15)))
		{
			iVar1 = 0;
			if (func_1378(Global_35, *uParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				uParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*uParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*uParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			func_441(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), bVar2, uParam1->f_30, uParam1->f_31, uParam1->f_32, func_356(bVar3, uParam1->f_33, uParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*uParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && func_209(uParam1->f_28, 0)) && func_1379(Global_35, uParam1->f_28, (uParam1->f_26 + 1.75f), 1)) && !func_1174(uParam1->f_28, 518218985)) && !func_1174(uParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_28, 1, 0);
			TASK::TASK_SMART_FLEE_COORD(uParam1->f_28, Global_36, (uParam1->f_26 + 1.75f), -1, 256, 0.101f);
			uParam1->f_28 = 0;
		}
	}
}

void func_1169(var uParam0)
{
	if (MISC::IS_BIT_SET(*uParam0, 7))
	{
		if (MISC::IS_BIT_SET(uParam0->f_21, 3))
		{
			func_1719(uParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 3))
	{
		func_80(&(uParam0->f_22), 0);
		if (uParam0->f_25 == 0f || func_1720(&(uParam0->f_22), uParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1956578->f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_0x4CC5F2FC1332577F(724769646);
			if (!MISC::IS_BIT_SET(uParam0->f_21, 4))
			{
				MISC::SET_BIT(&(uParam0->f_21), 4);
			}
		}
	}
}

void func_1170(int* iParam0, var uParam1, var uParam2, bool bParam3, char* sParam4, float fParam5)
{
	float fVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	fVar0 = func_356(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam2, true, false)));
	if ((fVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!func_1174(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *uParam2, 5000, -1082130432, -1082130432, -1082130432);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		func_1721(iParam0, uParam1, uParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *uParam2, "ForcedILO", 0f, 0f, 0f, *uParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

int func_1171(int* iParam0, int iParam1)
{
	vector3 vVar0;
	
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return 1;
	}
	if (!PED::_0xA911EE21EDF69DAF(Global_35) && !func_1174(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_1722(*iParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_1723(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return 1;
	}
	else if (PED::_0xA911EE21EDF69DAF(Global_35) && !func_1174(Global_35, -208384378))
	{
		if (func_1724(Global_35))
		{
			iParam0->f_60 = func_768();
		}
		else
		{
			iParam0->f_60 = PED::_0xD806CD2A4F2C2996(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 1073741824, 9);
		}
	}
	return 0;
}

int func_1172(int* iParam0)
{
	bool bVar0;
	
	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, -654888872, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (func_568(func_1725(Global_35, 0, 1, 0)) || func_568(func_1725(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return 1;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!func_568(func_1725(Global_35, 0, 1, 0)) && !func_568(func_1725(Global_35, 1, 1, 0)))
		{
			func_243(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return 1;
		}
		else if (((func_568(func_1725(Global_35, 0, 1, 0)) || func_568(func_1725(Global_35, 1, 1, 0))) && !func_1174(Global_35, 716706914)) && !func_1174(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			func_80(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = func_438(&(iParam0->f_52)) >= 1.5f;
		if ((!func_568(func_1725(Global_35, 0, 1, 0)) && !func_568(func_1725(Global_35, 1, 1, 0))) || bVar0)
		{
			func_243(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return 1;
		}
	}
	return 0;
}

void func_1173()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	func_1726(0);
	Global_1935689->f_6 = 1;
}

int func_1174(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1175(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_1174(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_1176(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_1727(vVar0, vVar3, vParam1);
}

void func_1177(int iParam0, int iParam1)
{
	func_1728(iParam0, iParam1);
}

int func_1178(int iParam0, int iParam1)
{
	float fVar0;
	
	if (!func_1174(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_571(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_571(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_571(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_1179(int iParam0, int iParam1)
{
	func_1729(iParam0, iParam1);
}

void func_1180(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_1205(iParam0);
	if (!func_521(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_1181(int iParam0, int iParam1)
{
	if (!func_802(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_1182(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_802(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_1730(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_282(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_174(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_1730(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_1731(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_1732(iParam0, 0))
					{
						func_602(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_1733(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_726(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		
		case 2:
			if (!func_209(func_1205(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_209(func_733(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		
		case 3:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1183(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_1734(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1735(iParam0))
	{
		if (func_1649(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_571(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1183(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1183(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_571(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_571(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_571(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_571(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_571(iParam5, 129))
	{
		if (func_571(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_571(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_571(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_571(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1735(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_571(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_571(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_1184(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!func_521(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_1736(iParam0, iParam1);
	return uVar0;
}

void func_1185(int iParam0, int iParam1, bool bParam2)
{
	if (!func_521(iParam0))
	{
		return;
	}
	if (!func_1184(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_602(iParam0, 25, 1);
	}
}

void func_1186(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_1737(iParam2))
		{
			iVar0 = func_1738(iParam2, -1);
			if (func_1739(iParam1, iVar0))
			{
				if (func_1740(iParam1, iVar0))
				{
					if (func_1741(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_1742(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_1743(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_602(iParam0, 66, 0);
		}
	}
}

void func_1187(int iParam0)
{
	func_1744(iParam0);
	func_1745(iParam0, 0);
}

int func_1188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_1189(int iParam0, int iParam1)
{
	if (!func_802(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_671(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_671(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_1190(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_521(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_1191(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_802(iParam0))
	{
		return;
	}
	iVar0 = func_1205(iParam0);
	func_1746(iVar0);
	func_602(iParam0, 60, 1);
	if (bParam1)
	{
		func_1747(iParam0);
	}
}

void func_1192(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_802(iParam0))
	{
		return;
	}
	iVar0 = func_1205(iParam0);
	func_1748(iVar0);
	func_726(iParam0, 60, 1);
	if (bParam1)
	{
		func_1749(iParam0);
	}
}

void func_1193(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_802(iParam0))
	{
		return;
	}
	iVar0 = func_1205(iParam0);
	func_1750(iVar0);
	if (iParam0 == 14)
	{
		func_1751(iVar0);
	}
	func_602(iParam0, 61, 1);
	if (bParam1)
	{
		func_1752(iParam0);
	}
}

void func_1194(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_802(iParam0))
	{
		return;
	}
	iVar0 = func_1205(iParam0);
	func_1753(iVar0);
	func_726(iParam0, 61, 1);
	if (bParam1)
	{
		func_1754(iParam0);
	}
}

int func_1195(var uParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, var uParam6, bool bParam7, bool bParam8, var uParam9, var uParam10, var uParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	int iVar0;
	
	if (!func_802(iParam1))
	{
		return 0;
	}
	iVar0 = func_733(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_209(iVar0, 0)) || (bParam3 && !func_1210(iParam1)))
	{
		if (bParam2)
		{
			if (func_1755(iParam1, 1) != 0)
			{
				iVar0 = func_1756(iParam1, bParam3, bParam8, uParam9, uParam10, uParam11, fParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_209(iVar0, 0))
	{
		*uParam0 = 2;
		((*Global_1360165)[iParam1 /*1157*/])->f_70.f_2 = 0;
		func_1757(iParam1, iVar0);
		func_1758(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_1196(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_1197(int iParam0)
{
	return iParam0;
}

void func_1198(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_1199(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_1759(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_1200(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1201(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_1202(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_1203(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

void func_1204(int iParam0)
{
	int iVar0;
	
	if (!func_802(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_1760(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_1205(int iParam0)
{
	if (!func_802(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_1206(int iParam0)
{
	if (func_521(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_1205(iParam0)))
		{
			func_1190(iParam0, 67108864, 1);
			func_726(iParam0, 19, 1);
		}
	}
}

float func_1207(int iParam0)
{
	if (!func_802(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_1208(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_1205(iParam0);
	iVar1 = func_727(iParam0, 0);
	func_1761(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_1209(int iParam0)
{
	if (!func_802(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_1210(int iParam0)
{
	if (!func_802(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_1211(int iParam0, int iParam1, bool bParam2)
{
	if (!func_802(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_1212(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_802(iParam0))
	{
		return 0;
	}
	iVar0 = func_733(iParam0);
	if (func_209(iVar0, 0))
	{
		if (func_209(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_1209(iParam0)) || func_1210(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1762(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1755(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1763(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_1764(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1764(iParam0, 0));
					func_1765(iParam0);
				}
			}
			else
			{
				if (func_598(iParam0, 32768, 1))
				{
					iVar2 = func_1764(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_209(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_598(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_1763(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_1764(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1764(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_1763(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_1766(iParam0, 0);
	return 1;
}

int func_1213(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, var uParam7, var uParam8, var uParam9)
{
	struct<11> Var0;
	int iVar11;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2572))
	{
		if (func_1767(uParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = uParam9;
	Var0.f_4 = uParam7;
	Var0.f_3 = uParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	uParam0->f_2572 = func_1217(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!func_209(uParam0->f_2572, 0))
		{
			return 0;
		}
		else if (!func_1767(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_1214(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1768(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_1549(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_990(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_1546(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_1401(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_1401(iParam0, 0, 0) - iParam1) < 0)
		{
			func_1214(iParam0, func_1401(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_1494(iParam0) == -427144552)
	{
		if (!func_1769(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1770(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_1502(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_1549(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1771(iParam0, iParam1);
	return 1;
}

struct<2> func_1215(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_1216(int iParam0)
{
	return func_571(Global_1900073->f_1, iParam0);
}

int func_1217(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	
	uParam1->f_10 = func_484(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_257(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1474();
	if (*uParam1)
	{
		if (bVar0 && !func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1772(5))
			{
				func_1773(5);
				func_1774(5);
				func_770(0);
				func_771(0);
			}
		}
	}
	if (func_1775(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_583(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_583(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_583(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_583(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_130(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_464(iVar1))
	{
		bVar3 = true;
		if (func_1776(iVar1))
		{
			bVar4 = true;
		}
		if (func_465(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_466(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1772(0) && func_1772(1))
			{
				func_1777(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1778())
			{
				func_769();
			}
			func_770(0);
			func_771(0);
			func_1779(uParam1->f_6);
		}
	}
	if (!func_464(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1780(uParam1->f_10) == 0 || func_1781(uParam1->f_10) == 0) || func_1782(uParam1->f_10) == 0)
			{
				func_1783(uParam1->f_10);
			}
			func_1784(uParam1->f_10);
			func_1785(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_130(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_464(iVar1))
	{
		bVar3 = true;
		if (func_1776(iVar1))
		{
			bVar4 = true;
		}
		if (func_465(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_257(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1786(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_1787(uParam1->f_10) };
			Var10 = { func_1788() };
			func_1789(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_1790(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1791(uParam1->f_10);
		if (uParam1->f_2 && !func_257(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_1792(uParam1->f_10);
	if (func_1790(uParam1->f_10))
	{
		iVar16 = func_1793(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_1218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_108(iParam0))
	{
		return -1;
	}
	if (func_205() != -1)
	{
		iVar2 = func_1223(iParam0);
		if (iVar2 >= 0)
		{
			func_283(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_1626(iVar1, 1);
			func_283(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_1223(iParam0);
		if (iVar2 >= 0)
		{
			func_283(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_57(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_1626(iVar0, 1);
					func_283(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_1219(int iParam0)
{
	return func_447(iParam0) == 2;
}

void func_1220(int iParam0)
{
	func_1794(iParam0);
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_1222(int iParam0)
{
	if (!func_1067(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_1223(int iParam0)
{
	int iVar0;
	
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1224(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!func_1795(iParam0))
	{
		return 0;
	}
	if ((func_583(((*Global_1347702)[59 /*49*/])->f_15, 1) && !func_583(((*Global_1347702)[61 /*49*/])->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_1796(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27) && !func_1110(iParam0)) && !Global_43890)
		{
			func_1798(iParam0, BUILTIN::VDIST2(func_1797(iParam0), Global_36), -1, 1, 1);
			func_1799((*Global_1835011)[iParam0 /*74*/], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_1801(func_1800(iParam0), func_1222(iParam0), 0, ((*Global_1835011)[iParam0 /*74*/])->f_21, iParam3))
		{
			return 0;
		}
		if (func_755(1) > 1)
		{
			if (((*Global_1835011)[iParam0 /*74*/])->f_73 <= 0)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - ((*Global_1835011)[iParam0 /*74*/])->f_73) < 60000)
			{
				if (func_1802(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_781(Global_35, func_1803(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
					{
						((*Global_1835011)[iParam0 /*74*/])->f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(((*Global_1835011)[iParam0 /*74*/])->f_72, func_1803(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_72) || CAM::IS_SPHERE_VISIBLE(func_1803(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_1218(((*Global_1835011)[iParam0 /*74*/])->f_1);
	if (!func_1225(iVar0))
	{
		return 0;
	}
	else if (((*Global_1835011)[iParam0 /*74*/])->f_73 != 0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_73 = 0;
		func_1804(iParam0);
		if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[iParam0 /*74*/])->f_72);
		}
	}
	if (bParam1)
	{
		func_1220(((*Global_1835011)[iParam0 /*74*/])->f_1);
	}
	else if (!&Global_1879534)
	{
		func_504(4);
	}
	return 1;
}

int func_1225(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

void func_1226(int iParam0, int iParam1)
{
	if (!func_1225(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

bool func_1227(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1228(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

bool func_1229(int iParam0, int iParam1)
{
	if (func_205() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1230(int iParam0)
{
	if (func_205() != -1)
	{
		if (func_1116(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1116(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1231(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1116(iParam0, 65536) && !func_1116(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1116(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1116(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1232()
{
	return Global_1905944->f_5694;
}

bool func_1233(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1234()
{
	if (func_717(Global_43800))
	{
		func_1389(&Global_43800, 0, 0);
	}
}

bool func_1235(int iParam0, bool bParam1)
{
	if (bParam1 && !func_717(iParam0))
	{
		return false;
	}
	return !func_1759(iParam0, 4);
}

int func_1236(int iParam0, bool bParam1)
{
	if (!func_717(Global_43800))
	{
		Global_43800 = func_1805("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_1806(Global_43800, 0, 1);
		func_1807(Global_43800, 6, 1);
		if (bParam1)
		{
			func_1807(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_1235(Global_43800, 0))
		{
			func_720(Global_43800, 1, 1);
		}
		if (func_1808(Global_43800, 1) != 0f && iParam0)
		{
			func_1806(Global_43800, 1, 1);
		}
		else
		{
			func_1806(Global_43800, 0, 1);
		}
		return func_1809(Global_43800, 1);
	}
	return 0;
}

void func_1237(var uParam0)
{
	if (func_32(uParam0, 2))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_640);
	}
}

int func_1238(var uParam0, var uParam1)
{
	if (uParam1->f_1580 < 0 || uParam1->f_1580 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
			{
				func_256(uParam0, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30));
				func_310(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

bool func_1239(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1240(var uParam0, var uParam1)
{
	if (((!func_625(uParam0, 32) || func_1810(uParam0)) || func_625(uParam0, 268435456)) && !func_625(uParam0, 65536))
	{
		func_762(&(uParam0->f_404), 256);
	}
}

void func_1241(var uParam0, int iParam1)
{
	var uVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

bool func_1242()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_1243()
{
	int iVar0;
	
	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == 130487986)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

void func_1244(var uParam0, char[16] cParam1)
{
	uParam0->f_344 = { cParam1 };
}

void func_1245(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]))
		{
			func_1811(uParam0, uParam0->f_366[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_925() };
	func_1811(uParam0, &Var1);
	Var1 = { func_622(uParam0) };
	func_1811(uParam0, &Var1);
}

Vector3 func_1246(var uParam0)
{
	return uParam0->f_406;
}

void func_1247(var uParam0)
{
	int iVar0;
	
	if (func_1812(&iVar0))
	{
		if (func_1476(iVar0, 0))
		{
			if (func_1499(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_1265(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_1476(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1248(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_30(0, 0);
		func_1813(-1);
	}
	func_782(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_1239(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_1239(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_1239(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_1239(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_1239(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_1239(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_1239(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_1239(*uParam0, 4) && !func_1239(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1239(*uParam0, 2048))
	{
		func_569(0, 0);
	}
	if (func_1239(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_1239(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_1239(*uParam0, 8192))
	{
		func_1814();
	}
	if (!func_1239(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_1239(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_1239(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_1239(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_768() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_257(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1815(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_771(2);
						func_770(-1);
						func_1779(vVar3);
						func_1816(func_707());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_1239(*uParam0, 4096))
	{
		func_1675(Global_35);
	}
	if (!func_1239(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_1239(*uParam0, 2097152))
	{
		if (func_1817() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_290(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1249(var uParam0, vector3 vParam1)
{
	uParam0->f_406 = { vParam1 };
}

void func_1250(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_625(uParam0, 2048) && !func_257(func_1818(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_625(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_1183(iVar1, func_1818(uParam0), func_1819(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_625(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1183(iVar3, func_1818(uParam0), func_1819(uParam0), 2, 1073741824);
		}
	}
}

void func_1251(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if ((func_625(uParam0, 268435456) && !func_257(func_1818(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_1818(uParam0) };
			func_1183(iVar0, vVar1, func_1285(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1252(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_409 = { vParam1 };
	uParam0->f_412 = iParam4;
	if (func_257(vParam1))
	{
		func_623(uParam0, 2048, 1);
	}
	else
	{
		func_310(uParam0, 2048);
		if (bParam5)
		{
			func_310(uParam0, -2147483648);
		}
	}
}

void func_1253(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_1256(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_568(func_1725(iVar1, 0, 1, 0)))
						{
							if (!func_1820(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_568(func_1725(iVar1, 1, 1, 0)))
						{
							if (!func_1820(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1254(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1255(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = func_205() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_1672(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1821(iParam1, 29, bVar4, 1, 0);
			func_1821(iParam1, 31, bVar4, 1, 0);
			func_1821(iParam1, 30, bVar4, 1, 0);
			func_1821(iParam1, 22, bVar4, 1, 0);
			func_1821(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1822(32768) && func_1823(1108822547, 8)) && func_1824(10, iParam3))
	{
		func_1825(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1826(iVar1, 1);
			if (func_1823(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1824(iVar1, iParam3))
				{
				}
				else if ((func_1823(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1823(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1821(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1827(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1821(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1823(iVar3, 1))
							{
								func_1828(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

bool func_1256(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1257(var uParam0)
{
	StringCopy(&(uParam0->f_344), "", 32);
	func_1829(uParam0);
	func_629(uParam0, 0f, 0f, 0f);
	func_1830(uParam0);
}

void func_1258(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		(uParam0->f_13[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

void func_1259(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1260(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_1709(uParam0->f_13[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_1261(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_1234();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_1262(int iParam0)
{
	func_1831();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_1263()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_1264(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1832(bParam0);
}

int func_1265(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1576(iParam1, 1, 0) };
		iParam3 = func_1577(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1833(iParam1, iParam2, func_1567(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1834(1, (func_205() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_1567(iParam3, 1) /*11*/])
			{
				func_1575(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_1822(32768) && iParam1 != &Global_1946804->f_57[func_1567(iParam3, 1) /*11*/])
			{
				func_1835();
				func_1575(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1575(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1836(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1575(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_637(0);
			func_1837(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1575(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1266(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_1576(iParam0, 0, 0) };
	Var5 = { func_1697(iParam0, Var0, Var0.f_4, 0) };
	if (func_1838(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_1637(0), &Var5, bParam1);
}

void func_1267(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;
	
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_355 = { Var1 };
	StringCopy(&(uParam0->f_355), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		*(uParam0->f_371[iVar0 /*18*/]) = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1418)
	{
		*(uParam0->f_1418[iVar0 /*10*/]) = { Var76 };
		iVar0++;
	}
	uParam0->f_1579 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		*(uParam0->f_912[iVar0 /*41*/]) = { Var35 };
		*(uParam0->f_1241[iVar0 /*22*/]) = { Var86 };
		iVar0++;
	}
	uParam0->f_1580 = -1;
	uParam0->f_1661 = { Global_36 };
	uParam0->f_1664 = 0;
	uParam0->f_1665 = 0;
	uParam0->f_1584 = -1;
	uParam0->f_1585 = -1f;
	uParam0->f_1560 = 0;
	uParam0->f_1562 = 0;
	uParam0->f_1562.f_1 = 0;
	uParam0->f_1799 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
	}
}

void func_1268(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1269()
{
	if (func_1286())
	{
		Global_18 = 0;
		Global_43883 = 0;
		if (!func_1839())
		{
			func_1264(1);
		}
	}
}

int func_1270()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_1271(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_521(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_1270());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_911(iParam0, 1, Global_35);
	}
}

bool func_1272()
{
	return func_1273(1) < 3;
}

int func_1273(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (bParam0)
	{
		return func_1840(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_1270(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_1270(), iVar3);
		if (func_1841(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_1274(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_521(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_1275(&iVar0, 1);
				break;
			
			case 14:
				func_1275(&iVar0, 8);
				func_1275(&iVar1, 4);
				func_1275(&iVar1, 5);
				func_1275(&iVar1, 0);
				break;
			
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_1275(&iVar0, 8);
				func_1275(&iVar0, 5);
				func_1275(&iVar1, 4);
				func_1275(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_1205(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_1205(iParam0), iVar1);
	}
}

void func_1275(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_1276(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_521(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_1270());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_911(iParam0, 0, 0);
}

void func_1277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_1842(iVar0);
		iVar2 = func_1842(iVar0 + 1);
		if (!func_521(iVar1))
		{
			if (func_521(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

char* func_1278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		
		case 1:
			return "mech_inventory@clothing@mask";
		
		case 2:
			return "mech_inventory@clothing@mask";
		
		case 3:
			return "mech_inventory@clothing@mask";
		
		case 4:
			return "mech_inventory@clothing@mask";
		
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_1279(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771))
	{
		if (!bParam1)
		{
			func_1843(uParam0);
		}
		else if (bParam2)
		{
			func_1844(uParam0);
		}
		else
		{
			func_1845(uParam0, uParam0->f_1794);
		}
	}
	else
	{
		if (!func_183(uParam0, 1048576) && bParam1)
		{
			func_1845(uParam0, uParam0->f_1794);
		}
		else if (!func_183(uParam0, 2097152) && bParam2)
		{
			func_1844(uParam0);
		}
		else if ((func_183(uParam0, 1048576) && !bParam1) || (func_183(uParam0, 2097152) && !bParam2))
		{
			func_1843(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1778 * FtoV(func_1846(uParam0->f_1794)) };
			if (!func_740(vVar0, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_1771), 1056964608, 1) && !func_257(vVar0))
			{
				VOLUME::_0xA46E98BDC407E23D(uParam0->f_1771, vVar0);
			}
		}
	}
}

void func_1280(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1584 < 0)
	{
		return;
	}
	if ((uParam0->f_1795 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797)) && VEHICLE::_0xEA44E97849E9F3DD(uParam0->f_1797))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_0xA8BA0BAE0173457B(uParam0->f_1797, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || func_575(iVar2, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) < func_575(iVar1, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_183(uParam0, 8192))
		{
			if (func_575(iVar1, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f) || VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 5f)
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 5f);
				}
			}
			else if ((!func_1847(512) || func_1848(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
			}
		}
	}
}

void func_1281(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if ((uParam0->f_1529[iVar2 /*15*/])->f_11 && VOLUME::_0x92A78D0BEDB332A3((uParam0->f_1529[iVar2 /*15*/])->f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1794) && !(uParam0->f_1529[iVar2 /*15*/])->f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1794, (uParam0->f_1529[iVar2 /*15*/])->f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1794, 1);
				(uParam0->f_1529[iVar2 /*15*/])->f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1583 != 0 || func_183(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
					}
					uParam0->f_1583 = 0;
					func_763(uParam0, 33554432);
				}
				bVar3 = func_1227((uParam0->f_1529[iVar2 /*15*/])->f_10, 131072);
				if (func_1849(Global_35, (uParam0->f_1529[iVar2 /*15*/])->f_12, 0, 1))
				{
					if (uParam0->f_1584 >= 0)
					{
						func_816(uParam0, (uParam0->f_1529[iVar2 /*15*/])->f_10, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
						PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
					}
					if (bVar3)
					{
						func_1850();
					}
					func_1851(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_1852(uParam0->f_1529[iVar2 /*15*/]) != 0)
				{
					func_1851(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_1227((uParam0->f_1529[iVar2 /*15*/])->f_10, 4))
			{
				if (uParam0->f_1584 >= 0)
				{
					if (((func_575(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 && func_1849(uParam0->f_1794, (uParam0->f_1529[iVar2 /*15*/])->f_12, 0, 1)) || uParam0->f_1583 != 0) || func_183(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_693(Global_35, &(uParam0->f_1583), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
							uParam0->f_1583 = 0;
							func_763(uParam0, 33554432);
						}
						else
						{
							func_819(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

int func_1282(var uParam0)
{
	if (uParam0->f_1584 < 0)
	{
		return 0;
	}
	if (func_183(uParam0, 33554432))
	{
		return 0;
	}
	if (func_765(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && uParam0->f_1793)
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771) && VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1772))
	{
		return 1;
	}
	if (func_183(uParam0, 65536))
	{
		return 1;
	}
	return 0;
}

float func_1283(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	fVar16 = 10000f;
	switch (&uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_4, true);
			vVar0 = { (uParam0->f_912[iParam1 /*41*/])->f_4 - (uParam0->f_912[iParam1 /*41*/])->f_1 };
			if (func_1853(&vVar3, (uParam0->f_912[iParam1 /*41*/])->f_1, (uParam0->f_912[iParam1 /*41*/])->f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		
		case 1:
			if (Global_36.f_2 >= (uParam0->f_912[iParam1 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_912[iParam1 /*41*/])->f_1.f_2 + (uParam0->f_912[iParam1 /*41*/])->f_10))
			{
				func_1854(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_1, true) - (uParam0->f_912[iParam1 /*41*/])->f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_1284(var uParam0)
{
	int iVar0;
	
	func_1855(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((uParam0->f_912[iVar0 /*41*/])->f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar0 /*41*/])->f_22)) && func_1856(uParam0, iVar0)) && !func_1288(uParam0->f_912[iVar0 /*41*/], 1))
			{
				if (!func_1857(uParam0, &((uParam0->f_912[iVar0 /*41*/])->f_22)))
				{
					func_881(&(uParam0->f_1667), (uParam0->f_912[iVar0 /*41*/])->f_22, 0, -1, 1, 0);
				}
				func_1858(uParam0->f_912[iVar0 /*41*/], 1);
			}
		}
		iVar0++;
	}
}

float func_1285(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_1286()
{
	return func_1859(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_1287(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 || iParam1);
}

bool func_1288(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_1289(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

void func_1290(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout")) && !uParam0->f_1665)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout", true);
					}
				}
				else if (func_183(uParam0, 32768) && func_1860(uParam0->f_1418[iVar0 /*10*/], 128))
				{
					func_1861((uParam0->f_1418[iVar0 /*10*/])->f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8, 0);
			}
		}
		iVar0++;
	}
}

char* func_1291()
{
	return "default_leadin_camera";
}

void func_1292()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1181125641);
	STREAMING::REMOVE_ANIM_DICT(func_1278(1));
}

void func_1293(var uParam0, var uParam1)
{
	*uParam0 = 0;
	if (!func_1298(uParam1, 8))
	{
		if (func_1298(uParam1, 1))
		{
			*uParam0 = 1;
		}
		else if (func_1298(uParam1, 4))
		{
			*uParam0 = 4;
		}
		else if (func_1298(uParam1, 2))
		{
			*uParam0 = 2;
		}
	}
}

void func_1294(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_1299(sParam0, iParam2);
	func_1862(iParam1, fParam3);
}

void func_1295()
{
	if (MISC::IS_BIT_SET(&Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(Global_1357510, 0);
	}
}

void func_1296(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 || iParam1);
}

char* func_1297()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_1298(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1299(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_1863(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_1863(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_1863(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			CAM::_0x6A4D224FC7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
		{
			CAM::_0xB8B207C34285E978(sParam0);
		}
	}
}

float func_1300(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1285(vVar0, vVar3, iParam2);
}

void func_1301(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

void func_1302(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 - (uParam0->f_1561 && iParam1));
}

int func_1303(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	
	if (func_183(uParam0, 4))
	{
		return 0;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1584 < 0 || uParam0->f_1584 >= 8)
	{
		return 0;
	}
	if (!(uParam0->f_912[uParam0->f_1584 /*41*/])->f_29)
	{
		return 0;
	}
	if (!func_183(uParam0, 4096) && uParam0->f_1792)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_29)
	{
		if (&uParam0->f_912[uParam0->f_1584 /*41*/] == 0)
		{
			vVar3 = { (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4 - (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_1853(&vVar0, uParam0->f_1661, Global_36, vVar6, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1))
			{
				iVar9 = 1;
				if (vVar0.x > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1)
				{
					if (vVar0.x > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_1)
					{
						if (vVar0.y > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 - 0.1f) || vVar0.z > ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 + (uParam0->f_912[uParam0->f_1584 /*41*/])->f_10)) || (func_765(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && (uParam0->f_1793 || uParam0->f_1795)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*uParam1 = uParam0->f_1584;
					return 1;
				}
			}
		}
		else if (func_183(uParam0, 8))
		{
			*uParam1 = uParam0->f_1580;
			return 1;
		}
	}
	return 0;
}

void func_1304(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		(uParam0->f_912[iParam1 /*41*/])->f_28 = 1;
		uParam0->f_1580 = iParam1;
		uParam0->f_1584 = iParam1;
		Global_43804 = iParam1;
		uParam0->f_1665 = 1;
	}
}

void func_1305(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	
	switch ((uParam0->f_371[iParam1 /*18*/])->f_2)
	{
		case 9:
			if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8) && ANIMSCENE::_0xCBFC7725DE6CE2E0((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, 0))
			{
				fVar1 = ANIMSCENE::_0x3FBC3F51BF12DFBF((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2)) && (uParam0->f_3[iVar0 /*13*/])->f_8 > 0f) && fVar1 >= (uParam0->f_3[iVar0 /*13*/])->f_8) && !ENTITY::IS_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2, true);
					}
					iVar0++;
				}
				if (((func_1321(uParam0->f_371[iParam1 /*18*/], 4) && (uParam0->f_371[iParam1 /*18*/])->f_12 < 1f) && fVar1 >= (uParam0->f_371[iParam1 /*18*/])->f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				}
				if (func_1321(uParam0->f_371[iParam1 /*18*/], 64) && func_1864(uParam0, iParam1, 0))
				{
					func_1865(uParam0, (uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
				}
			}
			break;
		
		case 10:
			if (((uParam0->f_371[iParam1 /*18*/])->f_3 >= 0 && (uParam0->f_371[iParam1 /*18*/])->f_5 >= 0) && (uParam0->f_371[iParam1 /*18*/])->f_3 != (uParam0->f_371[iParam1 /*18*/])->f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2) && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2)))
					{
						func_1866(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
					}
					if ((func_1321(uParam0->f_371[iParam1 /*18*/], 128) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2)))
					{
						func_1866(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
					}
				}
			}
			break;
		
		case 4:
			func_1308(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_1306(var uParam0, int iParam1)
{
	if ((uParam0->f_371[iParam1 /*18*/])->f_1 > uParam0->f_1579)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2))
	{
	}
	if (uParam0->f_1579 < 0 || uParam0->f_1579 > 6)
	{
		return 0;
	}
	if ((uParam0->f_371[iParam1 /*18*/])->f_1 == 0)
	{
		return 1;
	}
	if ((uParam0->f_371[iParam1 /*18*/])->f_17 == 2 && func_805(uParam0) == 9)
	{
		return 1;
	}
	if (!func_183(uParam0, 4096) && uParam0->f_1792)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if (&uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if (func_805(uParam0) > 3 && &uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if ((((func_805(uParam0) > 3 && (uParam0->f_371[iParam1 /*18*/])->f_17 == 1) && func_815(uParam0) != 11) && func_814(uParam0, uParam0->f_1580)) && (uParam0->f_371[iParam1 /*18*/])->f_2 != 4)
	{
		return 0;
	}
	if (((uParam0->f_371[iParam1 /*18*/])->f_2 == 9 && (uParam0->f_371[iParam1 /*18*/])->f_4 >= 0) && ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, 1, 0))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, func_1120(Global_35)))
		{
			if (func_1860(uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/], 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_1860(uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/], 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_1307(var uParam0, int iParam1, var uParam2)
{
	switch ((uParam0->f_371[iParam1 /*18*/])->f_2)
	{
		case 9:
			func_1867(uParam0, uParam2, iParam1);
			break;
		
		case 4:
			func_1308(uParam0, iParam1, 0, 0);
			break;
		
		case 5:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22)))
			{
				if (func_215(&(uParam0->f_1768)) >= IntToFloat(((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_25 / 1000)))
				{
					func_1855(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22)))
					{
						func_881(&(uParam0->f_1667), (uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22));
					}
					(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
				}
			}
			else
			{
				(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			}
			break;
		
		case 10:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			break;
		
		case 11:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

int func_1308(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = &uParam0->f_371[iParam1 /*18*/];
		fVar3 = (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7;
		fVar4 = (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (func_815(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_1868(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			}
			if (((!func_765(uParam0->f_912[iVar2 /*41*/], 32) && func_1869()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!func_765(uParam0->f_912[iVar2 /*41*/], 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!func_183(uParam0, 8192))
					{
						VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					func_1317(uParam0, 8);
				}
				else
				{
					func_819(uParam0, 131072);
					func_1317(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				func_1317(uParam0, 5);
			}
			else
			{
				func_1870(uParam0);
			}
			break;
		
		case 1:
			bVar0 = func_438(&(uParam0->f_1765)) >= 3f;
			if ((((!func_1174(Global_35, 716706914) && !func_1174(Global_35, 242628503)) && func_438(&(uParam0->f_1765)) >= 2.5f) || (!func_568(func_1725(Global_35, 0, 1, 0)) && !func_568(func_1725(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_1870(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		
		case 5:
		case 6:
			bVar0 = func_438(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (func_765(uParam0->f_912[uParam0->f_1584 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_814(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (func_693(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_1870(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (func_815(uParam0) == 5 || iParam1 < 0)
				{
					func_1870(uParam0);
				}
				else
				{
					func_1871(uParam0, iParam1, bParam2);
					func_214(&(uParam0->f_1765));
					func_1317(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		
		case 7:
			bVar0 = func_438(&(uParam0->f_1765)) >= 1f;
			if (func_352(Global_35, 242628503) || bVar0)
			{
				func_1317(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		
		case 3:
			if (!func_765(uParam0->f_912[iVar2 /*41*/], 256))
			{
				if (func_1812(&(uParam0->f_1799)))
				{
					func_1872(uParam0->f_1799, 0);
				}
			}
			func_214(&(uParam0->f_1765));
			func_1317(uParam0, 4);
			break;
		
		case 4:
			bVar0 = func_438(&(uParam0->f_1765)) >= 2f;
			if ((func_765(uParam0->f_912[iVar2 /*41*/], 256) || !func_1812(&uVar5)) || bVar0)
			{
				if (func_1873())
				{
					func_1874();
					func_1317(uParam0, 10);
				}
				else
				{
					func_1317(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		
		case 10:
			bVar0 = func_438(&(uParam0->f_1765)) >= 2f;
			if (func_1873() || bVar0)
			{
				func_1317(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		
		case 8:
			bVar0 = func_438(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (func_765(uParam0->f_912[uParam0->f_1584 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_814(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (func_693(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				func_1317(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		
		case 9:
			if (func_438(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!func_183(uParam0, 8192))
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				func_819(uParam0, 131072);
				func_1317(uParam0, 11);
			}
			break;
		
		case 11:
			break;
	}
	return 0;
}

void func_1309(char* sParam0)
{
	if (sParam0->f_16)
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_0xDD0B7C5AE58F721D(sParam0))
		{
			CAM::_0x798BE43C9393632B(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_1310(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 - (uParam0->f_1562.f_1 && iParam1));
}

int func_1311(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	char cVar20[64];
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;
	
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1785);
	if (!bVar0)
	{
		uParam0->f_1785 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1785);
	if (!bVar1)
	{
		return 0;
	}
	func_1875(uParam0);
	func_1268(uParam0, iParam2);
	if (func_183(uParam0, 16384))
	{
		func_1267(uParam0);
	}
	Var2.f_10 = joaat("weapon_unarmed");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_1876(uParam0, iVar18);
		if (func_1877(uParam0, 0))
		{
			if (func_1878(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					(uParam0->f_912[iVar16 /*41*/])->f_27 = 0;
					func_1879(uParam0, 1, &((uParam0->f_912[iVar16 /*41*/])->f_1));
					func_1879(uParam0, 2, &((uParam0->f_912[iVar16 /*41*/])->f_1.f_1));
					func_1879(uParam0, 3, &((uParam0->f_912[iVar16 /*41*/])->f_1.f_2));
					func_1879(uParam0, 4, &((uParam0->f_912[iVar16 /*41*/])->f_11));
					func_1879(uParam0, 5, &((uParam0->f_912[iVar16 /*41*/])->f_12));
					func_1879(uParam0, 6, &((uParam0->f_912[iVar16 /*41*/])->f_13));
					func_1879(uParam0, 7, &((uParam0->f_912[iVar16 /*41*/])->f_4));
					func_1879(uParam0, 8, &((uParam0->f_912[iVar16 /*41*/])->f_4.f_1));
					func_1879(uParam0, 9, &((uParam0->f_912[iVar16 /*41*/])->f_4.f_2));
					func_1879(uParam0, 10, &((uParam0->f_912[iVar16 /*41*/])->f_7));
					func_1879(uParam0, 11, &((uParam0->f_912[iVar16 /*41*/])->f_7.f_1));
					func_1879(uParam0, 12, &((uParam0->f_912[iVar16 /*41*/])->f_7.f_2));
					func_1879(uParam0, 13, &((uParam0->f_912[iVar16 /*41*/])->f_10));
					func_1879(uParam0, 14, &((uParam0->f_912[iVar16 /*41*/])->f_14));
					func_1879(uParam0, 15, &((uParam0->f_912[iVar16 /*41*/])->f_15));
					if (func_1878(uParam0, 16, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/] = iVar17;
					}
					func_1879(uParam0, 19, &((uParam0->f_912[iVar16 /*41*/])->f_16));
					func_1879(uParam0, 20, &((uParam0->f_912[iVar16 /*41*/])->f_17));
					func_1879(uParam0, 31, &((uParam0->f_912[iVar16 /*41*/])->f_18));
					if (func_1880(uParam0, 21, &cVar20))
					{
						MemCopy(&((uParam0->f_912[iVar16 /*41*/])->f_19), {cVar20}, 3);
					}
					if (func_1880(uParam0, 22, &cVar20))
					{
						MemCopy(&((uParam0->f_912[iVar16 /*41*/])->f_22), {cVar20}, 3);
					}
					func_1878(uParam0, 23, &((uParam0->f_912[iVar16 /*41*/])->f_25));
					func_1881(uParam0, &((uParam0->f_912[iVar16 /*41*/])->f_27));
					if (func_1880(uParam0, 35, &((uParam0->f_912[iVar16 /*41*/])->f_30)))
					{
					}
					if (func_1878(uParam0, 39, &iVar17))
					{
						(uParam0->f_912[iVar16 /*41*/])->f_39 = iVar17;
					}
					else
					{
						(uParam0->f_912[iVar16 /*41*/])->f_39 = 1;
					}
					if (func_1879(uParam0, 40, &((uParam0->f_912[iVar16 /*41*/])->f_40)))
					{
						func_1858(uParam0->f_912[iVar16 /*41*/], 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar16 /*41*/])->f_30)))
					{
						(uParam0->f_912[iVar16 /*41*/])->f_30 = { func_925() };
					}
					(uParam0->f_912[iVar16 /*41*/])->f_29 = 1;
					if (uParam0->f_1791 == -1 || (uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 < (uParam0->f_912[iVar16 /*41*/])->f_17)
					{
						uParam0->f_1791 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_912[iVar18 /*41*/])->f_29)
		{
			vVar29 = { vVar29 + (uParam0->f_912[iVar18 /*41*/])->f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1796 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_912[iVar18 /*41*/])->f_29)
		{
			if (!func_703(vVar29, (uParam0->f_912[iVar18 /*41*/])->f_1, 5f, 1))
			{
				uParam0->f_1796 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_1876(uParam0, iVar18);
				if (func_1877(uParam0, 45))
				{
					if (func_1878(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_1882(uParam0->f_1418[iVar16 /*10*/], 2);
							func_1880(uParam0, 46, uParam0->f_1418[iVar16 /*10*/]);
							if (func_1883(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_1882(uParam0->f_1418[iVar16 /*10*/], 1);
								}
							}
							if (func_1878(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_1882(uParam0->f_1418[iVar16 /*10*/], 8);
								}
								else if (iVar17 == 2)
								{
									func_1882(uParam0->f_1418[iVar16 /*10*/], 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 27)
			{
				iVar16 = -1;
				func_1876(uParam0, iVar18);
				if (func_1877(uParam0, 50))
				{
					if (func_1878(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_1878(uParam0, 43, &(Var2.f_3));
					if (func_1880(uParam0, 52, &cVar20))
					{
						MemCopy(&(Var2.f_4), {cVar20}, 4);
					}
					func_1879(uParam0, 53, &(Var2.f_8));
					if (func_1878(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_1883(uParam0, 55, &(Var2.f_11));
					func_1883(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_1884(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 27)
						{
							(uParam0->f_3[iVar32 /*13*/])->f_3 = Var2.f_3;
							(uParam0->f_3[iVar32 /*13*/])->f_4 = { Var2.f_4 };
							(uParam0->f_3[iVar32 /*13*/])->f_8 = Var2.f_8;
							(uParam0->f_3[iVar32 /*13*/])->f_10 = Var2.f_10;
							(uParam0->f_3[iVar32 /*13*/])->f_11 = Var2.f_11;
							(uParam0->f_3[iVar32 /*13*/])->f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (func_1885(Var2.f_1))
							{
								func_819(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_1876(uParam0, iVar18);
			if (func_1877(uParam0, 82))
			{
				if (func_1880(uParam0, 83, &cVar20))
				{
					MemCopy(&(uParam0->f_355), {cVar20}, 4);
				}
				func_1880(uParam0, 84, &(uParam0->f_355.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355.f_4)))
				{
					if (uParam0->f_355.f_15 == 1)
					{
						uParam0->f_355.f_4 = { func_253() };
					}
					else if (uParam0->f_355.f_15 == 2)
					{
						uParam0->f_355.f_4 = { func_925() };
					}
					else
					{
						uParam0->f_355.f_4 = { func_925() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_1876(uParam0, iVar18);
				if (func_1877(uParam0, 57))
				{
					if (func_1878(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_371[iVar16 /*18*/])->f_8 = 0;
							func_1878(uParam0, 58, uParam0->f_371[iVar16 /*18*/]);
							if (func_1878(uParam0, 59, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_1 = func_1886(iVar17);
							}
							if (func_1878(uParam0, 60, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_2 = func_1887(iVar17);
							}
							func_1878(uParam0, 61, &((uParam0->f_371[iVar16 /*18*/])->f_3));
							func_1879(uParam0, 67, &((uParam0->f_371[iVar16 /*18*/])->f_10));
							func_1879(uParam0, 70, &((uParam0->f_371[iVar16 /*18*/])->f_11));
							func_1879(uParam0, 68, &((uParam0->f_371[iVar16 /*18*/])->f_9));
							func_1878(uParam0, 72, &((uParam0->f_371[iVar16 /*18*/])->f_5));
							func_1879(uParam0, 77, &((uParam0->f_371[iVar16 /*18*/])->f_12));
							func_1878(uParam0, 78, &((uParam0->f_371[iVar16 /*18*/])->f_13));
							func_1878(uParam0, 79, &((uParam0->f_371[iVar16 /*18*/])->f_14));
							if (func_1878(uParam0, 73, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_17 = iVar17;
							}
							if (func_1878(uParam0, 75, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_4 = iVar17;
								bVar15 = true;
							}
							func_1879(uParam0, 80, &((uParam0->f_371[iVar16 /*18*/])->f_15));
							if (func_1883(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 1;
								}
							}
							if (func_1883(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 512;
								}
							}
							if (func_1883(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 2;
								}
							}
							if (func_1883(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 16;
								}
							}
							if (func_1883(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 32;
								}
							}
							if (func_1883(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 4;
								}
							}
							if (func_1883(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 64;
								}
							}
							if (func_1883(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 128;
								}
							}
							if (func_1883(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 256;
								}
							}
							if (!bVar15 && (uParam0->f_371[iVar16 /*18*/])->f_2 == 9)
							{
								(uParam0->f_371[iVar16 /*18*/])->f_4 = (uParam0->f_371[iVar16 /*18*/])->f_3;
								(uParam0->f_371[iVar16 /*18*/])->f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							(uParam0->f_371[iVar16 /*18*/])->f_16 = (uParam0->f_371[iVar16 /*18*/])->f_2;
							(uParam0->f_371[iVar16 /*18*/])->f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1790 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_1876(uParam0, iVar18);
				if (func_1877(uParam0, 85))
				{
					func_1878(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_1883(uParam0, 87, uParam0->f_1241[iVar18 /*22*/]);
						func_1880(uParam0, 96, &((uParam0->f_1241[iVar18 /*22*/])->f_2));
						func_1880(uParam0, 97, &((uParam0->f_1241[iVar18 /*22*/])->f_10));
						func_1879(uParam0, 93, &((uParam0->f_1241[iVar18 /*22*/])->f_18));
						func_1879(uParam0, 94, &((uParam0->f_1241[iVar18 /*22*/])->f_19));
						func_1878(uParam0, 95, &((uParam0->f_1241[iVar18 /*22*/])->f_20));
						(uParam0->f_1241[iVar18 /*22*/])->f_1 = 0;
						func_1888(uParam0, &((uParam0->f_1241[iVar18 /*22*/])->f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_1876(uParam0, iVar18);
				if (func_1877(uParam0, 98))
				{
					if (func_1878(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_1529[iVar16 /*15*/])->f_10 = 0;
							func_1889(uParam0, 99, uParam0->f_1529[iVar16 /*15*/]);
							func_1889(uParam0, 100, &((uParam0->f_1529[iVar16 /*15*/])->f_6));
							func_1889(uParam0, 101, &((uParam0->f_1529[iVar16 /*15*/])->f_3));
							if (func_1878(uParam0, 102, &iVar17))
							{
								(uParam0->f_1529[iVar16 /*15*/])->f_9 = iVar17;
							}
							func_1881(uParam0, &((uParam0->f_1529[iVar16 /*15*/])->f_10));
							(uParam0->f_1529[iVar16 /*15*/])->f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1785);
			func_819(uParam0, 1);
			func_819(uParam0, 16384);
			func_1890(uParam0);
			return 1;
		}
	}

int func_1312(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1418[iVar0 /*10*/]) && func_1860(uParam0->f_1418[iVar0 /*10*/], 2)) && !func_1860(uParam0->f_1418[iVar0 /*10*/], 16)) && func_1891(uParam0, iVar0))
		{
			if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
			{
				(uParam0->f_1418[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/], 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				return 0;
			}
			else if (!ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1418[iVar0 /*10*/])->f_8, 0))
			{
				return 0;
			}
			if (ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout"))
			{
				func_1882(uParam0->f_1418[iVar0 /*10*/], 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
			func_1882(uParam0->f_1418[iVar0 /*10*/], 16);
		}
		iVar0++;
	}
	return 1;
}

void func_1313(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1418[iVar0 /*10*/]) && func_1860(uParam0->f_1418[iVar0 /*10*/], 2))
		{
			iVar1 = 0;
			if (func_1891(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			(uParam0->f_1418[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/], iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_1291(), 64);
	StringCopy(&(Var2.f_8), func_1297(), 64);
	uParam0->f_1604 = { Var2 };
	uParam0->f_1627 = { Var2 };
	if (!func_764(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(func_1291());
		func_1287(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1241[iVar0 /*22*/])->f_2), func_1291()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
			{
				CAM::_0x6A4D224FC7643941(&((uParam0->f_1241[iVar0 /*22*/])->f_2));
				(uParam0->f_1241[iVar0 /*22*/])->f_21 = 1;
			}
		}
		iVar0++;
	}
}

int func_1314(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
		{
			if (!func_1860(uParam0->f_1418[iVar0 /*10*/], 64))
			{
				if (ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1418[iVar0 /*10*/])->f_8, 0))
				{
					func_1892(uParam0, (uParam0->f_1418[iVar0 /*10*/])->f_8);
					ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
					bVar1 = false;
					func_1882(uParam0->f_1418[iVar0 /*10*/], 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_0x477122B8D05E7968((uParam0->f_1418[iVar0 /*10*/])->f_8, 1, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar0 /*41*/])->f_19)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_912[iVar0 /*41*/])->f_19), "empty"))
		{
			HUD::_0xF66090013DE648D5(&((uParam0->f_912[iVar0 /*41*/])->f_19));
			if (!HUD::_0xD0976CC34002DB57(&((uParam0->f_912[iVar0 /*41*/])->f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_764(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(func_1291()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && (uParam0->f_1241[iVar0 /*22*/])->f_21) && !CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_257(uParam0->f_1781) || uParam0->f_1784 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_0xADF1D53F3B1FE0A7((uParam0->f_1418[iVar0 /*10*/])->f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1784, uParam0->f_1781) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1784);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN((uParam0->f_1418[iVar0 /*10*/])->f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_1315(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2)) && !func_1735((uParam0->f_3[iVar0 /*13*/])->f_2)) && func_568((uParam0->f_3[iVar0 /*13*/])->f_10)) && !func_1885((uParam0->f_3[iVar0 /*13*/])->f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 0, 0))
				{
					if (func_1394((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if ((uParam0->f_3[iVar0 /*13*/])->f_11)
				{
					if (func_442(iVar1, 0, 0, 0) != (uParam0->f_3[iVar0 /*13*/])->f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1316(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && (uParam0->f_3[iVar0 /*13*/])->f_12)
		{
			func_1893(uParam0->f_3[iVar0 /*13*/]);
		}
		iVar0++;
	}
}

void func_1317(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_214(&(uParam0->f_1765));
}

void func_1318(var uParam0)
{
	func_1894(uParam0);
	func_1895(uParam0);
}

void func_1319(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_521(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_1320(var uParam0)
{
	if (uParam0->f_1581 < 0 || (uParam0->f_371[uParam0->f_1581 /*18*/])->f_4 < 0)
	{
		return -1;
	}
	return (uParam0->f_1418[(uParam0->f_371[uParam0->f_1581 /*18*/])->f_4 /*10*/])->f_8;
}

bool func_1321(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

Vector3 func_1322(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

bool func_1323(int iParam0, int iParam1)
{
	return func_571(&(Global_1900073->f_2[iParam0]), iParam1);
}

int func_1324(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false) && &Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_1325()
{
	return (func_1619(150f, BUILTIN::TO_FLOAT(Global_1934765->f_286)) / BUILTIN::TO_FLOAT(300));
}

int func_1326()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1327(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	float fVar9;
	
	if ((iParam0 < 0 || iParam1 < 0) || iParam2 < 0)
	{
		return 0;
	}
	if (iParam0 >= 24)
	{
		iParam0 = 0;
	}
	iVar0 = func_459();
	if (func_708(iVar0) > iParam0)
	{
		if (func_712(iVar0) + 1 > func_1582(func_713(iVar0), func_714(iVar0)))
		{
			if (func_713(iVar0) == 11)
			{
				func_1583(&iVar1, iParam2, iParam1, iParam0, 1, 0, func_714(iVar0) + 1);
			}
			else
			{
				func_1583(&iVar1, iParam2, iParam1, iParam0, 1, func_713(iVar0) + 1, func_714(iVar0));
			}
		}
		else
		{
			func_1583(&iVar1, iParam2, iParam1, iParam0, func_712(iVar0) + 1, func_713(iVar0), func_714(iVar0));
		}
	}
	else
	{
		func_1583(&iVar1, iParam2, iParam1, iParam0, func_712(iVar0), func_713(iVar0), func_714(iVar0));
	}
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
	{
		if (func_1456(iVar1, 1))
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			return 1;
		}
		if (!bParam3)
		{
			if (!func_1456(iVar1, 1))
			{
				func_1896(iVar0, iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
				if (iVar4 == 0)
				{
					if (iVar3 == 0 && iVar2 <= 5)
					{
						CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
					}
					else
					{
						iVar8 = BUILTIN::FLOOR((2000f / (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(60))));
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(iVar8);
					}
				}
				else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
				{
					fVar9 = (IntToFloat((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() - 2000)) * 0.1f);
					fVar9 = (IntToFloat(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE()) - fVar9);
					if (MISC::ABSF((fVar9 - 2000f)) < 2000f)
					{
						fVar9 = 2000f;
					}
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(BUILTIN::FLOOR(fVar9));
				}
			}
		}
	}
	else if (!func_1456(iVar1, 1))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	return 0;
}

bool func_1328(char* sParam0)
{
	return func_1897(sParam0);
}

int func_1329()
{
	STREAMING::REQUEST_MODEL(Local_18.f_1, false);
	STREAMING::REQUEST_MODEL(Local_18.f_2, false);
	STREAMING::REQUEST_MODEL(Local_18.f_3, false);
	if ((STREAMING::HAS_MODEL_LOADED(Local_18.f_1) && STREAMING::HAS_MODEL_LOADED(Local_18.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_18.f_3))
	{
		return 1;
	}
	return 0;
}

bool func_1330(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_18.f_4))
	{
		Local_18.f_4 = "line_attach";
	}
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, Local_18.f_4);
	vVar1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - Local_18.f_10);
		Local_18.f_5 = OBJECT::CREATE_OBJECT(Local_18.f_1, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_15);
		ENTITY::_0x978AA2323ED32209(Local_18.f_5, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_5, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - (Local_18.f_10 + Local_18.f_11));
		Local_18.f_6 = OBJECT::CREATE_OBJECT(Local_18.f_2, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_15);
		ENTITY::_0x978AA2323ED32209(Local_18.f_6, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_6, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5) && ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		if (!PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
		{
			vVar4 = { vVar1 };
			Local_18.f_8 = PHYSICS::_0xE9C59F6809373A99(vVar4, 0f, 0f, 0f, Local_18.f_12, 8, 0, -1, -1082130432);
			PHYSICS::_0xD699E688B49C0FD2(Local_18.f_8, 0.5f, Local_18.f_10, Local_18.f_10, 1);
			PHYSICS::_0x462FF2A432733A44(Local_18.f_8, iParam0, Local_18.f_5, 0f, 0f, 0f, 0f, 0f, 0f, Local_18.f_4, "rod_attach");
			PHYSICS::_0x3C6490D940FF5D0B(Local_18.f_8, 0, 0, -1082130432, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_18.f_8, 1, 1, 1, 0);
			PHYSICS::_0x423C6B1F3786D28B(Local_18.f_8, 1);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_18.f_8, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_18.f_8, 2f);
			PHYSICS::_0x1D97DA8ACB5D2582(Local_18.f_8, 15);
		}
		if (!PHYSICS::DOES_ROPE_EXIST(Local_18.f_9))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_5, true, false) };
			Local_18.f_9 = PHYSICS::_0xE9C59F6809373A99(vVar4, 0f, 0f, 0f, Local_18.f_11, 10, 0, -1, -1082130432);
			PHYSICS::_0xD699E688B49C0FD2(Local_18.f_9, 0.5f, Local_18.f_11, Local_18.f_11, 1);
			PHYSICS::_0x462FF2A432733A44(Local_18.f_9, Local_18.f_5, Local_18.f_6, 0f, 0f, 0f, 0f, 0f, 0f, "hook_attach", "fishingLine_bone");
			PHYSICS::_0x3C6490D940FF5D0B(Local_18.f_9, 0, 0, -1082130432, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_18.f_9, 1, 1, 1, 0);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_18.f_9, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_18.f_9, 0f);
		}
	}
	return (PHYSICS::DOES_ROPE_EXIST(Local_18.f_8) && PHYSICS::DOES_ROPE_EXIST(Local_18.f_9));
}

int func_1331(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
	{
		return 0;
	}
	if (Local_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(Local_18.f_8, Local_18.f_13);
		PHYSICS::START_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 1;
		func_1898(iParam0);
	}
	else if (PHYSICS::_0x3D69537039F8D824(Local_18.f_8) >= Local_18.f_12)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 0;
		return 1;
	}
	return 0;
}

int func_1332()
{
	if ((!PHYSICS::DOES_ROPE_EXIST(Local_18.f_8) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		return 0;
	}
	if (Local_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(Local_18.f_8, Local_18.f_14);
		PHYSICS::START_ROPE_WINDING(Local_18.f_8);
		Local_18.f_17 = 1;
	}
	else if (PHYSICS::_0x3D69537039F8D824(Local_18.f_8) <= Local_18.f_10)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 0;
		PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_15);
		PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_15);
		return 1;
	}
	return 0;
}

void func_1333(var uParam0, bool bParam1, int iParam2)
{
	func_1899(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_1900(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_1064(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1901(1))
						{
							func_1064(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_1901(1) || *uParam0 & 8192 != 0))
				{
					func_1063(uParam0, 33554432);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_1902(uParam0))
			{
				uParam0->f_15 = func_273();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_273() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_1903(uParam0);
}

int func_1334(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_1904(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_1905(iParam0, iVar2) <= func_1906(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1335(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_1907(iParam2, 1, 1, 1, 0))
	{
		func_1064(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_1908(uParam1, 1);
	func_445();
}

int func_1336(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1909(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1910(uParam1);
			if (func_1911(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_1912(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1908(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_1908(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1337(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_1913(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1910(uParam2);
		if (func_1911(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_1912(uParam2)
				{
					func_1908(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1338(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_1904(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_1912(uParam1)
		{
			fVar3 = func_1910(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1339(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_1340(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_1914(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_1348(uParam2, iParam1))
			{
				func_1908(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_1341(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	if (uParam2->f_12 < IntToFloat(func_1915(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_1348(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_1908(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1342(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1916(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_1908(uParam2, 1);
					return 1;
				}
				break;
			
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_1908(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_1917(iParam1, vVar0, vVar4))
					{
						func_1908(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_1908(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_1917(iParam1, vVar0, vVar7))
					{
						func_1908(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_1343(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1904(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1918(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1919(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_1920(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1921(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1922(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1344(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_1345(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_1346(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_1923(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_1924(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1347(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_1348(var uParam0, int iParam1)
{
	if (func_1925(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1349(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_218(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1350()
{
}

int func_1351(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_1926(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_273();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_575(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_273();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_1352()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_273() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_1353(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_1906(uParam0);
	if (uParam0->f_12 > func_1927(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_1928(iParam1);
	iVar1 = func_1929(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1354(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1930(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_1355(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_1931(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_1932(uParam1, iParam0))
					{
						if (func_575(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_1356(int iParam0, var uParam1)
{
	if (!func_1933(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_1357(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1358(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_1359(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_273();
	}
	else if (func_273() - uParam1->f_4) > func_1934(uParam1)
	{
		return func_1935(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_1360(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

void func_1361(char* sParam0, int iParam1, int iParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, iParam1, iParam2);
}

char* func_1362()
{
	return UILOG::_UILOG_GET_CACHED_OBJECTIVE();
}

void func_1363(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_1364(int iParam0, int iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1936(iParam0, iParam1))
		{
			if (!func_1065(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_867(uParam2, 0, 0, 1, 0);
				func_1064(&(iParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_1065(iParam1->f_10, 1))
		{
			func_1937(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_1063(&(iParam1->f_10), 1);
		}
	}
	return 0;
}

int func_1365(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = func_1065(iParam4, 32);
		func_1938(iParam1, uParam2, 0);
		iVar5 = func_1939(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return 1;
		}
		func_867(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_1065(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_1065(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_1065(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_1065(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_1065(iParam4, 8388608) || func_1065(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_1065(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_1065(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1367(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_1367(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_1065(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1940(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (func_1065(iParam4, 268435456))
			{
				iVar8 = func_1941(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1942(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_1367(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (func_1065(iParam4, 2) || func_1065(iParam4, 16))
			{
				func_1366(*iParam0, 1, 1);
			}
			else
			{
				func_1366(*iParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_1366(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_1367(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_1368(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_1943(*iParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1369(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_1944(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_1065(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_1370(int iParam0)
{
	if (func_1065(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_1065(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_1065(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

int func_1371(int* iParam0, var uParam1)
{
	int iVar0;
	
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, 1287709438) || PAD::IS_CONTROL_PRESSED(0, 1499911466)) || PAD::IS_CONTROL_PRESSED(0, -209515122)) || func_1945()) || func_1946()) || func_1873())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_214(&(iParam0->f_46));
	}
	if (func_79(&(iParam0->f_46)) && !func_1720(&(iParam0->f_46), 0.25f))
	{
		func_1947(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_1372(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	
	iVar1 = func_1948(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_1949(Global_35)) || func_1950(Global_35)) || func_1951(Global_35));
	fVar12 = -1f;
	if (func_79(&(iParam1->f_13)))
	{
		fVar12 = func_215(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_717(((*uParam4)[iVar0 /*17*/])->f_6);
		func_1952(*iParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1953(*iParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1954(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_867(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1381(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_1938(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							func_1955(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_1170(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (func_568(func_1725(Global_35, 0, 1, 0)) || func_568(func_1725(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_0xA911EE21EDF69DAF(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_1956(iParam1, fParam6, iParam1->f_9))
					{
						func_214(&(iParam1->f_18));
						if (bVar6)
						{
							func_1381(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_1957(iParam1, fParam2);
	}
	return bVar5;
}

void func_1373(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_1374(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_315((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_1957(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_1375(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_1958(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1959(iParam1, 0);
				func_1938(iParam1, uParam2, func_1367(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

void func_1376(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1952(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1377(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_1378(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1960(iParam0, vVar0, fParam2);
}

int func_1379(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_1380(int* iParam0)
{
	var uVar0;
	bool bVar1;
	
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_1812(&uVar0))
		{
			func_80(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1961())
			{
			}
		}
		else
		{
			func_80(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = func_438(&(iParam0->f_37)) >= 1.5f;
		if ((!func_1812(&uVar0) || func_1961()) || bVar1)
		{
			if (bVar1)
			{
				func_1962();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return 1;
		}
	}
	return 0;
}

void func_1381(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_866((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_1382(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_214(&(iParam1->f_18));
			return 0;
		}
		else if (func_79(&(iParam1->f_18)))
		{
			func_243(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_79(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_1963(&(iParam1->f_18), fParam2);
	return 1;
}

void func_1383(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	func_1964(iParam0, 0);
	func_1938(iParam0, uParam1, 1);
	func_867(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

Vector3 func_1384(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

Vector3 func_1385(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	
	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

float func_1386(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

bool func_1387(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_1388(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_1389(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_717(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1197(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1965(iVar0);
	*uParam0 = 0;
}

Vector3 func_1390()
{
	if (func_756(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_756(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_1391(int iParam0, int iParam1)
{
	iParam0 = func_484(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

void func_1392(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

var func_1393(int iParam0, int iParam1)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1394(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

Vector3 func_1395(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_861((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_1396()
{
	return func_888(_NAMESPACE71::_0xC17F69E1418CD11F(4));
}

int func_1397(int iParam0)
{
	if (((((((iParam0 == 1110710183 || iParam0 == -1963605336) || iParam0 == 2028722809) || iParam0 == 252669332) || iParam0 == 1465438313) || iParam0 == 1459778951) || iParam0 == -541762431) || iParam0 == 480688259)
	{
		return 1;
	}
	return 0;
}

int func_1398()
{
	int iVar0;
	
	if (func_892(2.3f))
	{
		if (!iLocal_1027)
		{
			if (iLocal_1025 > 0)
			{
				iLocal_1027 = 1;
			}
		}
		iVar0 = 0;
	}
	else if (func_892(0.5f))
	{
		iVar0 = 1;
	}
	else if (!func_892(0.1f))
	{
		iVar0 = 2;
	}
	return iVar0;
}

char* func_1399(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "NULL";
			break;
		
		case 1:
			if (iLocal_1025 == 0)
			{
				sVar0 = "ABI1_JAKFAST1";
			}
			else if (!iLocal_1026 && iLocal_1027)
			{
				sVar0 = "ABI1_JAKFAST2";
				iLocal_1026 = 1;
			}
			else
			{
				sVar0 = "ABI1_RDFASTER";
			}
			iLocal_1025++;
			break;
		
		case 2:
			sVar0 = "ABI1_JRSLOWRD";
			break;
	}
	return sVar0;
}

int func_1400(int iParam0)
{
	struct<5> Var0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_1401(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1494(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1768(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1966(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_1637(bParam2), iParam0, 0);
	return iVar2;
}

void func_1402()
{
	if (MISC::_0x0D0AE5081F88CFE1(-2137341727))
	{
		MISC::_0x154340E87D8CC178(-2137341727);
	}
	if (MISC::_0x0D0AE5081F88CFE1(-1564940634))
	{
		MISC::_0x154340E87D8CC178(-1564940634);
	}
	if (MISC::_0x0D0AE5081F88CFE1(-1881226198))
	{
		MISC::_0x154340E87D8CC178(-1881226198);
	}
}

void func_1403(int iParam0, float fParam1)
{
	struct<6> Var0;
	
	MISC::_0x94FCADCF9F0C368E(iParam0);
	Var0.f_3 = 4;
	Var0 = 1427759409;
	Var0.f_1 = fParam1;
	Var0.f_5 = 1;
	Var0.f_4 = 0;
	MISC::_0xAF3A84C7DE6A1DC5(iParam0, &Var0);
}

int func_1404(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -467647619;
		
		case 2:
			return -1692078269;
		
		case 3:
			return -1411867178;
		
		case 4:
			return -1295797652;
		
		case 5:
			return -1306960697;
		
		case 6:
			return 567333282;
		
		case 7:
			return 669046098;
		
		case 8:
			return -1099073159;
		
		case 9:
			return 1137962872;
		
		case 10:
			return -74329438;
		
		case 11:
			return 1637646544;
		
		case 12:
			return 1226042171;
		
		case 13:
			return -338802011;
		
		case 14:
			return 1476368342;
		
		case 15:
			return 794168062;
		
		case 16:
			return -1058589986;
		
		case 17:
			return 1586830886;
		
		case 18:
			return 676666991;
		
		case 19:
			return -770025009;
		
		case 20:
			return -1897617972;
		
		case 21:
			return -930732451;
		
		case -1:
		case 0:
		case 22:
			return 0;
		
		default:
			break;
	}
	return 0;
}

int func_1405(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1692636244;
		
		case 2:
			return -1014982708;
		
		case 3:
			return -1073061309;
		
		case 4:
			return -1255977291;
		
		case 5:
			return -222065427;
		
		case 6:
			return 1097021450;
		
		case 7:
			return -1103252731;
		
		case 8:
			return -717460974;
		
		case 9:
			return -1493460403;
		
		case 10:
			return 1749015556;
		
		case 11:
			return 1637212828;
		
		case 12:
			return -1193524449;
		
		case 13:
			return -363803270;
		
		case 14:
			return 308888437;
		
		case 15:
			return -2135469418;
		
		case 16:
			return -666501838;
		
		case 17:
			return -1275900794;
		
		case 18:
			return 1669790260;
		
		case 19:
			return 1328065892;
		
		case 20:
			return 923251562;
		
		case 21:
			return 2082971178;
		
		case -1:
		case 0:
		case 22:
			return 0;
		
		default:
			break;
	}
	return 0;
}

char* func_1406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		
		case 1:
			return "HEADSHOT_JOHN";
		
		case 2:
			return "HEADSHOT_JAVIER";
		
		case 3:
			return "HEADSHOT_BILL";
		
		case 4:
			return "HEADSHOT_UNCLE";
		
		case 5:
			return "HEADSHOT_HOSEA";
		
		case 6:
			return "HEADSHOT_MICAH";
		
		case 7:
			return "HEADSHOT_CHARLES";
		
		case 8:
			return "HEADSHOT_SEAN";
		
		case 9:
			return "HEADSHOT_LENNY";
		
		case 10:
			return "HEADSHOT_KIERAN";
		
		case 11:
			return "HEADSHOT_SADIE";
		
		case 13:
			return "HEADSHOT_ABIGAIL";
		
		case 14:
			return "HEADSHOT_JACK";
		
		case 15:
			return "HEADSHOT_MARYBETH";
		
		case 16:
			return "HEADSHOT_MOLLY";
		
		case 17:
			return "HEADSHOT_PEARSON";
		
		case 18:
			return "HEADSHOT_STRAUSS";
		
		case 19:
			return "HEADSHOT_SUSAN";
		
		case 20:
			return "HEADSHOT_KAREN";
		
		case 21:
			return "HEADSHOT_SWANSON";
		
		case 22:
			return "HEADSHOT_TILLY";
		
		case 23:
			return "HEADSHOT_TRELAWNY";
		
		case 24:
			return "HEADSHOT_CLEET";
		
		case 25:
			return "HEADSHOT_JOE";
		
		default:
			break;
	}
	return "";
}

int func_1407()
{
	return Global_40.f_4283;
}

int func_1408(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -400046463;
		
		case 2:
			return 612022325;
		
		case 3:
			return -408808829;
		
		case 4:
			return -1166493723;
		
		case 5:
			return 636060187;
		
		case 6:
			return 908457788;
		
		case 7:
			return 1000496542;
		
		case 8:
			return 1291752698;
		
		case 9:
			return 28343229;
		
		case 10:
			return -442212335;
		
		case 11:
			return -905786637;
		
		case 12:
			return -32720610;
		
		case 13:
			return 1867124758;
		
		case 14:
			return 1191082472;
		
		case 15:
			return -2055932072;
		
		case 16:
			return 860706848;
		
		case 17:
			return 431084994;
		
		case 18:
			return -1845699285;
		
		case 19:
			return -309743615;
		
		case 20:
			return -1308505388;
		
		case 21:
			return -1196637421;
		
		case -1:
		case 0:
		case 22:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_1409(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = iParam0;
	if (iParam1 == 0)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, sParam2);
	}
	else
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, iParam1);
	}
	StringCopy(&((Global_1359489->f_361.f_258[iVar0 /*6*/])->f_2), sVar1, 32);
}

void func_1410(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_1404(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(9, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(9, func_1404(*uParam0), iParam1, sParam2, iParam3, iParam5, 0);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489->f_361.f_194 = func_944("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(func_1406(uParam0->f_3)), 1433015236, "INPUT_FEED_INTERACT_GENERIC", -1507719118, 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

int func_1411(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 10:
		case 11:
		case 18:
			return 761950088;
		
		case 5:
			return -1131986109;
		
		case 6:
			return 1756591705;
		
		case 8:
			return 2110897046;
		
		case 9:
			return 1947074040;
		
		case 12:
			return 361762491;
		
		case 13:
			return 542329524;
		
		case 14:
			return -918949028;
		
		case 16:
			return -407171189;
		
		case 15:
			return -1303018308;
		
		case 17:
			return -1427069925;
		
		case 19:
			return -1950223422;
		
		case 20:
			return 364912121;
		
		case 21:
			return -2103092431;
		
		default:
			break;
	}
	return 0;
}

void func_1412()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_291))
		{
			ENTITY::DETACH_ENTITY(iLocal_291, false, true);
		}
		if (PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInLeftHand"))
		{
			PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInLeftHand", 0, -1);
		}
		if (PED::_0x4912DFE492DB98CD(iLocal_301, "FishingRodInRightHand"))
		{
			PED::_0xCB9401F918CB0F75(iLocal_301, "FishingRodInRightHand", 0, -1);
		}
	}
}

int func_1413()
{
	if (func_444())
	{
		return 0;
	}
	if (iLocal_165)
	{
		return 0;
	}
	if (func_923(0))
	{
		return 0;
	}
	if (func_845(0))
	{
		return 0;
	}
	if (func_1430(0))
	{
		return 0;
	}
	return 1;
}

void func_1414()
{
	func_908(0, 0);
}

int func_1415(float fParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		vVar0 = { Global_36 + Vector(10f, 0f, 0f) };
		vVar3 = { Global_36 };
		if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar0, 0, &(vVar0.f_2)) == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar3.f_2), 0);
			fVar6 = (vVar0.z - vVar3.z);
			if (fVar6 > fParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_1416(int iParam0)
{
	if (func_521(iParam0))
	{
		if (func_209(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		
		case 3:
			return "BILL";
		
		case 1:
			return "JOHN";
		
		case 2:
			return "JAVIER";
		
		case 4:
			return "UNCLE";
		
		case 5:
			return "HOSEA";
		
		case 6:
			return "MICAH";
		
		case 7:
			return "CHARLES";
		
		case 8:
			return "SEAN";
		
		case 9:
			return "LENNY";
		
		case 13:
			return "ABIGAIL";
		
		case 10:
			return "KIERAN";
		
		case 14:
			return "JACK";
		
		case 15:
			return "MARYBETH";
		
		case 16:
			return "MOLLY";
		
		case 17:
			return "PEARSON";
		
		case 18:
			return "STRAUSS";
		
		case 19:
			return "GRIMSHAW";
		
		case 20:
			return "KAREN";
		
		case 21:
			return "SWANSON";
		
		case 22:
			return "TILLY";
		
		case 23:
			return "TRELAWNY";
		
		case 11:
			return "SADIE";
		
		case 24:
			return "CLEET";
		
		case 25:
			return "JOE";
		
		case 26:
			return "EAGLEFLIES";
		
		case 12:
			return "DOG";
		
		default:
			break;
	}
	return "Companion unknown";
}

bool func_1418()
{
	if (func_205() != -1)
	{
		return false;
	}
	return func_1273(1) > 0;
}

void func_1419(var uParam0)
{
	int iVar0;
	
	if (func_79(&uLocal_558))
	{
		if (func_215(&uLocal_558) <= 90f)
		{
			if (func_426(0) > iLocal_192)
			{
				func_1967(uParam0, -236492937);
				func_243(&uLocal_558);
			}
		}
		else
		{
			func_243(&uLocal_558);
		}
	}
	switch (iLocal_779)
	{
		case 0:
			if (func_426(0) > iLocal_192)
			{
				if (!func_419())
				{
					iVar0 = func_1968(0);
					if (iVar0 == 0)
					{
						sLocal_489 = "ABI1_1STCATCH";
					}
					else if (iVar0 == 2)
					{
						sLocal_489 = "ABI1_1STCATCH_C";
					}
					else if (iVar0 == 12)
					{
						sLocal_489 = "ABI1_1STCATCH_S";
					}
					else if (iVar0 == 11)
					{
						sLocal_489 = "ABI1_1STCATCH_R";
					}
					else if (iVar0 == 9)
					{
						sLocal_489 = "ABI1_1STCATCH_P";
					}
					else if (iVar0 == 10)
					{
						sLocal_489 = "ABI1_1STCTCH_RP";
					}
					else
					{
						sLocal_489 = "";
					}
					iLocal_182 = iVar0;
					iLocal_165 = 1;
					if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489) || func_210(24))
					{
						iLocal_192 = func_426(0);
						func_1969(iLocal_779, 1);
					}
					else if (func_406(uParam0, sLocal_489, 0))
					{
						iLocal_192 = func_426(0);
						func_1969(iLocal_779, 1);
					}
				}
			}
			break;
		
		case 1:
			if (!func_419() || MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489))
			{
				if (!func_210(24))
				{
					if (func_406(uParam0, "ABI1_THROBACK", 0))
					{
						func_1969(iLocal_779, 2);
					}
				}
				else
				{
					func_1969(iLocal_779, 2);
				}
			}
			break;
		
		case 2:
			if (!func_419() || MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489))
			{
				if (func_1970())
				{
					if (func_1971(0) || func_210(24))
					{
						if (func_406(uParam0, "ABI1_DEADFISH", 0))
						{
							func_1969(iLocal_779, 3);
						}
					}
					else
					{
						iLocal_165 = 0;
						func_1969(iLocal_779, 4);
					}
				}
			}
			break;
		
		case 3:
			if (!func_419())
			{
				iLocal_165 = 0;
				func_1969(iLocal_779, 4);
			}
			break;
		
		case 4:
			if (func_426(0) > iLocal_192)
			{
				if (!func_419())
				{
					iVar0 = func_1968(0);
					if (iVar0 == 0)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_B2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_B";
						}
					}
					else if (iVar0 == 2)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_C2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_C";
						}
					}
					else if (iVar0 == 12)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_S2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_S";
						}
					}
					else if (iVar0 == 11)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_R2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_R";
						}
					}
					else if (iVar0 == 9)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_P2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_P";
						}
					}
					else if (iVar0 == 10)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTH_RP2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCTCH_RP";
						}
					}
					else
					{
						sLocal_489 = "";
					}
					if (!iLocal_165)
					{
						iLocal_165 = 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489) || func_210(24))
					{
						iLocal_192 = func_426(0);
						func_1427();
						func_1969(iLocal_779, 5);
					}
					else if (func_406(uParam0, sLocal_489, 0))
					{
						iLocal_192 = func_426(0);
						func_1427();
						func_1969(iLocal_779, 5);
					}
				}
			}
			break;
		
		case 5:
			if (!func_419() || MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489))
			{
				if (func_1970())
				{
					if (func_1971(0) && !func_210(24))
					{
						if (func_406(uParam0, "ABI1_DEADFISH", 0))
						{
							func_1969(iLocal_779, 7);
						}
					}
					else
					{
						iLocal_165 = 0;
						func_1969(iLocal_779, 8);
					}
				}
			}
			break;
		
		case 7:
			if (!func_419())
			{
				iLocal_165 = 0;
				func_1969(iLocal_779, 8);
			}
			break;
	}
}

void func_1420()
{
	switch (iLocal_782)
	{
		case 0:
			if (iLocal_792 != 1)
			{
				iLocal_792 = 1;
			}
			if (func_384(10))
			{
				if (func_1972())
				{
					if (func_384(2))
					{
						if (!func_79(&uLocal_555))
						{
							func_214(&uLocal_555);
						}
						else if (func_215(&uLocal_555) > 1.2f)
						{
							func_243(&uLocal_555);
							func_333(13);
							iLocal_792 = 3;
							TASK::TASK_PLAY_ANIM(iLocal_301, sLocal_491, sLocal_494, 4f, -4f, -1, 67108868, 0f, 0, 32768, 0, 0, 0);
							ENTITY::PLAY_ENTITY_ANIM(iLocal_291, sLocal_495, sLocal_491, 4f, false, false, false, 0f, 0);
							func_1973(iLocal_782, 1);
						}
					}
				}
				else if (!func_1415(0.3f))
				{
					vLocal_602 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, vLocal_754.z, vLocal_591) };
					if (!func_352(iLocal_301, 713668775))
					{
						iLocal_792 = 3;
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_602, 1f, -1, 0.25f, false, vLocal_754.z);
					}
				}
			}
			break;
		
		case 1:
			if (!func_384(3))
			{
				if (!func_352(iLocal_301, -2017877118))
				{
					func_334(1, 1);
					iLocal_792 = 1;
					func_333(3);
				}
				else if (!func_384(15))
				{
					if (ENTITY::_0x627520389E288A73(iLocal_301, sLocal_491, sLocal_494) > 0.5f)
					{
						func_1974(iLocal_301);
						func_333(15);
					}
				}
			}
			else
			{
				func_738(13);
				func_1973(iLocal_782, 2);
			}
			break;
		
		case 2:
			if (func_1972())
			{
				iLocal_792 = 1;
				if (func_384(0))
				{
					if (!func_79(&uLocal_555))
					{
						func_214(&uLocal_555);
					}
					else if (func_438(&uLocal_555) > 1f)
					{
						iLocal_792 = 3;
						func_243(&uLocal_555);
						func_333(13);
						func_1975();
						TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
						TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_496, 2f, -2f, -1, 67108868, 0f, 0, 32768, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_493, 2f, -1056964608, -1, 67108869, 0f, 0, 32768, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
						func_1973(iLocal_782, 3);
					}
				}
			}
			else
			{
				iLocal_792 = 3;
				vLocal_602 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, vLocal_754.z, vLocal_591) };
				if (!func_352(iLocal_301, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_602, 1f, -1, 0.25f, false, vLocal_754.z);
				}
			}
			break;
		
		case 3:
			if (!func_384(1))
			{
				if (!func_352(iLocal_301, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iLocal_301) > 0)
				{
					func_333(1);
				}
			}
			else
			{
				func_738(13);
				iLocal_792 = 1;
				func_1973(iLocal_782, 4);
			}
			break;
		
		case 4:
			if (func_384(4))
			{
				if (!func_79(&uLocal_555))
				{
					func_214(&uLocal_555);
				}
				else if (func_438(&uLocal_555) > 1.2f)
				{
					iLocal_792 = 3;
					func_243(&uLocal_555);
					func_333(13);
					TASK::TASK_PLAY_ANIM(iLocal_301, sLocal_490, sLocal_497, 8f, -1056964608, -1, 6, 0, 0, 0, 0, 0, 0);
					func_1973(iLocal_782, 5);
				}
			}
			break;
		
		case 5:
			if (!func_384(5))
			{
				if (ENTITY::_0x627520389E288A73(iLocal_301, sLocal_490, sLocal_497) > 0.9f)
				{
					func_333(5);
				}
			}
			else
			{
				iLocal_792 = 1;
				func_738(13);
				func_1973(iLocal_782, 6);
			}
			break;
		
		case 6:
			if (func_384(6))
			{
				if (!func_79(&uLocal_555))
				{
					func_214(&uLocal_555);
				}
				else if (func_438(&uLocal_555) > 0f)
				{
					func_243(&uLocal_555);
					func_333(13);
					iLocal_792 = 3;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_498, 1090519040, -1056964608, -1, 4, 0, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_499, 1090519040, -1056964608, -1, 5, 0, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
					func_333(14);
					func_1973(iLocal_782, 7);
				}
			}
			break;
		
		case 7:
			if (!func_384(7))
			{
				if (!func_384(16))
				{
					if (ENTITY::_0x627520389E288A73(iLocal_301, sLocal_490, sLocal_498) > 0.1f || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_301, 463717823))
					{
						func_1976();
						func_333(16);
					}
				}
				if (Local_18 == 3)
				{
					func_333(7);
				}
			}
			else
			{
				iLocal_792 = 3;
				func_738(13);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
				TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_500, 4f, -1056964608, -1, 4, 0, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_501, 1090519040, -1056964608, -1, 4, 0, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_502, 1090519040, -1056964608, -1, 4, 0, 0, 0, 0, 0, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(iLocal_478, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
				func_1973(iLocal_782, 8);
			}
			break;
		
		case 8:
			if (func_384(8))
			{
				func_333(13);
				TASK::TASK_PLAY_ANIM(iLocal_301, sLocal_490, sLocal_503, 4f, -1056964608, -1, 5, 0, 0, 0, 0, 0, 0);
				func_1977();
				func_1973(iLocal_782, 9);
			}
			break;
		
		case 9:
			if (!func_384(9))
			{
				if (Local_18 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_493, 1090519040, -1056964608, -1, 4, 0, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_492, 1090519040, -1056964608, -1, 5, 0, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
					func_333(9);
				}
			}
			else
			{
				func_1973(iLocal_782, 10);
			}
			break;
	}
}

void func_1421()
{
	if (!func_384(0))
	{
		if (func_1978(0))
		{
			func_333(0);
		}
	}
}

void func_1422()
{
	if (!func_384(4))
	{
		if (func_1979(0))
		{
			func_333(4);
		}
	}
}

void func_1423()
{
	if (!func_384(2))
	{
		if (func_1980(0))
		{
			func_333(2);
		}
	}
}

void func_1424(int iParam0, int iParam1)
{
	iLocal_780 = iParam1;
}

int func_1425()
{
	int iVar0;
	
	iVar0 = func_1981(0);
	if (iVar0 == 1380607804)
	{
		return 1;
	}
	return 0;
}

bool func_1426(int iParam0)
{
	return func_1323(iParam0, 64);
}

void func_1427()
{
	if (iLocal_144)
	{
		iLocal_144 = 0;
	}
	if (iLocal_145)
	{
		iLocal_145 = 0;
	}
	if (iLocal_148)
	{
		iLocal_148 = 0;
	}
	if (iLocal_149)
	{
		iLocal_149 = 0;
	}
}

bool func_1428(int iParam0)
{
	return func_1323(iParam0, 4);
}

bool func_1429(int iParam0)
{
	return func_1323(iParam0, 16);
}

int func_1430(int iParam0)
{
	if (&Global_1900073->f_26[iParam0 /*30*/] == 7 && &Global_1900073->f_154[iParam0] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_1431(int iParam0)
{
	return (Global_1900073->f_26[iParam0 /*30*/])->f_17 == 1f;
}

void func_1432(var uParam0, bool bParam1)
{
	if ((((((iLocal_780 == 12 && !bLocal_163) && !func_923(0)) && !func_845(0)) && !func_419()) && !func_210(16)) && !func_210(24))
	{
		if (!func_79(&uLocal_537))
		{
			func_214(&uLocal_537);
		}
		else if (func_438(&uLocal_537) > 7f)
		{
			if (!bParam1)
			{
				switch (iLocal_781)
				{
					case 0:
						if (func_406(uParam0, "ABI1_TROUSERS", 0))
						{
							func_425();
							iLocal_781 = 1;
							func_1424(iLocal_780, 20);
						}
						break;
					
					case 1:
						if (func_406(uParam0, "ABI1_FISHTALK1", 0))
						{
							func_425();
							iLocal_781 = 2;
							func_1424(iLocal_780, 20);
						}
						break;
					
					case 2:
						if (func_406(uParam0, "ABI1_FISHTALK2", 0))
						{
							func_425();
							iLocal_781 = 3;
							func_1424(iLocal_780, 20);
						}
						break;
					
					case 3:
						if (func_406(uParam0, "ABI1_FISHTALK3", 0))
						{
							func_425();
							iLocal_781 = 4;
							func_1424(iLocal_780, 20);
						}
						break;
					
					case 4:
						if (func_406(uParam0, "ABI1_FISHTALK4", 0))
						{
							func_425();
							iLocal_781 = 5;
							func_1424(iLocal_780, 20);
						}
						break;
					
					case 5:
						if (func_406(uParam0, "ABI1_FISHTALK5", 0))
						{
							func_425();
							iLocal_781 = 6;
							func_1424(iLocal_780, 20);
						}
						break;
				}
			}
			else if (iLocal_803 != 7)
			{
				switch (iLocal_783)
				{
					case 0:
						if (func_406(uParam0, "ABI1_NECKL1", 0))
						{
							func_425();
							iLocal_783 = 1;
							func_1424(iLocal_780, 20);
						}
						break;
					
					case 1:
						if (func_406(uParam0, "ABI1_NECKL2", 0))
						{
							func_425();
							iLocal_783 = 2;
							func_1424(iLocal_780, 20);
						}
						break;
					
					case 2:
						if (func_916())
						{
							if (func_406(uParam0, "ABI1_NECKL3", 0))
							{
								func_425();
								iLocal_783 = 3;
								func_1424(iLocal_780, 20);
							}
						}
						else
						{
							iLocal_783 = 3;
						}
						break;
					
					case 3:
						if ((func_844(0) && !func_1430(0)) && func_1982())
						{
							if (func_406(uParam0, "ABI1_JFISH11", 0))
							{
								func_425();
								func_1424(iLocal_780, 20);
							}
						}
						else
						{
							func_243(&uLocal_537);
						}
						break;
				}
			}
		}
	}
	else if (func_79(&uLocal_537))
	{
		func_243(&uLocal_537);
	}
}

void func_1433(int iParam0, int iParam1)
{
	iLocal_823 = iParam1;
}

void func_1434(int iParam0, int iParam1)
{
	if (&Global_1900073->f_189[iParam0] != iParam1)
	{
		Global_1900073->f_189[iParam0] = iParam1;
	}
}

void func_1435(int iParam0)
{
	if (Global_1900073->f_25 != iParam0)
	{
		Global_1900073->f_25 = iParam0;
	}
}

void func_1436(int iParam0, int iParam1)
{
	if ((iParam0 >= 1 && iParam0 <= 3) && &Global_1900073->f_174[iParam0] != iParam1)
	{
		Global_1900073->f_174[iParam0] = iParam1;
	}
}

void func_1437(int iParam0, int iParam1)
{
	if (func_1323(iParam0, iParam1))
	{
		func_1179(Global_1900073->f_2[iParam0], iParam1);
	}
}

void func_1438(int iParam0)
{
	if (Global_1900073->f_12 != iParam0)
	{
		Global_1900073->f_12 = iParam0;
	}
}

void func_1439(int iParam0)
{
	if (Global_1900073->f_13 != iParam0)
	{
		Global_1900073->f_13 = iParam0;
	}
}

void func_1440(int iParam0)
{
	if (Global_1900073->f_14 != iParam0)
	{
		Global_1900073->f_14 = iParam0;
	}
}

void func_1441(int iParam0)
{
	if (Global_1900073->f_15 != iParam0)
	{
		Global_1900073->f_15 = iParam0;
	}
}

void func_1442(int iParam0)
{
	if (iParam0 == 1)
	{
		func_745(16);
	}
	else
	{
		func_746(16);
	}
}

void func_1443(int iParam0)
{
	if (Global_1900073->f_21 != iParam0)
	{
		Global_1900073->f_21 = iParam0;
	}
}

void func_1444(int iParam0)
{
	if (iParam0 == 1)
	{
		func_745(256);
	}
	else
	{
		func_746(256);
	}
}

void func_1445()
{
	func_745(1024);
	func_746(512);
}

void func_1446(vector3 vParam0)
{
	Global_1900073->f_212 = { vParam0 };
}

void func_1447(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

char* func_1448(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		
		case 1:
			return "REGION_BAY_MACOMBS_END";
		
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		
		case 3:
			return "REGION_BAY_LAGRAS";
		
		case 4:
			return "REGION_BAY_LAKAY";
		
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		
		case 8:
			return "REGION_BAY_SERENDIPITY";
		
		case 9:
			return "REGION_BAY_SHADYBELLE";
		
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		
		case 15:
			return "REGION_BGV_FORTRIGGS";
		
		case 16:
			return "REGION_BGV_HANGINGDOG";
		
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		
		case 19:
			return "REGION_BGV_MONTO_REST";
		
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		
		case 22:
			return "REGION_BGV_PRONGHORN";
		
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		
		case 24:
			return "REGION_BGV_SHACK";
		
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		
		case 26:
			return "REGION_BGV_STRAWBERRY";
		
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		
		case 31:
			return "REGION_BLU_COPPERHEAD";
		
		case 32:
			return "REGION_BLU_SISIKA";
		
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		
		case 34:
			return "REGION_CML_DINO_LADY";
		
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		
		case 37:
			return "REGION_GRT_BEECHERS";
		
		case 38:
			return "REGION_GRT_BLACKWATER";
		
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		
		case 52:
			return "REGION_GRZ_COHUTTA";
		
		case 43:
			return "REGION_GRZ_COLTER";
		
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		
		case 54:
			return "REGION_GRZ_THELOFT";
		
		case 55:
			return "REGION_GRE_VETERAN";
		
		case 56:
			return "REGION_GRZ_WAPITI";
		
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		
		case 57:
			return "REGION_GUA_AGUASDULCES";
		
		case 58:
			return "REGION_GUA_CAMP";
		
		case 59:
			return "REGION_GUA_CINCOTORRES";
		
		case 60:
			return "REGION_GUA_LACAPILLA";
		
		case 61:
			return "REGION_GUA_MANICATO";
		
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		
		case 64:
			return "REGION_HRT_CARMODYDELL";
		
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		
		case 66:
			return "REGION_HRT_CROP_FARM";
		
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		
		case 72:
			return "REGION_HRT_LARNEDSOD";
		
		case 73:
			return "REGION_HRT_LOONY_CULT";
		
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		
		case 76:
			return "REGION_HRT_VALENTINE";
		
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		
		case 78:
			return "REGION_ROA_ANNESBURG";
		
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		
		case 63:
			return "REGION_ROA_BEECHERS_C";
		
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		
		case 83:
			return "REGION_ROA_DOVERHILL";
		
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		
		case 90:
			return "REGION_ROA_TRAPPER";
		
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		
		case 92:
			return "REGION_ROA_VANHORNPOST";
		
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		
		case 94:
			return "REGION_SCM_BULGERGLADE";
		
		case 95:
			return "REGION_SCM_CALIGAHALL";
		
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		
		case 105:
			return "REGION_SCM_RHODES";
		
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		
		case 109:
			return "REGION_TAL_COCHINAY";
		
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		
		case 112:
			return "REGION_TAL_TANNERSREACH";
		
		case 113:
			return "REGION_TAL_TRAPPER";
		
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		
		case 120:
			return "REGION_CHO_ARMADILLO";
		
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		
		case 118:
			return "REGION_RIO_FORT_MERCER";
		
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		
		case 128:
			return "REGION_CENTRALUNIONRR";
		
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

int func_1449(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		if (func_1983(iVar0) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1450()
{
	return Global_1327590->f_19615;
}

int func_1451(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1452(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < Global_1327590->f_19574);
}

void func_1453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_172(iParam0);
	}
	if (func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 256))
	{
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 256);
	}
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1024))
	{
		func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_115(iParam0, 0);
	}
	func_173(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1347702)[iParam0 /*49*/])->f_42, iParam4);
		}
		else
		{
			((*Global_1347702)[iParam0 /*49*/])->f_43 = 0;
		}
	}
}

void func_1454(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_521(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])))
			{
				func_1985(&iVar0, func_1984(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
		{
			if (func_1801(iVar0, ((*Global_1347702)[iParam0 /*49*/])->f_15, 1, ((*Global_1347702)[iParam0 /*49*/])->f_27, func_873()))
			{
				func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			}
		}
		else
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
	}
}

var func_1455(int iParam0)
{
	var uVar0;
	
	uVar0 = func_1085(((*Global_1347702)[iParam0 /*49*/])->f_48);
	func_978(&uVar0, 0, 0, ((*Global_1347702)[iParam0 /*49*/])->f_47, 0, 0, 0, 0);
	return uVar0;
}

bool func_1456(int iParam0, bool bParam1)
{
	return func_1086(func_459(), iParam0, bParam1);
}

int func_1457(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_1467(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1458(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		func_1986(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_1459(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1459(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1986(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1987(1);
	}
}

bool func_1460(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1461()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1085(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_1085(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_1086(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_1462(int iParam0)
{
	if (!func_1067(iParam0))
	{
		return 0;
	}
	return func_583(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_1463(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1988(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1989(iVar6);
	}
	return iVar5;
}

int func_1464(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1990(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_1465(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_1660(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_1466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 7:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 8:
			return 1;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_1467(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1465(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_1468(2, *uParam0);
		}
		else
		{
			func_1469(2, *uParam0);
		}
	}
	func_1991(uParam0);
}

void func_1468(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_1469(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_1470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 2139774588:
			return 1;
		
		case 1142025875:
			return 2;
		
		case 1587891565:
			return 4;
		
		case 1877013492:
			return 32;
		
		case -643014279:
			return 64;
		
		case -597116214:
			return 128;
		
		case 551416228:
			return 256;
		
		case 1022576842:
			return 512;
		
		case 953325896:
			return 1024;
		
		case 508358508:
			return 2048;
		
		case -735200598:
			return 4096;
		
		case -856432278:
			return 8192;
		
		case -2010847721:
			return 16384;
		
		case 446961221:
			return 32768;
		
		case -1972216640:
			return 65536;
		
		case 530833824:
			return 131072;
		
		case 1682361219:
			return 262144;
		
		case 158959085:
			return 524288;
		
		case 1919819559:
			return 1048576;
		
		case 1461411082:
			return 2097152;
		
		case -549508280:
			return 4194304;
		
		default:
			break;
	}
	return 0;
}

int func_1471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return -2;
		
		case 2:
			return -5;
		
		case 3:
			return -10;
		
		case 4:
			return -20;
		
		case 5:
			return -40;
		
		case 6:
			return -160;
		
		case 7:
			return -320;
		
		case 8:
			return -480;
		
		case 18:
			return -640;
		
		case 9:
			return 0;
		
		case 10:
			return 1;
		
		case 11:
			return 2;
		
		case 12:
			return 5;
		
		case 13:
			return 10;
		
		case 14:
			return 20;
		
		case 15:
			return 40;
		
		case 16:
			return 160;
		
		case 17:
			return 640;
		
		default:
			break;
	}
	return 0;
}

void func_1472(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	
	iVar0 = func_354();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1992(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_1497(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1993())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_957(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_354();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_355(iVar1);
		func_1995(func_1994(), 0, 4000);
		func_1996(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1997(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_905(func_950(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1471(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1998(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1587(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1587(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_905(func_950(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1471(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1998(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1587(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1587(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_950(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1004(10, 1);
	}
}

void func_1473(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_1474()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_1475(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1476(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_1477(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_205() == -1)
	{
		if (func_1999(iParam0) && func_2000(iParam0))
		{
			func_2001(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_1478(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_2002(iParam0, uParam1);
	Var0 = { func_1576(iParam0, 0, 1) };
	iVar5 = func_2003(iParam0, &Var0, 0, 0);
	iVar6 = func_2004(iParam0, 0);
	if ((iVar5 > 1 && !func_962()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1495(iParam0, -2051813666))
		{
			func_365(583, 1);
		}
		else
		{
			func_365(582, 0);
		}
	}
	if (func_2005(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1479(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1550(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_1480(int iParam0)
{
	if (func_205() != -1)
	{
		return false;
	}
	return func_1481(iParam0) != 0;
}

int func_1481(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_2006())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_2007(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1482(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_1483(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_2006())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1482(iVar0))
		{
			if (func_990(func_2007(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1484(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_2008(48);
	func_1007(0, -1);
}

int func_1485(int iParam0)
{
	if (func_205() != -1)
	{
		return 0;
	}
	return func_583(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_1486(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_1487(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_1488(int iParam0)
{
	if (func_205() != -1)
	{
		return 0;
	}
	return func_583(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_1489(int iParam0)
{
	if (func_205() != -1)
	{
		return 0;
	}
	if (!func_206(iParam0))
	{
		return 0;
	}
	return func_174(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_1490()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_990(func_2009(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1491(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_1474() && (func_1489(38) || func_1485(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_1474() && (func_1489(39) || func_1485(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_2010(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_1474() && (func_1489(41) || func_1485(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_1474() && (func_1489(49) || func_1485(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_2010(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_2011(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_2012(iParam0, iVar13, iVar14))
	{
	}
	if (func_2013(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_2014(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_2015(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_2016(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_2017(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1492(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1493(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_1474() && (func_1489(38) || func_1485(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_1474() && (func_1489(39) || func_1485(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_1474() && (func_1489(49) || func_1485(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_1474() && (func_1489(38) || func_1485(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_943(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_2018(func_1487(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_1474() && (func_1489(39) || func_1485(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_1474() && (func_1489(49) || func_1485(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_944(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_1494(int iParam0)
{
	vector3 vVar0;
	
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_1495(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_1496(int iParam0, int iParam1)
{
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_1497(int iParam0)
{
	if (!func_2019(iParam0))
	{
		return 0;
	}
	return func_2020(iParam0);
}

void func_1498(int iParam0)
{
	if (!func_2019(iParam0))
	{
		return;
	}
	func_2021(iParam0);
	func_2022(iParam0);
}

int func_1499(int iParam0)
{
	struct<2> Var0;
	
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1500(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_1476(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_2023(iVar0) || func_669(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1501(int iParam0, bool bParam1)
{
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_1502(bool bParam0)
{
	if (func_205() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_1637(bParam0));
}

int func_1503(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1505(iParam0))
	{
		return 0;
	}
	if (!func_1502(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_1504(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	iVar0 = func_1501(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_205() == -1)
		{
			func_670(iVar0);
			if (iParam1 == 1248274121)
			{
				func_2024(iVar0);
			}
		}
		if (!func_2005(iParam0, &uVar1, 1, 0, 0))
		{
			func_2001(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_2025(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_1151(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_1151(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_1151(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == 494733111 && !func_1993())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1153(iVar0))
				{
					func_1151(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1151(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_1725(Global_35, 2, 0, 1);
				if ((((func_568(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_990(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_568(iVar7) && func_990(-1185145312, 1, 0))
				{
					if (!func_1151(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_1151(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_1151(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_365(480, 1);
	}
	return 1;
}

bool func_1505(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_1506(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_1505(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_568(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_990(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1537(func_2026(iParam0), func_1536(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_205() == -1)
		{
			if (func_583(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_365(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_1502(0))
	{
		if (func_1503(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_1542(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_1507(int iParam0)
{
	var uVar0;
	
	if ((iParam0 == -615217896 && !func_982()) || iParam0 != -615217896)
	{
		if (func_2027(Global_35, iParam0, &uVar0))
		{
			func_1265(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_1148();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_1148();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_1148();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1526();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1524();
			break;
	}
}

void func_1508(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1524();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1525();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1526();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1527();
			break;
		
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_1148();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_2028();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_2029();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

void func_1509(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_1495(iParam0, -2017733358);
	if (func_2030() < 3)
	{
		if (bVar0)
		{
			if (func_2032(func_2031(iParam0), iParam0))
			{
				func_1537(79, func_1536(func_2031(iParam0)), 1);
			}
			else
			{
				func_1537(78, func_1536(func_2031(iParam0)), 1);
			}
		}
		else
		{
			func_1537(80, func_1536(func_2033(iParam0)), 1);
		}
	}
}

int func_1510()
{
	if (((((func_2034(839908568, 400) || func_2034(-1134030454, 400)) || func_2034(623353496, 400)) || func_2034(-344413337, 400)) || func_2034(-1664948962, 400)) || func_2034(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_1511(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1598(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_2035(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_2036(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_1512(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1491(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1493(51, 0, 0, 0, 0, -1, 0);
			func_2037(8192);
			break;
		
		case 581047644:
			func_1491(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1493(51, 0, 0, 0, 0, -1, 0);
			func_2037(524288);
			break;
		
		case -644199619:
			func_1491(39, 0, 0, 0, 0, 0, 1, 0);
			func_1493(39, 0, 0, 0, 0, -1, 0);
			func_2038(16);
			break;
		
		case 684296857:
			func_1491(41, 0, 0, 0, 0, 0, 1, 0);
			func_1493(41, 0, 0, 0, 0, -1, 0);
			func_2039(8);
			break;
		
		case 466137807:
			func_1491(49, 0, 0, 0, 0, 0, 1, 0);
			func_1493(49, 0, 0, 0, 0, -1, 0);
			func_2040(16);
			break;
		
		case -1087522507:
			func_1491(43, 0, 0, -1791518714, func_2041(1), 0, -1, 0);
			func_2042(1);
			break;
		
		case -405829000:
			func_1491(43, 0, 0, -2087881550, func_2041(2), 0, -1, 0);
			func_2042(2);
			break;
		
		case 378660860:
			func_1491(43, 0, 0, 1908068621, func_2041(4), 0, -1, 0);
			func_2042(4);
			break;
		
		case 1566111097:
			func_1491(43, 0, 0, 1611247019, func_2041(8), 0, -1, 0);
			func_2042(8);
			break;
		
		case 1276007140:
			func_1491(43, 0, 0, 1319635688, func_2041(16), 0, -1, 0);
			func_2042(16);
			break;
	}
}

void func_1513(int iParam0)
{
	if (func_2043() == 1)
	{
		if (func_1485(39))
		{
			func_365(342, 0);
		}
		else
		{
			func_365(343, 0);
			func_2038(1);
		}
	}
	if (func_2043() >= 30)
	{
		func_365(344, 0);
	}
	func_1491(39, 0, 0, 0, 0, 0, -1, 0);
	func_1493(39, 0, 0, func_2043(), 30, 1, 0);
}

void func_1514(int iParam0)
{
	if (func_2044() == 1)
	{
		if (func_1485(49))
		{
			func_365(409, 0);
		}
		else
		{
			func_365(410, 0);
			func_2040(1);
		}
	}
	if (func_2044() >= 10)
	{
		func_365(411, 0);
	}
	func_1491(49, 0, 0, 0, 0, 0, -1, 0);
	func_1493(49, 0, 0, func_2044(), 10, 1, 0);
}

void func_1515(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_365(437, 0);
			func_365(440, 0);
			func_2045(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_1491(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_1493(51, 0, 0, iVar0, func_2010(-949689219, 20), 1, 0);
			func_2037(1);
			func_2046(-748969569, 0, 0);
			break;
		
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_2045(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_1491(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_1493(51, 0, 0, iVar0, func_2010(-1248968496, 20), 1, 0);
			func_2037(8);
			break;
		
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_2045(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_1491(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_1493(51, 0, 0, iVar0, func_2010(1706369307, 20), 1, 0);
			func_2037(64);
			break;
		
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_2045(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_1491(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_1493(51, 0, 0, iVar0, func_2010(1520110311, 20), 1, 0);
			func_2037(512);
			break;
		
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_365(438, 0);
			func_2045(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_1491(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_1493(51, 0, 0, iVar0, func_2010(-1992824800, 20), 1, 0);
			func_2037(32768);
			break;
		
		default:
			func_365(439, 0);
			break;
	}
}

void func_1516()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_1517(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_205() == -1)
	{
		if (!func_1485(43))
		{
			if (iParam0 == 281887510)
			{
				func_365(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_365(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_365(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_365(400, 0);
			}
		}
		else if (func_1495(iParam0, 412399755))
		{
			func_2047(-1791518714);
			if (func_2048() == 0)
			{
				func_1007(0, 10);
				iVar1 = func_2049(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_2050(iParam0) < func_2051(iParam0))
					{
						func_1491(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1493(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1485(44))
		{
			if (iParam0 == -222563712)
			{
				func_365(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_365(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_365(401, 0);
			}
		}
		else if (func_1495(iParam0, 709057512))
		{
			func_2047(-2087881550);
			if (func_2048() == 1)
			{
				func_1007(0, 10);
				iVar1 = func_2049(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_2050(iParam0) < func_2051(iParam0))
					{
						func_1491(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1493(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1485(45))
		{
			if (iParam0 == 2116770557)
			{
				func_365(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_365(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_365(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_365(398, 0);
			}
		}
		else if (func_1495(iParam0, -1478961327))
		{
			func_2047(1908068621);
			if (func_2048() == 2)
			{
				func_1007(0, 10);
				iVar1 = func_2049(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_2052(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_2053(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_2008(48);
					}
					if (func_2050(iParam0) < func_2051(iParam0))
					{
						func_1491(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1493(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_2050(iParam0) < func_2051(iParam0))
					{
						func_1491(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1493(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1485(46))
		{
			if (iParam0 == 2085530337)
			{
				func_365(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_365(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_365(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_365(406, 0);
			}
		}
		else if (func_1495(iParam0, -1238404098))
		{
			func_2047(1611247019);
			if (func_2048() == 3)
			{
				func_1007(0, 10);
				iVar1 = func_2049(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_2050(iParam0) < func_2051(iParam0))
					{
						func_1491(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1493(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1485(47))
		{
			if (iParam0 == -1521783510)
			{
				func_365(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_365(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_365(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_365(403, 0);
			}
		}
		else if (func_1495(iParam0, 1160548794))
		{
			func_2047(1319635688);
			if (func_2048() == 4)
			{
				func_1007(0, 10);
				iVar1 = func_2049(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_2050(iParam0) < func_2051(iParam0))
					{
						func_1491(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1493(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1518(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 2116770557)
	{
		if (!func_2052(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_2053(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_2008(48);
		}
	}
}

void func_1519(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_990(func_2054(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_2055(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_2056(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1520(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_205() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1511(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_1511(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_1511(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_1511(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_1511(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_1511(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_1511(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_1511(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_1511(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_1511(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_1511(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_1511(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_1511(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_2057())
			{
				func_1511(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_1511(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_1511(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_1511(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_1511(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_1511(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_1511(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_1511(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_1511(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_1511(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_1511(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_1511(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_1511(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1521(int iParam0)
{
	if (func_1485(41))
	{
		func_365(363, 0);
	}
	else
	{
		func_365(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_2058(-1865241121);
			func_2059(-642026005);
			func_2060(-642026005);
			func_1007(0, 10);
			break;
		
		case -2108314374:
			func_2058(2117142684);
			func_2059(-940584364);
			func_2060(-940584364);
			func_1007(0, 10);
			break;
		
		case -1193798153:
			func_2058(-1409326024);
			func_2059(1972645282);
			func_2060(1972645282);
			func_1007(0, 10);
			break;
		
		case -787702678:
			func_2058(-641744968);
			func_2059(1667205433);
			func_2060(1667205433);
			func_1007(0, 10);
			break;
		
		case -804542901:
			func_2058(-946988203);
			func_2059(1362715885);
			func_2060(1362715885);
			func_1007(0, 10);
			break;
		
		case -1696275132:
			func_2058(-646136018);
			func_2059(1053540370);
			func_2060(1053540370);
			func_1007(0, 10);
			break;
		
		case -161595323:
			func_2058(-955835837);
			func_2059(-1100103852);
			func_2060(-1100103852);
			func_1007(0, 10);
			break;
		
		case -1114363619:
			func_2058(-179276075);
			func_2059(-1409869209);
			func_2060(-1409869209);
			func_1007(0, 10);
			break;
		
		case -368407134:
			func_2058(-492711560);
			func_2059(-1760235357);
			func_2060(-1760235357);
			func_1007(0, 10);
			break;
		
		case 1997759228:
			func_2058(1764383959);
			func_2059(-138366827);
			func_2060(-138366827);
			func_1007(0, 10);
			break;
		
		case 1265573293:
			func_2058(317501533);
			func_2059(-1261163843);
			func_2060(-1261163843);
			func_1007(0, 10);
			break;
		
		case -1030441283:
			func_2058(817753087);
			func_2059(-963523016);
			func_2060(-963523016);
			func_1007(0, 10);
			break;
		
		case -1490884871:
			func_2058(576606016);
			func_2059(560825326);
			func_2060(560825326);
			func_1007(0, 10);
			break;
		
		case -395458616:
			func_2058(814934957);
			func_2059(858269539);
			func_2060(858269539);
			break;
	}
}

void func_1522(int iParam0, int iParam1)
{
	var uVar0;
	
	func_2061(iParam0, iParam1, &uVar0);
}

int func_1523(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_1725(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_1725(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1652("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1653(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1654(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_1524()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_1525()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_1526()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1527()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_1528(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_1529(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_944(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1530(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1531(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1532(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1533(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1534(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1535(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_1536(int iParam0)
{
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_1537(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_772(iParam0, &iVar0, &iVar1);
	if (!func_773(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1116(iParam0, 1024))
	{
		return;
	}
	func_774(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_1538(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_772(iParam0, &iVar0, &iVar1);
	if (!func_773(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1116(iParam0, 1024))
	{
		return;
	}
	func_774(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_1539()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_2006())
	{
		return func_1540();
	}
	iVar4 = (func_2006() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_2006())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_2062(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_2007(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1540()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_2006());
	return func_2007(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_1541(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		
		case 998010398:
			*iParam0 = -324053813;
			break;
		
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_1542(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_1576(iParam0, 0, 1) };
	Var5 = { func_1697(iParam0, Var0, Var0.f_4, 0) };
	return func_2063(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1543(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_205() != -1)
	{
		return;
	}
	switch (func_1499(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_2064(81053684, 0) <= 0)
			{
				func_1575(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1575(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_2065(iParam0);
			if (func_2066(iVar0))
			{
				func_2067(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1575(30, iParam0, 0, 0, 0);
			}
			if (func_1569() == -2125499975 || func_1569() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1575(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1569() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1575(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_2068(-525676072, 0))
			{
				if (func_2069(-525676072, &iVar1))
				{
					func_1575(33, iVar1, 0, 0, 0);
				}
			}
			func_1575(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_2070(99217379))
		{
			func_1265(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1498(24);
		if (func_1523(&iVar2, 0))
		{
			func_1151(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1544(int iParam0)
{
	if (func_1495(iParam0, 943695443))
	{
		func_2071(0, iParam0);
	}
	else if (func_1495(iParam0, -2096528786))
	{
		func_2071(1, iParam0);
	}
	else if (func_1495(iParam0, -1094167013))
	{
		func_2071(2, iParam0);
	}
	else if (func_1495(iParam0, 1936654645))
	{
		func_2071(3, iParam0);
	}
	else if (func_1495(iParam0, 1306489306))
	{
		func_2071(4, iParam0);
	}
	else if (func_1495(iParam0, 435762317))
	{
		func_2071(5, iParam0);
	}
	else if (func_1495(iParam0, 1259363210))
	{
		func_2071(6, iParam0);
	}
	else if (func_1495(iParam0, 881398259))
	{
		func_2071(7, iParam0);
	}
	else if (func_1495(iParam0, -541549214))
	{
		func_2071(8, iParam0);
	}
	else if (func_1495(iParam0, 130796156))
	{
		func_2071(-1, iParam0);
	}
}

int func_1545(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_2072(&Var4, 1356624740);
	return func_2073(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_1546(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_1476(iParam0, 0))
	{
		return Var0;
	}
	if (func_1495(iParam0, -305066475))
	{
		if (func_205() == -1)
		{
			if (func_1495(iParam0, -537818634))
			{
				return func_950(189951448);
			}
			else
			{
				return func_950(1176172851);
			}
		}
	}
	else if (func_1495(iParam0, -537818634))
	{
		return func_950(-963660207);
	}
	if (func_1495(iParam0, 2084895747))
	{
		return func_950(1694039471);
	}
	return Var2;
}

void func_1547(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_205() == -1)
			{
				if (func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_365(109, 1);
				}
			}
			break;
	}
}

void func_1548(int iParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_2074(func_1968(0));
	func_1587(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_2075(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1549(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_1476(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_2076())
	{
		func_2077(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1700(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1700(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1496(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_1494(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_2078(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1681(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_1536(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_1495(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_1536(iParam0));
	}
	func_1587(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_1550(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_1551(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_1552(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1553(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1554(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	
	if (!func_1476(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_2079(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_2079(iParam0, Var2, 1))
				{
					if (func_2080(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_2080(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_365(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_146(0, 0, 1))
		{
			func_1007(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_1555(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1556(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		
		case -1704241585:
			iVar0 = 308;
			break;
		
		case -1267972061:
			iVar0 = 309;
			break;
		
		case -142033055:
			iVar0 = 310;
			break;
		
		case 890514341:
			iVar0 = 311;
			break;
		
		case -58963793:
			iVar0 = 312;
			break;
		
		case 1882019322:
			iVar0 = 313;
			break;
		
		case 807302083:
			iVar0 = 314;
			break;
		
		case 617759310:
			iVar0 = 315;
			break;
		
		case -378547623:
			iVar0 = 316;
			break;
		
		case 829545206:
			iVar0 = 317;
			break;
		
		case 891318243:
			iVar0 = 319;
			break;
		
		case 431374225:
			iVar0 = 320;
			break;
		
		case 1619534881:
			iVar0 = 321;
			break;
		
		case -755457379:
			iVar0 = 322;
			break;
		
		case 2141714005:
			iVar0 = 323;
			break;
		
		case 1015404643:
			iVar0 = 324;
			break;
		
		case 983875052:
			iVar0 = 325;
			break;
		
		case -1753730528:
			iVar0 = 326;
			break;
		
		case 2131765035:
			iVar0 = 327;
			break;
		
		case -1740272183:
			iVar0 = 328;
			break;
		
		case 1310680212:
			iVar0 = 329;
			break;
		
		case -1724192342:
			iVar0 = 330;
			break;
		
		case 912296423:
			iVar0 = 331;
			break;
		
		case -566881549:
			iVar0 = 332;
			break;
		
		case 147796381:
			iVar0 = 333;
			break;
		
		case -120865369:
			iVar0 = 334;
			break;
		
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_365(iVar0, 0);
	}
}

void func_1557()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_2081(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_2082();
		}
		return;
	}
	if (!func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_2083();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_2081(1);
}

void func_1558()
{
	if (!func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_964(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_1559()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_2084(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_2084(1);
}

void func_1560()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_2085(15000, 0, 0, 0, 1);
			func_2084(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_1594(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_2084(1);
}

void func_1561()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_990(1191437462, 1, 0) && !func_174(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_964(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_2086(1))
			{
				func_1533(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_990(1119149048, 1, 0) && !func_174(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_964(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_2086(2))
			{
				func_1533(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_2086(4))
		{
			func_1533(4);
		}
		if (func_2086(0))
		{
			func_2087(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_990(1191437462, 1, 0))
			{
				func_1214(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_990(1119149048, 1, 0))
			{
				func_1214(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_2086(1))
		{
			func_2087(1);
		}
		if (func_2086(2))
		{
			func_2087(2);
		}
		if (func_2086(4))
		{
			func_2087(4);
		}
		if (!func_2086(0))
		{
			func_1533(0);
		}
	}
}

void func_1562()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_583(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_2088() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_670(127400949);
		if (func_1151(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_2088() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_2089(-2055673461, Var1, 1423542233);
		func_2089(-202131179, Var1, -1264898804);
		func_2089(2013836545, Var1, 1592019450);
		func_2089(1497476650, Var1, 1117400455);
		func_2089(1063571467, Var1, 1150213537);
		func_2089(2107224237, Var1, 1598825281);
		func_2089(1747981656, Var1, -712527121);
		func_2089(-1371140647, Var1, 454332195);
		func_2089(-19142973, Var1, 256105670);
		func_2089(-2074737817, Var1, -1328061889);
		func_2089(-1114256243, Var1, -782241404);
		func_2089(-1653277288, Var1, 1669853467);
		func_2089(1869398132, Var1, -1559225678);
		func_2089(459868358, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_1839())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_568(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_1497(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_1497(24) && func_568(iVar15)) && iVar15 != 127400949)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_568(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_1497(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_1563()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_1564(int iParam0)
{
	switch (func_1499(iParam0))
	{
		case -2061583405:
			return 1;
		
		case -1719060085:
			return 1;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 1;
		
		case 81053684:
			return 1;
		
		case -413129408:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1565(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_1499(iParam0))
	{
		case -2061583405:
			bVar0 = func_2090(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_2090(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_2090(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_2090(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_2090(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_2090(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_2091();
	}
	if (bParam1)
	{
		func_2092(0, 0);
	}
}

int func_1566(int iParam0)
{
	struct<5> Var0;
	
	Var0 = { func_1576(iParam0, 1, 0) };
	return func_1577(Var0.f_4);
}

int func_1567(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1568(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	if (func_205() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_1567(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_2093(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_1569()
{
	return Global_1946804->f_1;
}

int func_1570(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	
	Var4 = func_2094(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_2096(uParam0, func_2095(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1567(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_2097(iVar3) && func_2098(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_2099(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_1571(int iParam0, int iParam1)
{
	if (func_205() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_1572(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_1571(iParam0, iParam1) };
	return vVar0.x;
}

void func_1573(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1574(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1575(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_1672(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_2100(Var0);
}

struct<5> func_1576(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_2101(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1494(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_1697(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_2102(bParam1) };
			if (iParam2 && func_2103(iParam0, 1))
			{
				{
				}
			}