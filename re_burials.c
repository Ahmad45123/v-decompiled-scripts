#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[2] = { 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_73[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	float fLocal_78[2] = { 0f, 0f };
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_121 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 16;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	struct<2> Local_304 = { 0, 5 } ;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	vLocal_85 = { 154.92f, 6841.12f, 19.14f };
	iLocal_99 = 200;
	vLocal_113 = { -1161.199f, 934.5912f, 196.7591f };
	vLocal_114 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_120, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
			}
		}
		func_206();
	}
	if (func_164(ScriptParam_304.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_105)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			RECORDING::_0x208784099002BC30("RE_BU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_60)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (bLocal_50)
					{
						iLocal_122 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_144();
						switch (iLocal_47)
						{
							case 0:
								func_134();
								iLocal_47 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) && !func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) && !func_126())
								{
									switch (iLocal_48)
									{
										case 0:
											func_125();
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_72, 50f, 35f, 50f, false, true, 0))
											{
												func_124();
											}
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_72, 80f, 65f, 50f, false, true, 0))
											{
												func_123();
											}
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_122();
													if (HUD::DOES_BLIP_EXIST(iLocal_88))
													{
														HUD::SHOW_HEIGHT_ON_BLIP(iLocal_88, false);
													}
													iLocal_58 = 0;
													while (iLocal_58 <= 1)
													{
														if (HUD::DOES_BLIP_EXIST(iLocal_87[iLocal_58]))
														{
															HUD::SHOW_HEIGHT_ON_BLIP(iLocal_87[iLocal_58], false);
														}
														iLocal_58++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) || func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) || iLocal_103)
								{
									iLocal_103 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (HUD::DOES_BLIP_EXIST(iLocal_88))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_87[iLocal_58]))
										{
											HUD::SHOW_HEIGHT_ON_BLIP(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									switch (iLocal_102)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_69 = 1;
									if (HUD::DOES_BLIP_EXIST(iLocal_88))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_87[iLocal_58]))
										{
											HUD::SHOW_HEIGHT_ON_BLIP(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									if (!func_111())
									{
										switch (iLocal_49)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												SYSTEM::WAIT(0);
												if (!PED::IS_PED_INJURED(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												SYSTEM::WAIT(0);
												if (!PED::IS_PED_INJURED(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										SYSTEM::WAIT(0);
										iVar0 = 0;
										while (iVar0 < iLocal_52)
										{
											if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
											{
												AUDIO::PLAY_PAIN(iLocal_52[iVar0], 5, 0f, 0);
												TASK::TASK_SMART_FLEE_PED(iLocal_52[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_52[iVar0], true);
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
													{
														ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
													}
												}
												if (HUD::DOES_BLIP_EXIST(iLocal_87[iVar0]))
												{
													HUD::REMOVE_BLIP(&(iLocal_87[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_104)
								{
									func_101();
								}
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_85, 100f, 100f, 100f, true, true, 0))
								{
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[0]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[1]));
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_113, 200f, 200f, 200f, true, true, 0))
									{
										STREAMING::REQUEST_MODEL(joaat("s_m_m_highsec_01"));
										STREAMING::REQUEST_MODEL(joaat("GRANGER"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_highsec_01")) && STREAMING::HAS_MODEL_LOADED(joaat("GRANGER")))
										{
											iLocal_55 = VEHICLE::CREATE_VEHICLE(joaat("GRANGER"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											ENTITY::SET_ENTITY_LOD_DIST(iLocal_55, 200);
											VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_55, 1.5f);
											iLocal_53 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_55, 26, joaat("s_m_m_highsec_01"), -1, 1, true);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 0, 0, 0);
											WEAPON::GIVE_WEAPON_TO_PED(iLocal_53, joaat("WEAPON_PISTOL"), -1, true, true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_137);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_51))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 1)
										{
											if (!iLocal_106)
											{
												func_81(0);
												func_104();
												SYSTEM::WAIT(0);
												func_70(&uLocal_138, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_106 = 1;
											}
										}
									}
									else
									{
										iLocal_106 = 0;
									}
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_113, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_51))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_111))
											{
												HUD::REMOVE_BLIP(&iLocal_111);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_112))
											{
												HUD::REMOVE_BLIP(&iLocal_112);
											}
											if (func_69())
											{
												iLocal_47 = 5;
											}
											else
											{
												iLocal_47 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(vLocal_113))
										{
											func_81(0);
											func_104();
											SYSTEM::WAIT(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											SYSTEM::WAIT(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
									{
										if (!PED::IS_PED_INJURED(iLocal_52[0]))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
												}
											}
											else
											{
												ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
											}
										}
									}
								}
								if (PED::IS_PED_INJURED(iLocal_52[0]) || PED::IS_PED_INJURED(iLocal_52[1]))
								{
									bLocal_117 = true;
								}
								if (bLocal_117)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_54, 0))
									{
										if (!PED::IS_PED_INJURED(iLocal_52[0]))
										{
											PED::_0xF1C03A5352243A30(iLocal_52[0]);
											if (VEHICLE::_0x639431E895B9AA57(iLocal_52[0], iLocal_54, -1, 0, false) || VEHICLE::_0x639431E895B9AA57(iLocal_52[0], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													TASK::CLEAR_PED_TASKS(iLocal_52[0]);
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
													{
														if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
														{
															ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
														}
													}
													TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													TASK::TASK_ENTER_VEHICLE(0, iLocal_54, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_54, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_59);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
													PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
													VEHICLE::_0x25367DE49D64CF16(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52[0], 242628503) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_52[0]) == 3)
													{
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_52[0], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[0]));
														}
													}
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_52[1]))
										{
											PED::_0xF1C03A5352243A30(iLocal_52[1]);
											if (VEHICLE::_0x639431E895B9AA57(iLocal_52[1], iLocal_54, -1, 0, false) || VEHICLE::_0x639431E895B9AA57(iLocal_52[1], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													TASK::CLEAR_PED_TASKS(iLocal_52[1]);
													TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													TASK::TASK_ENTER_VEHICLE(0, iLocal_54, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_54, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_59);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
													PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
													VEHICLE::_0x25367DE49D64CF16(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52[1], 242628503) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_52[1]) == 3)
													{
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_52[1], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[1]));
														}
													}
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 9)
						{
							if (!PED::IS_PED_INJURED(iLocal_51))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51, vLocal_114, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									SYSTEM::WAIT(0);
									func_104();
									iLocal_47 = 9;
								}
							}
						}
						if (func_6())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
							{
								PED::DELETE_PED(&iLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 3)
						{
							if (func_1())
							{
								AUDIO::TRIGGER_MUSIC_EVENT("RE6_BOTH_DEAD");
								if (!iLocal_68)
								{
									SYSTEM::SETTIMERA(0);
									iLocal_84 = MISC::GET_GAME_TIMER() + 8500;
									iLocal_68 = 1;
								}
								if (!PED::IS_PED_INJURED(iLocal_51))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_47 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 1 || iLocal_47 == 2) || iLocal_47 == 3) || iLocal_47 == 7)
						{
							if (!PED::IS_PED_INJURED(iLocal_51))
							{
								if (!bLocal_104)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 1785177548) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 1785177548) != 0)
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
										iLocal_303 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_72, -2f, -4f, 18f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_303, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_303, true);
										PED::SET_PED_KEEP_TASK(iLocal_51, true);
									}
									if (FIRE::IS_ENTITY_ON_FIRE(iLocal_51))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_51, 1);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
									}
								}
								if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_51) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_51)) || (iLocal_99 - ENTITY::GET_ENTITY_HEALTH(iLocal_51)) >= 50)
								{
									PED::SET_ENABLE_HANDCUFFS(iLocal_51, 1);
									PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, 1);
									ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
								}
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 5f)
									{
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_51))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_51, 1);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
									}
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_54, iLocal_51))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_51, 1);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_51, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

int func_1()
{
	if (!bLocal_104)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_52[0]) && PED::IS_PED_INJURED(iLocal_52[1]))
			{
				return 1;
			}
			if (PED::IS_PED_HURT(iLocal_52[0]) && PED::IS_PED_HURT(iLocal_52[1]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_52[0]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_52[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (PED::IS_PED_INJURED(iLocal_52[0]))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_87[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
				{
					ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
				}
			}
			func_3(&uLocal_138, 4);
			HUD::REMOVE_BLIP(&(iLocal_87[0]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_87[1]))
		{
			func_3(&uLocal_138, 3);
			HUD::REMOVE_BLIP(&(iLocal_87[1]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_51))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, 0))
		{
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_88))
		{
			func_3(&uLocal_138, 5);
			HUD::REMOVE_BLIP(&iLocal_88);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
	func_206();
}

int func_5()
{
	if (PED::IS_PED_INJURED(iLocal_51))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_26001)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_106551 = iParam0;
}

void func_8(int iParam0)
{
	Global_16877 = iParam0;
}

int func_9()
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_26000;
}

void func_11()
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_52[0]) || !PED::IS_PED_INJURED(iLocal_52[1]))
		{
			if (!func_12())
			{
				switch (iLocal_128)
				{
					case 0:
						if (iLocal_84 < MISC::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 1:
						if (iLocal_84 < MISC::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 2:
						if (iLocal_84 < MISC::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 3:
						if (iLocal_84 < MISC::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_128 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_15866 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_45())
	{
		SYSTEM::WAIT(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71838, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_7(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_22((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = uParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_19();
	}
}

void func_19()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!MISC::IS_BIT_SET(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_106288, 0);
					MISC::SET_BIT(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_106301, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_106284, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_106302, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_106285, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_106303, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_106286, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_106304, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_106287, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_106291, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_106307 + Global_106306), 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_106565.f_10188.f_3853, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_106308, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_106309, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_106310, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_106565.f_10188.f_3853))
	{
		func_21(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_20() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_25765;
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_106565.f_20404.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_106565.f_2357.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_31()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_32(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_33(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_32(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_106565.f_20404.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_39()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_40(Var0);
	return uVar1;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (MISC::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_106565.f_7682.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_106565.f_7682.f_911 == Var0)
		{
			Global_106565.f_7682.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_106565.f_7682[Global_106565.f_7682.f_136 /*15*/] = { Var0 };
		Global_106565.f_7682.f_136++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (MISC::IS_BIT_SET(iParam2, iVar1))
			{
				func_42(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_7682.f_136)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_7682[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_106565.f_7682[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_106565.f_7682[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_106565.f_7682.f_764)
	{
		if (MISC::IS_BIT_SET(Global_106565.f_7682.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_106565.f_7682.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_106565.f_7682.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_44()
{
	func_31();
	return Global_106565.f_2357.f_539.f_4321;
}

int func_45()
{
	return 1;
}

void func_46()
{
	switch (iLocal_110)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_51) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, 0))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_55, -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_59);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
				PED::SET_PED_KEEP_TASK(iLocal_51, true);
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_110++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_55, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_53, iLocal_54, 10f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_53, true);
					}
					VEHICLE::_0x25367DE49D64CF16(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			iLocal_110++;
			break;
		
		case 3:
			iLocal_110++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_110++;
			}
			break;
		
		case 5:
			SYSTEM::SETTIMERA(0);
			func_13();
			break;
	}
}

void func_47()
{
	switch (iLocal_110)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_137, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_137);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, 0);
				if (!PED::IS_PED_INJURED(iLocal_51) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, 0))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_51))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_51);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_55, -1, 0, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_59);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
					func_104();
					SYSTEM::WAIT(0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			SYSTEM::WAIT(2700);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_110++;
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_110++;
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_55, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_53, iLocal_55, 10f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_53, true);
					}
					VEHICLE::_0x25367DE49D64CF16(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_98 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (func_44() == 2)
	{
		if (func_10())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_26005)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_26005 = 1;
					if (!Global_26004)
					{
						Global_26004 = 1;
						return 1;
					}
				}
			}
			else if (Global_26005)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_26005 = 0;
			}
		}
	}
	return 0;
}

int func_50(vector3 vParam0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_26003)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_26003 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_51()
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_51, 1, 1);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_51);
		}
		if (func_55("REBU2_LV2_9") || iLocal_66 > 1)
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_51, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_66)
		{
			case 0:
				func_70(&uLocal_138, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 1:
				iLocal_67 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_66++;
				break;
			
			case 2:
				if (iLocal_67 < MISC::GET_GAME_TIMER())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 4:
				iLocal_67 = MISC::GET_GAME_TIMER() + 500;
				iLocal_66++;
				break;
			
			case 5:
				if (iLocal_67 < MISC::GET_GAME_TIMER())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 7:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 9:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 11:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 13:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 15:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 17:
				iLocal_67 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_66++;
				break;
			
			case 18:
				if (iLocal_67 < MISC::GET_GAME_TIMER())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 19:
				iLocal_67 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_66++;
				break;
			
			case 20:
				if (iLocal_67 < MISC::GET_GAME_TIMER())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_66++;
				}
				break;
			}
	}
}

int func_52()
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

int func_55(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_16876);
		if (iVar1 > -1)
		{
			return Global_14734[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_57()
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (!iLocal_107)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						SYSTEM::WAIT(0);
						func_70(&uLocal_138, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_107 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_107 = 0;
			}
		}
		if (!iLocal_108)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_81(0);
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_108 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_108 = 0;
		}
		if (!iLocal_109)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_81(0);
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_109 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_109 = 0;
		}
	}
}

void func_58()
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_61())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_51, 0, 4194304);
				}
				if (!iLocal_106)
				{
					func_81(0);
					func_104();
					SYSTEM::WAIT(0);
					iLocal_106 = 1;
					if (!func_60())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_106 = 0;
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 1227113341) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 1227113341) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 242628503) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 242628503) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_51);
				}
			}
		}
		else if (((!PED::IS_PED_IN_GROUP(iLocal_51) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, 0)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, 242628503) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_59());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
		}
	}
}

int func_59()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_60()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("RHINO")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("RHINO"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_51))
		{
			if (!iLocal_130)
			{
				iLocal_131 = MISC::GET_GAME_TIMER();
				iLocal_130 = 1;
			}
			else
			{
				iLocal_132 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_130 = 0;
		}
	}
	if ((iLocal_132 - iLocal_131) > 180000)
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
				}
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_133)
		{
			iLocal_134 = MISC::GET_GAME_TIMER();
			iLocal_133 = 1;
		}
		else
		{
			iLocal_135 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_133 = 0;
	}
	if ((iLocal_135 - iLocal_134) > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_51, vLocal_113, 1f, -1, 1048576000, 0, 1193033728);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_51, 0, 4194304);
				}
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_51, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_88))
				{
					iLocal_88 = func_67(iLocal_51, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_111))
				{
					HUD::REMOVE_BLIP(&iLocal_111);
				}
			}
			else
			{
				if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_88))
					{
						HUD::REMOVE_BLIP(&iLocal_88);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_111))
				{
					iLocal_111 = func_65(vLocal_113, 1);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_88))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
		if (!PED::IS_PED_IN_GROUP(iLocal_51))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 8f, 8f, 8f, 0, 1, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_51);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_59());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, 1);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				TASK::CLEAR_PED_TASKS(iLocal_51);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_59());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, 1);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

int func_65(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_67(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_69()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_129 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_129, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_51, iLocal_129))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_79();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_77();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			MISC::CLEAR_BIT(&Global_2423, 20);
			MISC::CLEAR_BIT(&Global_2424, 17);
			MISC::CLEAR_BIT(&Global_2425, 0);
			if (bParam2)
			{
				func_76();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_75())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_74())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2423, 9))
				{
					return 0;
				}
			}
			func_73();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_72();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_79();
	}
	return 0;
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15866 = 1;
}

void func_73()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	MISC::CLEAR_BIT(&Global_2424, 16);
}

int func_74()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_76()
{
	if (func_32(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_44();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

void func_77()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

void func_79()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15866 = 6;
		return;
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_119)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_121))
			{
				if (func_84(&uLocal_138, "REBU2AU", &Local_121, &Local_120, 8, 0, 0))
				{
					iLocal_119 = 0;
				}
			}
			else
			{
				iLocal_119 = 0;
			}
		}
	}
	else if ((!iLocal_119 && func_12()) && !func_52())
	{
		Local_121 = { func_54() };
		Local_120 = { func_56() };
		func_82();
		iLocal_119 = 1;
	}
}

void func_82()
{
	Global_14732 = 0;
	func_83();
}

void func_83()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16877 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15866 = 6;
		return;
	}
}

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			PED::SET_PED_RESET_FLAG(iLocal_51, 394, true);
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_51, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_137, 1862763509);
				TASK::TASK_COMBAT_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_53, true);
			}
			func_104();
			SYSTEM::WAIT(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_51))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_51, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_137, 1862763509);
					TASK::TASK_COMBAT_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_49 = 4;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_51, true);
			func_104();
			SYSTEM::WAIT(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 1.2f, 1.2f, 5f, 0, 1, 0) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_104 = true;
				if (!iLocal_89)
				{
					func_93(1, 1, 1, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 24);
					HUD::CLEAR_HELP(1);
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, 0);
						if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							func_92(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 200f);
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_51, 5f, 5f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), vLocal_74, 5f, 5f, 5f, false, true, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(iLocal_51, true) - Vector(0f, 3f, 5f), 0, false, 0, 1);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1084227584);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
						if (FIRE::IS_ENTITY_ON_FIRE(iLocal_54))
						{
							func_92(iLocal_54);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_54, 200f);
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, iLocal_51, 8f, 8f, 8f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_54, vLocal_74, 0, false, 0, 1);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_54, 1084227584);
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						iLocal_129 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), 5f, 0, 2);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_129, 0))
						{
							if (FIRE::IS_ENTITY_ON_FIRE(iLocal_129))
							{
								func_92(iLocal_129);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_129, 200f);
							}
							ENTITY::SET_ENTITY_COORDS(iLocal_129, ENTITY::GET_ENTITY_COORDS(iLocal_51, true) + Vector(0f, 5f, 5f), 1, false, 0, 1);
						}
					}
					FIRE::STOP_FIRE_IN_RANGE(vLocal_72, 10f);
					MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_72, 10f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(vLocal_72, 4.5f, 0, 0, 0, 0, false, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_51, vLocal_72, 1, false, 0, 1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_72, 1, false, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_52)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_52[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_51, false), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								PED::DELETE_PED(&(iLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						iLocal_303 = PED::CREATE_SYNCHRONIZED_SCENE(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						iLocal_71 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_71, iLocal_303, "untie_cam", "random@burial");
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.6699f, 6839.238f, 18.8314f, 0, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 18.2311f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_51, 200, 0);
						PED::SET_ENABLE_HANDCUFFS(iLocal_51, 0);
						PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_303, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						PED::_0x2208438012482A1A(iLocal_51, 0, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_303, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_57[0], iLocal_303, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_57[1], iLocal_303, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						CAM::SET_CAM_ACTIVE(iLocal_71, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						iLocal_94 = MISC::GET_GAME_TIMER();
						iLocal_89 = 1;
					}
				}
			}
		}
	}
	if (iLocal_89 && !iLocal_91)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_303))
		{
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_303) > 0.115f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_303) < 0.12f) || (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_303) > 0.355f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_303) < 0.36f))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_303) > 0.6f)
			{
				if (!iLocal_90)
				{
					func_104();
					SYSTEM::WAIT(0);
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
		}
		iLocal_93 = MISC::GET_GAME_TIMER();
		if (((iLocal_93 - iLocal_94) > 9700 && !iLocal_97) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_97 = 1;
		}
		if ((iLocal_93 - iLocal_94) > 10000)
		{
			iLocal_91 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			CAM::DO_SCREEN_FADE_OUT(800);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_91 = 1;
			bLocal_92 = true;
		}
	}
	if (iLocal_91 && !bLocal_96)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_303, 1f);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.5284f, 6839.658f, 18.8198f, 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 256.7693f);
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
			PED::_0x2208438012482A1A(iLocal_51, 0, 0);
			PED::SET_PED_CAN_RAGDOLL(iLocal_51, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_51, 164.4963f, 6839.333f, 18.9657f, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_51, 73.449f);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(26.1578f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.1198f, 1065353216);
		CAM::SET_CAM_ACTIVE(iLocal_71, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(iLocal_71, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		if (bLocal_92)
		{
			CAM::DO_SCREEN_FADE_IN(800);
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
		}
		bLocal_96 = true;
	}
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (bLocal_96)
		{
			if (!iLocal_95)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_137, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_137);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, 0, 1, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) > 0)
						{
							TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
						}
						else if (!PED::IS_PED_IN_GROUP(iLocal_51))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_59());
							PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, 1);
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
						}
					}
					else if (!PED::IS_PED_IN_GROUP(iLocal_51))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, func_59());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, 1);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_59);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
					if (HUD::DOES_BLIP_EXIST(iLocal_88))
					{
						HUD::REMOVE_BLIP(&iLocal_88);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_111))
					{
						iLocal_111 = func_65(vLocal_113, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_112))
						{
							iLocal_112 = func_65(vLocal_114, 0);
							HUD::SET_BLIP_SPRITE(iLocal_112, 269);
							func_88();
						}
					}
					func_87();
					iLocal_105 = 1;
					iLocal_95 = 1;
					SYSTEM::SETTIMERA(0);
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, 1);
					func_93(0, 1, 1, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
					iLocal_47 = 4;
				}
			}
		}
	}
}

void func_87()
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_26000 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
	{
		if (!Global_26002)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_26002 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_90(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_91())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				FIRE::STOP_ENTITY_FIRE(iParam0);
				ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_HEALTH(iParam0) + 200, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) + 200f));
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) + 200f));
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2.5f, 1, 0, 0, false);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_100(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14553.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_74())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_100(0);
		HUD::THEFEED_RESUME();
		Global_56500 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_97(PLAYER::PLAYER_ID())) && !func_95(PLAYER::PLAYER_ID(), 0)) && !func_94()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_97(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71588 = 0;
	}
}

bool func_94()
{
	return MISC::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_96(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_97(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_99(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_100(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2423, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2423, 13);
	}
}

void func_101()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, 0))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_102(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_104()
{
	Global_14732 = 0;
	func_105();
}

void func_105()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15866 = 6;
	}
}

void func_106()
{
	if (!iLocal_61 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_85, 30f, 30f, 30f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_61 = 1;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_54, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_52[0]))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_52[0], iLocal_54, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
			PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
		}
		if (!PED::IS_PED_INJURED(iLocal_52[1]))
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_52[1], iLocal_54, -1, 0, 3f, 1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
		}
	}
	else
	{
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iLocal_58]))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_52[iLocal_58], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_52[iLocal_58], true);
			}
			iLocal_58++;
		}
	}
	SYSTEM::WAIT(0);
	func_4();
}

void func_107()
{
	if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_52[0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_SHOOTING(iLocal_52[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_52[1]);
					TASK::TASK_SHOOT_AT_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), -1, -957453492);
				}
			}
		}
	}
	iLocal_47 = 7;
}

void func_108()
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (!iLocal_63)
		{
			if (!iLocal_62)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_59);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
				iLocal_62 = 1;
			}
			if (PED::IS_PED_FACING_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 90f))
			{
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
				{
					fVar0 = func_110(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					ENTITY::DETACH_ENTITY(iLocal_56, 0, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_56, iLocal_52[0], PED::GET_PED_BONE_INDEX(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					TASK::CLEAR_PED_TASKS(iLocal_52[0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_59);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52[1], joaat("WEAPON_SAWNOFFSHOTGUN"), true);
					TASK::CLEAR_PED_TASKS(iLocal_52[1]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fVar0, 1f, 1073741824, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_59);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
					iLocal_63 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
					}
				}
			}
		}
		if (iLocal_63 && !iLocal_125)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 3.5f, 1082130432, 1, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_59);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");
				iLocal_125 = 1;
			}
		}
		if (iLocal_125 && !iLocal_126)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				iLocal_126 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (iLocal_126 && !bLocal_127)
		{
			if (SYSTEM::TIMERB() > 15000 && !func_12())
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_127 = true;
				}
			}
		}
		if (((!iLocal_64 && iLocal_125) && !PED::IS_PED_INJURED(iLocal_52[0])) && !PED::IS_PED_INJURED(iLocal_52[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_52[1], -1, 2f, 1f, 1073741824, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_52[1], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_59);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_52[0], -1, 2f, 1f, 1073741824, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_52[0], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_59);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
				SYSTEM::SETTIMERB(15000);
				iLocal_115 = 0;
				iLocal_126 = 1;
				iLocal_64 = 1;
			}
		}
		if (bLocal_127)
		{
			func_11();
			func_112();
		}
		if (((PED::CAN_PED_SEE_HATED_PED(iLocal_52[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[0])) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[1]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_70)
					{
						func_104();
						SYSTEM::WAIT(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_70)
					{
						func_104();
						SYSTEM::WAIT(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_112();
			}
		}
	}
}

int func_109()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_110(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

int func_111()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if ((((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("RHINO")) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("annihilator"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("BUZZARD"))) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_112()
{
	func_11();
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");
	if (!iLocal_115)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_52[0], 156, true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
				{
					PED::_0xF1C03A5352243A30(iLocal_52[0]);
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
					{
						if (!iLocal_64)
						{
							ENTITY::DETACH_ENTITY(iLocal_56, 0, true);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_56, iLocal_52[0], PED::GET_PED_BONE_INDEX(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							TASK::CLEAR_PED_TASKS(iLocal_52[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_59);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
							PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
							PED::_0x2208438012482A1A(iLocal_52[0], 0, 0);
							iLocal_115 = 1;
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52[0], iLocal_59);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
						PED::SET_PED_KEEP_TASK(iLocal_52[0], true);
						iLocal_115 = 1;
					}
				}
			}
			else
			{
				iLocal_115 = 1;
			}
		}
		else
		{
			iLocal_115 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
					}
				}
			}
		}
	}
	if (!iLocal_116)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[1]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_52[1], 156, true);
				PED::_0xF1C03A5352243A30(iLocal_52[1]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_59);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_59);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52[1], iLocal_59);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_59);
				PED::SET_PED_KEEP_TASK(iLocal_52[1], true);
				iLocal_116 = 1;
			}
			else
			{
				iLocal_116 = 1;
			}
		}
		else
		{
			iLocal_116 = 1;
		}
	}
	if (iLocal_116 && iLocal_115)
	{
		iLocal_84 = MISC::GET_GAME_TIMER() + 8500;
		SYSTEM::SETTIMERA(0);
		iLocal_47 = 7;
	}
}

int func_113(int iParam0)
{
	if (func_116())
	{
		Global_106555 = 1;
		Global_106552 = MISC::GET_GAME_TIMER();
		if (func_25(Global_106554))
		{
			func_114(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_25(Global_106554))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_115(iParam0), -1);
					Global_106565.f_24989.f_2++;
					MISC::SET_BIT(&Global_106561, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_106561, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_115(iParam0), -1);
					Global_106565.f_24989.f_3++;
					MISC::SET_BIT(&Global_106561, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_106561, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_115(iParam0), -1);
					Global_106565.f_24989.f_4++;
					MISC::SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_116()
{
	switch (func_117(&Global_25824, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_121(0))
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *uParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_119(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_36425);
}

int func_120(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_121(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_123))
	{
		HUD::REMOVE_BLIP(&iLocal_123);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_88))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, 0))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
	}
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_87[iLocal_58]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_52[iLocal_58], 0))
			{
				iLocal_87[iLocal_58] = func_67(iLocal_52[iLocal_58], 1, 145);
			}
		}
		iLocal_58++;
	}
}

void func_123()
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < MISC::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_124()
{
	switch (iLocal_86)
	{
		case 0:
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_86++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 4:
			iLocal_84 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_86++;
			break;
		
		case 5:
			break;
	}
}

void func_125()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial_stop") > 0.124f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.127f)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52[0], "random@burial", "a_burial", 3))
				{
					if (((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.04f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.043f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.24f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.243f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.44f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.443f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.64f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.643f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") > 0.84f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_52[0], "random@burial", "a_burial") < 0.843f))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_126()
{
	if (!iLocal_103)
	{
		if (MISC::IS_BULLET_IN_AREA(vLocal_74, 100f, 1) || MISC::IS_BULLET_IN_AREA(vLocal_74, 100f, 1))
		{
			if (PED::IS_PED_INJURED(iLocal_52[0]) || PED::IS_PED_INJURED(iLocal_52[1]))
			{
				iLocal_49 = 1;
				return 1;
			}
			else if (!MISC::IS_BULLET_IN_AREA(vLocal_74, 100f, 1) || !MISC::IS_BULLET_IN_AREA(vLocal_74, 100f, 1))
			{
				iLocal_49 = 1;
				return 1;
			}
		}
		if (((((((((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_SMOKEGRENADE"), 1) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADE"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_STICKYBOMB"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER_SMOKE"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_RPG"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_MOLOTOV"), 1)) || FIRE::IS_EXPLOSION_IN_AREA(2, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || FIRE::IS_EXPLOSION_IN_AREA(4, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || FIRE::IS_EXPLOSION_IN_AREA(0, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 1;
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_54, 0))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
					func_112();
					iLocal_49 = 3;
					return 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("TOWTRUCK")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_54))
						{
							func_112();
							iLocal_49 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_69)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
			{
				if ((((PED::CAN_PED_SEE_HATED_PED(iLocal_52[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_52[1], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[0])) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_52[1])) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_74 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_49 = 1;
						return 1;
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_52[0]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_52[1]))
					{
						iLocal_49 = 5;
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_51, joaat("WEAPON_STUNGUN"), 0))
			{
				iLocal_49 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_49 = 4;
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_52[0], 0) || ENTITY::IS_ENTITY_DEAD(iLocal_52[1], 0))
		{
			iLocal_49 = 6;
			return 1;
		}
		if (iLocal_69)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !bParam4)
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar5 = SYSTEM::VDIST(vVar3, vVar4);
			if (!MISC::IS_BIT_SET(iParam3, 3))
			{
				if (func_133(iParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(vVar4, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_19));
								func_132("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_19 + *uParam2))
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_128(char* sParam0, int iParam1)
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_130(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_131(int iParam0)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}

void func_132(char* sParam0)
{
	func_130(sParam0);
}

int func_133(int iParam0, int iParam1)
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_134()
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_113 - Vector(20f, 40f, 40f), vLocal_113 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_72 - Vector(20f, 50f, 60f), vLocal_72 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_83, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	iLocal_51 = PED::CREATE_PED(26, iLocal_80, vLocal_72, fLocal_77, 1, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_51, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_51, 128, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51, 6, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 206, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 318, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 118, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 208, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
	ENTITY::SET_ENTITY_HEALTH(iLocal_51, iLocal_99, 0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), 0);
	PED::ADD_RELATIONSHIP_GROUP("rghKidnappers", &iLocal_136);
	PED::ADD_RELATIONSHIP_GROUP("rghVictim", &iLocal_137);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51, iLocal_137);
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		iLocal_52[iLocal_58] = PED::CREATE_PED(26, iLocal_81, vLocal_73[iLocal_58 /*3*/], fLocal_78[iLocal_58], 1, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52[iLocal_58], true);
		PED::SET_PED_AS_ENEMY(iLocal_52[iLocal_58], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52[iLocal_58], 0, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_52[iLocal_58], 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_52[iLocal_58], 128, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_52[iLocal_58], 42, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_52[0], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52[0], 50, true);
		PED::SET_PED_SHOOT_RATE(iLocal_52[iLocal_58], 50);
		PED::SET_PED_ACCURACY(iLocal_52[iLocal_58], 13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52[iLocal_58], true, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52[iLocal_58], iLocal_136);
		PED::SET_PED_MONEY(iLocal_52[iLocal_58], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
		iLocal_58++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_81);
	PED::SET_PED_SHOOT_RATE(iLocal_52[1], 100);
	PED::SET_PED_FIRING_PATTERN(iLocal_52[1], -687903391);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_136, 1862763509);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_52[0], joaat("WEAPON_PISTOL"), -1, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_52[1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
	iLocal_54 = VEHICLE::CREATE_VEHICLE(iLocal_83, vLocal_74, fLocal_79, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_54, 1084227584);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_54, 3);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_54, 5, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
	iLocal_56 = OBJECT::CREATE_OBJECT(joaat("prop_ld_shovel"), vLocal_85, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shovel"));
	iLocal_57[0] = OBJECT::CREATE_OBJECT(joaat("p_arm_bind_cut_s"), vLocal_85, true, true, false);
	iLocal_57[1] = OBJECT::CREATE_OBJECT(joaat("p_arm_bind_cut_s"), vLocal_85 + Vector(1f, 1f, 1f), true, true, false);
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_56, iLocal_52[0], PED::GET_PED_BONE_INDEX(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 0, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 3, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 4, 1, 1, 0);
	vVar0 = { vLocal_72 };
	vVar1 = { -2f, -4f, 18f };
	iLocal_303 = PED::CREATE_SYNCHRONIZED_SCENE(vVar0, vVar1, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_303, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_303, true);
	PED::SET_PED_KEEP_TASK(iLocal_51, true);
	TASK::TASK_PLAY_ANIM(iLocal_52[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(iLocal_52[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_52[0], vLocal_75, vLocal_76, 2.75f, 0, 0);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_52[1], vLocal_75, vLocal_76, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_138, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_138, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_138, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_51, "KIDNAPPEDFEMALE");
	func_135(&uLocal_138, 4, iLocal_52[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_138, 3, iLocal_52[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_138, 5, iLocal_51, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_136(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_139(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8917;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

void func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			return MISC::IS_BIT_SET(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_144()
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_145()
{
	STREAMING::REQUEST_MODEL(iLocal_80);
	STREAMING::REQUEST_MODEL(iLocal_82);
	STREAMING::REQUEST_MODEL(iLocal_81);
	STREAMING::REQUEST_MODEL(iLocal_83);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	STREAMING::REQUEST_ANIM_DICT("random@burial");
	STREAMING::REQUEST_PTFX_ASSET();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
	AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_80) && STREAMING::HAS_MODEL_LOADED(iLocal_82)) && STREAMING::HAS_MODEL_LOADED(iLocal_81)) && STREAMING::HAS_MODEL_LOADED(iLocal_83)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shovel"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_arm_bind_cut_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@burial")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1)) && AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_80);
		STREAMING::REQUEST_MODEL(iLocal_82);
		STREAMING::REQUEST_MODEL(iLocal_81);
		STREAMING::REQUEST_MODEL(iLocal_83);
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
		STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
		STREAMING::REQUEST_ANIM_DICT("random@burial");
		STREAMING::REQUEST_PTFX_ASSET();
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
		AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	}
}

void func_146()
{
	iLocal_80 = joaat("u_f_y_mistress");
	iLocal_81 = joaat("a_m_m_salton_01");
	iLocal_82 = joaat("a_m_m_salton_01");
	iLocal_83 = joaat("BISON");
	vLocal_72 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_77 = 0f;
	vLocal_73[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_78[0] = 297.0056f;
	vLocal_73[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_78[1] = 193.3866f;
	vLocal_74 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_79 = 265.6862f;
	vLocal_75 = { 164.0896f, 6836.923f, 19.03899f };
	vLocal_76 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_60 = 1;
}

int func_147()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_33(func_44()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_106565.f_18568[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_149(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_149(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_152(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_153(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_153(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_154()
{
	if (func_157() && !func_158())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_106283 > 0;
}

int func_156()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_158()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if ((Global_106554 == func_39() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_162();
}

void func_162()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_163(int iParam0)
{
	Global_106554 = iParam0;
}

int func_164(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_145143)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_158())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_203(iParam1))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_200(Global_106565.f_24989.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_106556) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_199())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_190(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_189(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_189(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_188(iVar4))
				{
					if (func_166(iVar2))
					{
						if (!func_165(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar3) < (210f * 210f))
							{
								if (func_44() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_165(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_171(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_171(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_172(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_173(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_174(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_175(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_176(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_177(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_178(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	var uVar0;
	
	func_187(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_186(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_185(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_184(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_183(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_182(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_198()) || Global_25767) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_198() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_198()) || Global_25767) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_198()) || func_195()) || Global_105612) || Global_25767) || func_197()) || Global_37584) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_191()
{
	return Global_93721.f_1;
}

int func_192()
{
	if (Global_90634 != -1)
	{
		return MISC::IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_193()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

bool func_195()
{
	return Global_93734.f_340 > 0;
}

bool func_196()
{
	return Global_93734.f_339 > 0;
}

var func_197()
{
	return Global_1312867;
}

int func_198()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_199()
{
	func_76();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_202(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_203(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_106565.f_24989, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_106565.f_24989.f_1, iVar0);
	}
	return bVar1;
}

int func_204()
{
	int iVar0;
	
	if (Global_25915)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_205()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_206()
{
	int iVar0;
	
	if (iLocal_122)
	{
		func_219(0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		AUDIO::CANCEL_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
		if (iLocal_115 || iLocal_125)
		{
			if (Global_26004)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
			}
		}
		func_218();
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_137, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_137);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_51, 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_51);
				}
				if (PED::IS_PED_IN_GROUP(iLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_51, true);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, 0))
			{
				PED::SET_ENABLE_HANDCUFFS(iLocal_51, 1);
				PED::SET_ENABLE_BOUND_ANKLES(iLocal_51, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::_0xF1C03A5352243A30(iLocal_52[iVar0]);
				if (iLocal_63 || iLocal_70)
				{
					TASK::TASK_COMBAT_PED(iLocal_52[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_52[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					func_104();
				}
				PED::SET_PED_KEEP_TASK(iLocal_52[iVar0], true);
			}
			iVar0++;
		}
		OBJECT::DELETE_OBJECT(&(iLocal_57[0]));
		OBJECT::DELETE_OBJECT(&(iLocal_57[1]));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_56))
			{
				ENTITY::DETACH_ENTITY(iLocal_56, 1, true);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_56);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			HUD::REMOVE_BLIP(&iLocal_123);
		}
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_87[iLocal_58]))
			{
				HUD::REMOVE_BLIP(&(iLocal_87[iLocal_58]));
			}
			iLocal_58++;
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_88))
		{
			HUD::REMOVE_BLIP(&iLocal_88);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_71))
		{
			CAM::DESTROY_CAM(iLocal_71, 0);
		}
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, 1);
	}
	func_207(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_207(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_106556 = MISC::GET_GAME_TIMER();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_106554, 1), 64);
		if (func_38(Global_106554) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106553, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_106551, (MISC::GET_GAME_TIMER() - Global_106552), 0);
	}
	else if (MISC::IS_BIT_SET(Global_106561, 0) && Global_106565.f_24989.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_106561, 0);
	}
	func_208(&Global_25824);
	Global_106555 = 0;
	func_163(-1);
}

void func_208(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36387)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

char* func_209(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_210(int iParam0)
{
	Global_36976 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_211(int iParam0)
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(iParam0, &uVar0);
	Var1 = { func_213(&uVar0) };
}

struct<16> func_213(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_175(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_174(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_173(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_176(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_214(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_218()
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

void func_219(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

