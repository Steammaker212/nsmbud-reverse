/* NSMBU Deluxe (Switch) v1.0.0 -- actors subsystem prototypes
 *
 * GENERATED from decompiled evidence. Each prototype is the exact
 * signature Hex-Rays produced for that function, tagged with its RVA.
 * Types are inferred, not from a symbol table: treat `int a1` as
 * "first argument, type not yet established" rather than as a real int.
 *
 * Do not edit by hand. Regenerate with scripts/make_decompiled_corpus.py.
 */
#pragma once

#include <stdint.h>

/* RVAs are image-relative: VA = 0x60000000 + RVA */

/* ---- actor_construction.c ---- */
int __fastcall sub_600F14EC(unsigned __int8 *a1);  /* 0x000f14ec */
int __fastcall sub_600F1AF4(int a1, int a2);  /* 0x000f1af4 */
int __fastcall SE_BOSS_MORTON_STAMP_ref(int a1);  /* 0x000f28cc */
int __fastcall jump_quake1_ref(int *a1);  /* 0x000f2cb4 */
int __fastcall SE_BOSS_MORTON_DOWN_LAND1_ref(int a1);  /* 0x000f42c8 */
int __fastcall sub_600F50A4(int a1);  /* 0x000f50a4 */
int __fastcall sub_600F55E8(int a1);  /* 0x000f55e8 */
int __fastcall sub_600F589C(int a1, int a2, int a3);  /* 0x000f589c */
int __fastcall SE_BOSS_SANBO_CRASH_ref(int a1);  /* 0x000f6214 */
int __fastcall SE_BOSS_SANBO_CRASH_ref_2(int a1);  /* 0x000f64a4 */
int __fastcall sub_600F6C80(int a1);  /* 0x000f6c80 */
int __fastcall sub_600F6DD0(int a1);  /* 0x000f6dd0 */
int __fastcall happy_end1_ref(int a1);  /* 0x000f8034 */
int __fastcall happy_end_wait_ref(int a1);  /* 0x000f87c4 */
int __fastcall sub_600F8998(int a1);  /* 0x000f8998 */
int __fastcall sub_600FA540(int a1);  /* 0x000fa540 */
int __fastcall sub_600FA6D8(int a1);  /* 0x000fa6d8 */
int __fastcall sub_600FA870(int a1);  /* 0x000fa870 */
int __fastcall sub_600FA9C4(int result);  /* 0x000fa9c4 */
bool __fastcall sub_600FAAE0(int a1);  /* 0x000faae0 */
int __fastcall sub_600FABEC(int a1);  /* 0x000fabec */
int __fastcall sub_600FAD44(int result, unsigned int a2);  /* 0x000fad44 */
int __fastcall sub_600FAE18(int a1);  /* 0x000fae18 */
int __fastcall sub_600FAFA4(int a1, int a2, int a3, int a4);  /* 0x000fafa4 */
int __fastcall sub_600FB6C8(int a1);  /* 0x000fb6c8 */
int __fastcall sub_600FB724(int a1);  /* 0x000fb724 */
int __fastcall sub_600FC164(int a1);  /* 0x000fc164 */
int __fastcall jc_squat_ref(int a1);  /* 0x000fc458 */
int __fastcall jc_damage_up_ref(int a1);  /* 0x000fc4b4 */
int __fastcall jc_quake_st_ref_2(int a1);  /* 0x000fce24 */
int __fastcall SE_BOSS_JR_CROWN_LAND_ref(int a1);  /* 0x000fd440 */
int __fastcall sub_600FF7F0(int a1);  /* 0x000ff7f0 */
int __fastcall sub_600FFD78(int a1, int a2);  /* 0x000ffd78 */
int __fastcall sub_600FFFEC(int a1);  /* 0x000fffec */
unsigned int __fastcall sub_601005C0(int a1);  /* 0x001005c0 */
int __fastcall sub_601008C8(int a1);  /* 0x001008c8 */
int __fastcall koopaJr_clown_shadow_ref_2(int a1);  /* 0x001009dc */
int __fastcall sub_60101A6C(_DWORD *a1);  /* 0x00101a6c */
int __fastcall sub_60101ABC(int a1);  /* 0x00101abc */
int __fastcall sub_60101B14(int a1);  /* 0x00101b14 */
int __fastcall SE_BOSS_JR_CLOWN_DAMAGE_ref_2(int *a1);  /* 0x00102060 */
int __fastcall Actor_W8course_BowserJr_for_tarihorizontal_move_Lift_build(int a1);  /* 0x00103ce8 */
int __fastcall sub_601049A0(int a1);  /* 0x001049a0 */
int __fastcall sub_60104BF4(int a1);  /* 0x00104bf4 */
int __fastcall Actor_W8course_BowserJr_for_atarimove_Lift_parentchild_obuje_build(int a1);  /* 0x00105e60 */
int __fastcall sub_601064B8(_DWORD *a1);  /* 0x001064b8 */
int __fastcall sub_6010672C(int a1);  /* 0x0010672c */
int __fastcall sub_60106A4C(int a1);  /* 0x00106a4c */
int __fastcall sub_60106C90(int a1, int a2, float *a3, int a4);  /* 0x00106c90 */
int __fastcall Actor_W8course_BowserJr_for_tarivertical_move_Lift_build(int a1);  /* 0x0010728c */
int __fastcall sub_60107F40(int a1);  /* 0x00107f40 */
int __fastcall sub_60108194(int a1);  /* 0x00108194 */
int __fastcall jump_quake1_ref_2(int a1);  /* 0x00108dfc */
int __fastcall jump_quake2_ref_2(_DWORD *a1);  /* 0x00108f3c */
int __fastcall jump_shot_ed_ref(_DWORD *a1);  /* 0x00109f78 */
int __fastcall sub_6010AEDC(int a1);  /* 0x0010aedc */
int __fastcall roy_shell_ref(int *a1);  /* 0x0010b170 */
int __fastcall sub_6010BB78(float *a1, unsigned int a2, unsigned int a3);  /* 0x0010bb78 */
int __fastcall sub_6010BDF4(int a1, unsigned int a2);  /* 0x0010bdf4 */
int __fastcall sub_6010C040(int a1, unsigned int a2);  /* 0x0010c040 */
int __fastcall sub_6010C1FC(int result, unsigned int a2);  /* 0x0010c1fc */
int __fastcall sub_6010C31C(int a1);  /* 0x0010c31c */
int __fastcall SE_BOSS_ROY_STEP_ref(int a1);  /* 0x0010d204 */
int __fastcall SE_BOSS_ROY_DOWN_LAND1_ref(int a1);  /* 0x0010e788 */
int __fastcall Actor_Roy_for_kishiLift_build(int a1);  /* 0x0010fcc4 */
int __fastcall sub_6011013C(int a1);  /* 0x0011013c */
int __fastcall sub_60110240(int a1);  /* 0x00110240 */
int __fastcall sub_60110438(int result);  /* 0x00110438 */
int __fastcall sub_60110490(int result);  /* 0x00110490 */
int __fastcall Actor_Roy_for_kishiLift_sutepu_build(int a1);  /* 0x00110804 */
int __fastcall sub_60110D6C(int a1);  /* 0x00110d6c */
int __fastcall sub_6011104C(int a1);  /* 0x0011104c */
int __fastcall sub_601118F4(int a1);  /* 0x001118f4 */
bool __fastcall sub_60111E1C(float *a1);  /* 0x00111e1c */
int __fastcall jcm_demo_battleA_ref(int a1);  /* 0x001126c8 */
int __fastcall SE_VOC_JR_ref_3(int a1);  /* 0x0011284c */
int __fastcall jcm_shot_st_wait_ref(int a1);  /* 0x001130d0 */
int __fastcall jcm_shot_ref(int a1);  /* 0x001132d4 */
int __fastcall jcm_special_ref(int a1);  /* 0x0011362c */
int __fastcall jcm_damage_s_ref(_DWORD *a1);  /* 0x0011386c */
int __fastcall jcm_damage_ref(int a1);  /* 0x0011395c */
int __fastcall SE_AMB_WATER_SURFACE_DOWN_ref(int a1);  /* 0x00113e90 */
int __fastcall sub_60114E10(_DWORD *a1);  /* 0x00114e10 */
int __fastcall sub_60115DC4(int *a1);  /* 0x00115dc4 */
int __fastcall sub_60115EF8(int a1);  /* 0x00115ef8 */
int __fastcall sub_60116088(int a1);  /* 0x00116088 */
int __fastcall jcm_squat_ref(int a1);  /* 0x00116680 */
int __fastcall jcm_damage_up_ref(int a1);  /* 0x00116758 */
int __fastcall jcm_death_ref(int a1);  /* 0x00116844 */
int __fastcall jcm_demo_battleA_ref_2(int a1);  /* 0x0011790c */
int __fastcall SE_BOSS_JR_CLOWN_OPEN_ref(int a1);  /* 0x00118fec */
int __fastcall jc_demo_W5_appear_ref(int a1);  /* 0x0011a9e0 */
int __fastcall sub_6011B35C(int a1);  /* 0x0011b35c */
int __fastcall sub_6011BF50(int a1);  /* 0x0011bf50 */
int __fastcall sub_6011C230(int a1);  /* 0x0011c230 */
bool __fastcall sub_6011C4B0(int a1);  /* 0x0011c4b0 */
int __fastcall sub_6011CB70(int a1);  /* 0x0011cb70 */
int __fastcall sub_6011D788(int a1);  /* 0x0011d788 */
int __fastcall koopaJr_clown_m_ref(_DWORD *a1, int a2);  /* 0x0011dc88 */
int __fastcall sub_6011DEE8(int a1);  /* 0x0011dee8 */
int __fastcall sub_6011E190(int a1);  /* 0x0011e190 */
int __fastcall sub_6011E504(float *a1, unsigned int a2, float *a3);  /* 0x0011e504 */
int __fastcall sub_6011EFC8(int a1, float *a2);  /* 0x0011efc8 */
float __fastcall sub_6011F2B4(int a1, int a2);  /* 0x0011f2b4 */
int __fastcall sub_6011FBCC(int a1);  /* 0x0011fbcc */
int __fastcall sub_60120120(int a1);  /* 0x00120120 */
int __fastcall sub_601206F4(int a1);  /* 0x001206f4 */
int __fastcall sub_601207E4(int a1);  /* 0x001207e4 */
int __fastcall sub_601208B4(int a1);  /* 0x001208b4 */
int __fastcall sub_601209A4(int a1);  /* 0x001209a4 */
int __fastcall sub_60120AF8(float *a1, float *a2);  /* 0x00120af8 */
int __fastcall SE_BOSS_JR_ref(int a1, int a2, int a3, int a4);  /* 0x00121af4 */
int __fastcall jcm_death_ref_2(_DWORD *a1);  /* 0x00122c7c */
int __fastcall Actor_underwater_BowserJr_retreat_pos_build(int a1);  /* 0x001245c0 */
int __fastcall spin_st_wait_ref(int a1);  /* 0x00125c9c */
int __fastcall spin_jump_ed_ref_2(int a1);  /* 0x00125ecc */
int __fastcall spin_jump_ref_2(int a1);  /* 0x001261d0 */
int __fastcall spin_jump_ed_ref_3(int a1);  /* 0x0012654c */
int __fastcall spin_2_ref(_WORD *a1);  /* 0x00126d6c */
int __fastcall spin_ed_ref(int a1);  /* 0x00127144 */
int __fastcall SE_BOSS_WENDY_MAGIC_JUMP_ref(int32x4_t *a1);  /* 0x001271b0 */
int __fastcall sub_60127E20(int a1);  /* 0x00127e20 */
int __fastcall sub_60128E08(_DWORD *a1);  /* 0x00128e08 */
int __fastcall sub_60128F34(unsigned int *a1);  /* 0x00128f34 */
unsigned int __fastcall sub_60129174(_DWORD *a1);  /* 0x00129174 */
int __fastcall sub_60129290(int a1);  /* 0x00129290 */
int __fastcall SE_VOC_WEN_POSE_ref(int *a1);  /* 0x00129434 */
int __fastcall spin_jump_ref_3(int a1);  /* 0x001295d4 */
int __fastcall SE_BOSS_WENDY_DOWN_LAND1_ref(int a1);  /* 0x0012a12c */
int __fastcall WendyFloor_onCreate(int a1);  /* 0x0012b40c */
int __fastcall sub_6012B514(int a1);  /* 0x0012b514 */
int __fastcall WendyFloor_updateModel(int a1);  /* 0x0012b63c */
int __fastcall WendyFloor_onExecute(int a1);  /* 0x0012b7a4 */
int __fastcall WendyFloor_onDraw(int a1, int a2, int a3, int a4);  /* 0x0012b7cc */
int __fastcall gura_anim_S_ref(int a1);  /* 0x0012c274 */
int __fastcall rakka_anim_S_ref(_DWORD *a1);  /* 0x0012c4dc */
int __fastcall sub_6012CB54(int a1);  /* 0x0012cb54 */
int __fastcall sub_6012CC68(_DWORD *a1);  /* 0x0012cc68 */
int __fastcall sub_6012CE5C(int a1);  /* 0x0012ce5c */
int __fastcall wendy_ring_ref(int a1);  /* 0x0012e324 */
int __fastcall sub_6012E47C(_DWORD *a1);  /* 0x0012e47c */
int __fastcall sub_6012E6D0(int a1);  /* 0x0012e6d0 */
float __fastcall sub_6012E784(int a1, float *a2);  /* 0x0012e784 */
int __fastcall SE_BOSS_WOOGAN_YOKAN_ref(_DWORD *a1, int a2, int a3, int a4);  /* 0x0012f374 */
int __fastcall sub_60130AAC(int a1);  /* 0x00130aac */
int __fastcall sub_60130BE0(int a1);  /* 0x00130be0 */
int __fastcall sub_6013166C(int a1);  /* 0x0013166c */
int __fastcall bros_boomerang_ref(int a1);  /* 0x00133588 */
int __fastcall bros_boomerang_model_ref(int a1);  /* 0x001337cc */
int __fastcall sub_60133EF0(int a1);  /* 0x00133ef0 */
int __fastcall sub_6013483C(_DWORD *a1);  /* 0x0013483c */
int __fastcall sub_60134914(int a1);  /* 0x00134914 */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);  /* 0x001349fc */
int __fastcall sub_60134DD4(int a1, int a2);  /* 0x00134dd4 */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);  /* 0x00134ef4 */
int __fastcall SE_EMY_DOWN_NO_SCORE_ref_3(int a1, int a2);  /* 0x00135010 */
int __fastcall FireballBase_ctor(int a1);  /* 0x00135a90 */
int __fastcall FireballBase_onCreate(int a1);  /* 0x00135bd8 */
int __fastcall FireballBase_beforeExecute(int a1);  /* 0x00135db0 */
int __fastcall FireballBase_onExecute(int *a1);  /* 0x00135e48 */
int __fastcall FireballBase_onDraw(int a1);  /* 0x0013616c */
int __fastcall FireballBase_onDelete(_BYTE *a1);  /* 0x00136184 */
int __fastcall FireballBase_removeActiveColliders(int a1);  /* 0x001361b0 */
int __fastcall FireballBase_addActiveColliders(int a1);  /* 0x001361fc */
int __fastcall sub_601362A0(int a1);  /* 0x001362a0 */
int __fastcall SE_OBJ_EMY_FIRE_SPLASH_ref(int a1);  /* 0x001363a8 */
int __fastcall SE_OBJ_EMY_FIRE_SPLASH_ref_2(int a1, float *a2);  /* 0x00136490 */
int __fastcall sub_6013657C(int a1);  /* 0x0013657c */
int __fastcall sub_601367FC(_DWORD *a1);  /* 0x001367fc */
int __fastcall sub_60136894(int a1);  /* 0x00136894 */
int __fastcall sub_60136948(int a1);  /* 0x00136948 */
bool __fastcall FireballBase_checkRTTI(int a1, int a2);  /* 0x00136e60 */
void __fastcall FireballBase_dtor(int a1);  /* 0x00136f64 */
int __fastcall FireballBase_dtorFree(int a1);  /* 0x00136ff0 */
int __fastcall SE_EMY_FIRE_BROS_FIRE_ref(int a1);  /* 0x001376e0 */
int __fastcall SE_EMY_FIRE_BROS_FIRE_ref_2(_DWORD *a1);  /* 0x001379b0 */
int __fastcall sub_60138104(int a1, float *a2);  /* 0x00138104 */
int __fastcall sub_60138350(int a1);  /* 0x00138350 */
int __fastcall PlayerFireball_ctor(int a1);  /* 0x0013a7a4 */
int __fastcall SE_OBJ_FIREBALL_SPLASH_ref(int a1);  /* 0x0013b428 */
int __fastcall SE_OBJ_FIREBALL_SPLASH_ref_2(int a1, float *a2);  /* 0x0013b470 */
int __fastcall sub_6013D46C(int a1);  /* 0x0013d46c */
int __fastcall sub_6013D794(int a1);  /* 0x0013d794 */
int __fastcall sub_6013D830(int a1);  /* 0x0013d830 */
int __fastcall sub_6013E0C8(float *a1);  /* 0x0013e0c8 */
int __fastcall sub_6013E288(int a1, int a2);  /* 0x0013e288 */
int __fastcall sub_6013E7E0(int a1);  /* 0x0013e7e0 */
int __fastcall sub_6013E8B4(int a1, int a2);  /* 0x0013e8b4 */
int __fastcall sub_6013E980(int a1);  /* 0x0013e980 */
int __fastcall sub_6013EA98(int a1);  /* 0x0013ea98 */
int __fastcall sub_6013F02C(int a1);  /* 0x0013f02c */
int __fastcall HammerActor_setupModel(int a1);  /* 0x0013fcd4 */
int __fastcall sub_6013FDC0(int a1);  /* 0x0013fdc0 */
int __fastcall bros_hammer_model_ref(int a1);  /* 0x0013fffc */
int __fastcall SE_EMY_HAMMER_BROS_HAMMER_ref(float *a1);  /* 0x001405f4 */
int __fastcall sub_6014065C(int a1);  /* 0x0014065c */
int __fastcall sub_60140A14(int a1);  /* 0x00140a14 */
int __fastcall sub_60141500(int a1);  /* 0x00141500 */
bool __fastcall sub_60141890(_DWORD *a1);  /* 0x00141890 */
int __fastcall sub_60142A48(_DWORD *a1);  /* 0x00142a48 */
int __fastcall sub_60142A90(int a1);  /* 0x00142a90 */
int __fastcall sub_60142B14(_DWORD *a1);  /* 0x00142b14 */
int __fastcall SE_OBJ_EMY_ICEBALL_DISAPP_ref(int a1, _DWORD *a2);  /* 0x00142fe0 */
int __fastcall SE_EMY_ICE_BROS_ICE_ref(float *a1);  /* 0x00143330 */
int __fastcall SE_OBJ_EMY_ICEBALL_DISAPP_ref_2(int a1);  /* 0x00143394 */
int __fastcall SE_EMY_ICE_BROS_ICE_ref_2(_DWORD *a1);  /* 0x00143480 */
int __fastcall sub_60143DB0(int a1);  /* 0x00143db0 */
int __fastcall mega_hammer_ref(int a1);  /* 0x001453b8 */
int __fastcall sub_601454C8(int a1);  /* 0x001454c8 */
int __fastcall sub_60145684(int a1, int *a2);  /* 0x00145684 */
int __fastcall SE_OBJ_ROCK_LAND_ref_2(int a1);  /* 0x00145dfc */
int __fastcall SE_OBJ_SNOWBALL_GROUND_ref(int a1);  /* 0x00146d04 */
int __fastcall sub_60147570(int a1);  /* 0x00147570 */
int __fastcall sub_60147B2C(int a1);  /* 0x00147b2c */
int __fastcall sub_60147BB0(int a1);  /* 0x00147bb0 */
int __fastcall ball_model_ref(int a1);  /* 0x001484bc */
int __fastcall SE_EMY_CHOROPU_M_SPANNER_ref(int a1);  /* 0x00149320 */
int __fastcall sub_60149A4C(_DWORD *a1);  /* 0x00149a4c */
int __fastcall sub_6014A2B8(int a1);  /* 0x0014a2b8 */
int __fastcall CollisionMgr_ctor(int a1);  /* 0x0014a310 */
int __fastcall CollisionMgr_vf14(int a1);  /* 0x0014b310 */
int __fastcall sub_6014B69C(int a1);  /* 0x0014b69c */
int __fastcall sub_6014B6F8(int a1);  /* 0x0014b6f8 */
int __fastcall sub_6014B758(int a1, int a2);  /* 0x0014b758 */
int __fastcall CollisionMgr_dtor(int a1);  /* 0x0014b840 */
int __fastcall CollisionMgr_dtorFree(int a1);  /* 0x0014b9d8 */
int __fastcall CollisionMgr_init(int result, int a2, int *a3, int *a4, float *a5);  /* 0x0014b9e8 */
int __fastcall CollisionMgr_vf18(_BYTE *a1);  /* 0x0014bbc8 */
int __fastcall sub_6014BF68(int a1);  /* 0x0014bf68 */
int __fastcall sub_6014C3BC(int a1);  /* 0x0014c3bc */
int __fastcall sub_6014C3EC(int a1, int a2);  /* 0x0014c3ec */
int __fastcall sub_6014C4A4(int a1);  /* 0x0014c4a4 */
int __fastcall sub_6014C4D4(int a1);  /* 0x0014c4d4 */
int __fastcall sub_6014C508(int a1, int a2);  /* 0x0014c508 */
bool __fastcall sub_6014C540(int a1);  /* 0x0014c540 */
int __fastcall sub_6014C57C(int a1, int a2);  /* 0x0014c57c */
unsigned int __fastcall sub_6014C5E8(int a1);  /* 0x0014c5e8 */
int __fastcall sub_6014C61C(int a1, int a2);  /* 0x0014c61c */
int __fastcall sub_6014C658(int a1, int a2);  /* 0x0014c658 */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);  /* 0x0014c6e4 */
int __fastcall sub_6014D020(int a1);  /* 0x0014d020 */
int __fastcall sub_6014D680(int a1);  /* 0x0014d680 */
int __fastcall sub_6014D97C(int a1);  /* 0x0014d97c */
int __fastcall sub_6014DDD0(int a1);  /* 0x0014ddd0 */
int __fastcall sub_6014DEE4(int a1, int a2);  /* 0x0014dee4 */
int __fastcall sub_6014E8B8(_DWORD *a1, int a2);  /* 0x0014e8b8 */
int __fastcall sub_6014EB4C(int a1, int a2, int a3);  /* 0x0014eb4c */
int __fastcall sub_6014F61C(int a1);  /* 0x0014f61c */
int __fastcall sub_6014F6C8(int a1, int a2, int a3);  /* 0x0014f6c8 */
int __fastcall sub_6014FBD0(int a1, int a2);  /* 0x0014fbd0 */
int __fastcall sub_6014FD40(int a1, int a2, int a3);  /* 0x0014fd40 */
int __fastcall sub_60150BDC(_DWORD *a1, unsigned int a2);  /* 0x00150bdc */
int __fastcall sub_60150CD0(int a1, int a2);  /* 0x00150cd0 */
bool __fastcall sub_60150D70(int a1, int a2, int a3);  /* 0x00150d70 */
bool __fastcall sub_60150EE8(int a1, int a2, int a3);  /* 0x00150ee8 */
bool __fastcall sub_60151114(int a1, _DWORD *a2, int a3);  /* 0x00151114 */
int __fastcall sub_601518D4(int a1, float *a2);  /* 0x001518d4 */
int __fastcall sub_60151960(int a1, float *a2, int a3);  /* 0x00151960 */
int __fastcall sub_60151A7C(int a1, float *a2, float *a3);  /* 0x00151a7c */
int __fastcall checkWaveCollision(_DWORD *a1, float *a2);  /* 0x00151d34 */
int __fastcall checkLiquidCollisions(int *a1, float *a2, float *a3, int a4);  /* 0x00151ed8 */
int __fastcall physics_21893E8(int *a1, float *a2, _BYTE *a3, float *a4, int a5);  /* 0x001522f8 */
int __fastcall sub_601529D0(_DWORD *a1, float *a2, char a3);  /* 0x001529d0 */
int __fastcall sub_60152B40(char a1);  /* 0x00152b40 */
bool __fastcall CollisionMgr_checkRTTI(int a1, int a2);  /* 0x0015303c */
int __fastcall ColliderMgr_dtorFree(sead::IDisposer *a1);  /* 0x00153470 */
int __fastcall ColliderMgr_add(_DWORD *a1, _DWORD *a2);  /* 0x001535ac */
bool __fastcall sub_601536B0(int a1, int a2);  /* 0x001536b0 */
int __fastcall ColliderMgr_removeRelated1(_DWORD *a1, _DWORD *a2);  /* 0x001536e8 */
int __fastcall ColliderMgr_removeFromList1(int result, int a2);  /* 0x001537f0 */
int __fastcall ColliderMgr_removeFromList3(int result, int a2);  /* 0x00153828 */
int __fastcall ColliderMgr_removeFromList2(int result, int a2);  /* 0x00153860 */
int __fastcall sub_60153898(_DWORD *a1, _DWORD *a2, __int64 *a3, __int64 *a4);  /* 0x00153898 */
int __fastcall sub_60153A98(int result, int a2);  /* 0x00153a98 */
int __fastcall ColliderMgr_removeFromList4(int result, int a2);  /* 0x00153ad0 */
int __fastcall ColliderMgr_removeFromList5(_DWORD *a1, int a2);  /* 0x00153b08 */
int __fastcall ColliderList_insertBack(int result, int a2);  /* 0x00153bcc */
int __fastcall ColliderMgr_removeRelated2(int result, int a2);  /* 0x00153c00 */
int __fastcall ColliderList_remove(int result, int a2);  /* 0x00153c94 */
int __fastcall sub_60153D08(int result);  /* 0x00153d08 */
int __fastcall sub_60153D8C(_DWORD *a1, float *a2);  /* 0x00153d8c */
int __fastcall ColliderList_insertFront(int result, int a2);  /* 0x001540c0 */
int __fastcall ColliderList_clear(int result);  /* 0x001540f4 */
bool __fastcall ActorCollisionMgr_checkRTTI(int a1, int a2);  /* 0x00154140 */
int __fastcall ActorCollisionMgr_dtorFree(int a1);  /* 0x001542b4 */
int __fastcall ActorCollisionMgr_vf1C(int a1);  /* 0x001542c4 */
int __fastcall sub_601542DC(int a1);  /* 0x001542dc */
int __fastcall sub_60154380(_DWORD *a1);  /* 0x00154380 */
int __fastcall sub_60154420(int a1, int a2);  /* 0x00154420 */
int __fastcall sub_60154550(int a1);  /* 0x00154550 */
int __fastcall sub_60154628(int a1, int a2);  /* 0x00154628 */
int __fastcall sub_601549C4(int a1);  /* 0x001549c4 */
int __fastcall sub_60154A5C(int a1);  /* 0x00154a5c */
int __fastcall sub_60154C70(int a1);  /* 0x00154c70 */
int __fastcall sub_60154D7C(int a1, int a2, int a3);  /* 0x00154d7c */
int __fastcall sub_60154F48(int a1, int a2, int a3);  /* 0x00154f48 */
int __fastcall sub_60155120(int a1, int a2, int a3, int a4, float *a5);  /* 0x00155120 */
bool __fastcall sub_60155344(int a1);  /* 0x00155344 */
int __fastcall sub_60155374(int a1, float *a2);  /* 0x00155374 */
int __fastcall sub_601557EC(int a1, float *a2);  /* 0x001557ec */
int __fastcall sub_601559B8(int a1, int a2, int a3);  /* 0x001559b8 */
int __fastcall sub_60155A60(int a1, int a2, float *a3, int a4);  /* 0x00155a60 */
int __fastcall sub_60155B0C(int a1, float *a2, _DWORD *a3, int a4);  /* 0x00155b0c */
int __fastcall sub_60155C38(int a1, int a2, _DWORD *a3, int a4);  /* 0x00155c38 */
int __fastcall sub_60155D68(int a1, float *a2, float *a3, int a4, _DWORD *a5);  /* 0x00155d68 */
int __fastcall sub_60155E7C(int a1, float *a2, _DWORD *a3);  /* 0x00155e7c */
int __fastcall sub_60155F6C(int a1, float *a2, _DWORD *a3);  /* 0x00155f6c */
int __fastcall sub_60156048(int a1, int a2, _DWORD *a3, float *a4);  /* 0x00156048 */
bool __fastcall sub_60157050(int a1, int a2);  /* 0x00157050 */
int __fastcall CircularCollider_init(int a1, int a2);  /* 0x001571b0 */
int __fastcall CircularCollider_initImpl(int a1, _DWORD *a2, int a3);  /* 0x00157200 */
int __fastcall sub_601573D4(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x001573d4 */
int __fastcall CircularCollider_execute(int a1);  /* 0x00157450 */
int __fastcall sub_60157A48(int a1, int a2, float *a3, float *a4, int a5, int a6);  /* 0x00157a48 */
int __fastcall sub_60157D3C(int a1, int a2, int a3, float *a4, int a5, int a6);  /* 0x00157d3c */
int __fastcall CircularCollider_vf2C(int a1, _DWORD *a2);  /* 0x00158088 */
bool __fastcall CircularCollider_vf3C(int a1, float *a2);  /* 0x001581f8 */
int __fastcall sub_601582D8(int result, int a2, unsigned int a3);  /* 0x001582d8 */
int __fastcall CircularCollider_dtorFree(sead::IDisposer *a1);  /* 0x001585dc */
bool __fastcall CircularCollider_checkRTTI(int a1, int a2);  /* 0x001585ec */
int __fastcall ActiveCollider_ctor(int a1);  /* 0x00158c7c */
void __fastcall ActiveCollider_dtor(sead::IDisposer *a1);  /* 0x00158cf8 */
int __fastcall ActiveCollider_dtorFree(sead::IDisposer *a1);  /* 0x00158d54 */
void __fastcall ActiveCollider_reset(_DWORD *a1);  /* 0x00158db4 */
int __fastcall ActiveCollider_init2(int a1, int a2, int *a3, unsigned __int8 *a4, int a5);  /* 0x00158ebc */
int __fastcall ActiveCollider_init3(int a1, int a2, int *a3, _BYTE *a4, int a5, int a6);  /* 0x00158edc */
int __fastcall sub_60158F04(int a1, int a2);  /* 0x00158f04 */
int __fastcall sub_60158FA8(int a1, int a2);  /* 0x00158fa8 */
int __fastcall sub_6015907C(int a1, int a2);  /* 0x0015907c */
int __fastcall sub_6015913C(int a1, int a2);  /* 0x0015913c */
bool __fastcall ActiveCollider_check5C(int a1, int a2);  /* 0x001591fc */
int __fastcall sub_601592A4(int a1, float *a2);  /* 0x001592a4 */
bool __fastcall sub_60159438(int a1, float *a2);  /* 0x00159438 */
bool __fastcall ActiveCollider_doOverlapMaybe(int a1, int a2);  /* 0x001597e8 */
int __fastcall sub_60159A34(int a1, int a2, float *a3);  /* 0x00159a34 */
int __fastcall sub_60159C30(int a1, int a2, float *a3);  /* 0x00159c30 */
unsigned int __fastcall sub_60159E78(int a1, int a2, float *a3);  /* 0x00159e78 */
int __fastcall sub_6015A300(int a1, int a2, float *a3);  /* 0x0015a300 */
int __fastcall sub_6015A5E8(int a1, int a2, float *a3);  /* 0x0015a5e8 */
bool __fastcall sub_6015A8D0(int *a1, _DWORD *a2, _DWORD *a3, char a4);  /* 0x0015a8d0 */
int __fastcall sub_6015A964(int *a1, _DWORD *a2, int *a3);  /* 0x0015a964 */
bool __fastcall sub_6015A9BC(_DWORD *a1, int a2);  /* 0x0015a9bc */
bool __fastcall sub_6015A9F4(float *a1, float *a2);  /* 0x0015a9f4 */
int __fastcall sub_6015AB38(float *a1);  /* 0x0015ab38 */
bool __fastcall sub_6015ABF4(float *a1, float *a2);  /* 0x0015abf4 */
int __fastcall sub_6015AD30(float *a1);  /* 0x0015ad30 */
int __fastcall ActiveColldierMgr_removeFromCreateList(int result, int a2);  /* 0x0015b0e4 */
bool __fastcall ActiveColliderMgr_isInActiveList(int a1, int a2);  /* 0x0015b178 */
int __fastcall ActiveColliderMgr_inserBack(int result, int a2);  /* 0x0015b1fc */
int __fastcall ActiveColliderMgr_remove(int result, int a2);  /* 0x0015b37c */
void __fastcall ActiveColliderMgr_addToCreateList(int a1, int a2);  /* 0x0015b3f0 */
bool __fastcall ActiveColliderMgr_isInCreateList(int a1, int a2);  /* 0x0015b454 */
int __fastcall ActiveColldierMgr_removeFromList3(int result, int a2);  /* 0x0015b48c */
int __fastcall sub_6015B918(_DWORD *a1, float *a2);  /* 0x0015b918 */
int __fastcall ActiveColliderMgr_insertFront(int result, int a2);  /* 0x0015bb4c */
int __fastcall sub_6015BDB8(int a1, int a2);  /* 0x0015bdb8 */
int __fastcall sub_6015BE08(int a1, _DWORD *a2, int a3);  /* 0x0015be08 */
int __fastcall sub_6015C588(int result, float *a2, float *a3);  /* 0x0015c588 */
int __fastcall sub_6015C6B0(int a1, bool *a2, float *a3);  /* 0x0015c6b0 */
int __fastcall sub_6015CB9C(int a1, int a2, _BYTE *a3, __int64 *a4);  /* 0x0015cb9c */
int __fastcall sub_6015CD5C(int a1, int a2, int a3, int a4);  /* 0x0015cd5c */
int __fastcall sub_6015D0AC(int result);  /* 0x0015d0ac */
int __fastcall TileCheck_ctor(int result, int a2);  /* 0x0015d0ec */
int __fastcall sub_6015D144(int result, int a2);  /* 0x0015d144 */
int __fastcall sub_6015D180(int a1, int a2);  /* 0x0015d180 */
int __fastcall sub_6015D2DC(int a1, int a2, float *a3, float *a4, int a5);  /* 0x0015d2dc */
int __fastcall sub_6015D6F0(int a1, int a2, float *a3, float *a4, int a5);  /* 0x0015d6f0 */
int __fastcall TileCheck_check(int a1, int a2, float *a3, float *a4, int a5);  /* 0x0015da30 */
int __fastcall sub_6015DBD8(int a1, _DWORD *a2, float *a3);  /* 0x0015dbd8 */
int __fastcall sub_6015DD58(int a1, _DWORD *a2, float *a3);  /* 0x0015dd58 */
int __fastcall sub_6015DF58(int a1, int a2, int a3);  /* 0x0015df58 */
int __fastcall ColliderNode_ctor(int a1);  /* 0x0015df90 */
int __fastcall sub_6015DFC0(int a1);  /* 0x0015dfc0 */
void __fastcall SolidOnTopCollider_dtor(sead::IDisposer *a1);  /* 0x0015e124 */
int __fastcall SolidOnTopCollider_dtorFree(sead::IDisposer *a1);  /* 0x0015e128 */
int __fastcall SolidOnTopCollider_init2(_DWORD *a1, int a2, int a3, signed int a4, int a5);  /* 0x0015e138 */
int __fastcall SolidOnTopCollider_init(int a1, int a2, int a3);  /* 0x0015e3a0 */
int __fastcall SolidOnTopCollider_initImpl(_DWORD *a1, _DWORD *a2, _DWORD *a3);  /* 0x0015e3f0 */
int __fastcall sub_6015E4F0(int a1);  /* 0x0015e4f0 */
int __fastcall SolidOnTopCollider_execute(int a1);  /* 0x0015eab4 */
bool __fastcall sub_6015EE3C(int a1, float *a2, float *a3, int a4, int a5);  /* 0x0015ee3c */
unsigned int __fastcall sub_6015F088(int a1, float *a2, int a3);  /* 0x0015f088 */
unsigned int __fastcall sub_6015F1FC(int a1, float *a2, int a3);  /* 0x0015f1fc */
int __fastcall SolidOnTopCollider_vf2C(int a1, _DWORD *a2);  /* 0x0015fbd0 */
int __fastcall sub_6015FBE4(int result, int a2, unsigned int a3);  /* 0x0015fbe4 */
bool __fastcall SolidOnTopCollider_checkRTTI(int a1, int a2);  /* 0x0015fe58 */
void __fastcall ColliderBase_dtor(sead::IDisposer *a1);  /* 0x001600e4 */
int __fastcall sub_601601B8(_DWORD *a1);  /* 0x001601b8 */
int __fastcall ColliderBase_dtorFree(sead::IDisposer *a1);  /* 0x00160200 */
int __fastcall sub_60160210(int result, int a2);  /* 0x00160210 */
int __fastcall sub_6016024C(int result, int a2);  /* 0x0016024c */
int __fastcall sub_60160288(int result, int a2);  /* 0x00160288 */
int __fastcall sub_601602C0(int result, int a2);  /* 0x001602c0 */
int __fastcall sub_601602F8(int result, int a2);  /* 0x001602f8 */
int __fastcall sub_60160334(int result, int a2);  /* 0x00160334 */
int __fastcall sub_60160370(int result, int a2);  /* 0x00160370 */
int __fastcall sub_601603AC(int result, int a2);  /* 0x001603ac */
bool __fastcall sub_60160434(int a1, float *a2, float *a3);  /* 0x00160434 */
int __fastcall ColliderBase_setType(__int64 *a1, int a2);  /* 0x00160490 */
__int64 __fastcall sub_601604FC(int a1, __int64 *a2);  /* 0x001604fc */
int __fastcall ColliderBase_setSolidity(__int64 *a1, int a2);  /* 0x00160548 */
int __fastcall ColliderBase_setSurfaceType(__int64 *a1, int a2);  /* 0x001605bc */
int __fastcall sub_60160630(__int64 *a1, int a2);  /* 0x00160630 */
int __fastcall sub_601606A4(__int64 *a1, int a2);  /* 0x001606a4 */
int __fastcall sub_60160718(int result, float *a2);  /* 0x00160718 */
int __fastcall sub_601607F0(int result, float *a2);  /* 0x001607f0 */
int __fastcall sub_60160948(_DWORD *a1);  /* 0x00160948 */
int __fastcall sub_601609C4(int a1, _DWORD *a2, unsigned int a3);  /* 0x001609c4 */
int __fastcall sub_60160BD8(int a1, int a2, int a3, int a4);  /* 0x00160bd8 */
int __fastcall sub_60160F58(int a1, float *a2, int a3, char a4);  /* 0x00160f58 */
int __fastcall sub_6016107C(int a1, _DWORD *a2, int a3);  /* 0x0016107c */
int __fastcall sub_6016118C(int a1, _DWORD *a2, int a3);  /* 0x0016118c */
int __fastcall sub_60161340(int a1, _DWORD *a2, int a3);  /* 0x00161340 */
int __fastcall sub_601614BC(int a1);  /* 0x001614bc */
int __fastcall sub_601615A0(int a1, int a2, int a3);  /* 0x001615a0 */
int __fastcall sub_601616E8(int a1, float *a2);  /* 0x001616e8 */
bool __fastcall ColliderBase_checkRTTI(int a1, int a2);  /* 0x0016188c */
void __fastcall ShapedCollider_dtor(sead::IDisposer *a1);  /* 0x00161bd8 */
int __fastcall ShapedCollider_dtorFree(sead::IDisposer *a1);  /* 0x00161bdc */
int __fastcall sub_60161BEC(_DWORD *a1, int a2, int a3, signed int a4, int a5);  /* 0x00161bec */
int __fastcall sub_60161E18(int a1, int a2, int a3, int a4);  /* 0x00161e18 */
int __fastcall sub_60161E68(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00161e68 */
int __fastcall ShapedCollider_vf3C(int a1, float *a2);  /* 0x001624f0 */
int __fastcall ShapedCollider_execute(_DWORD *a1, int a2, int a3, int a4);  /* 0x00162638 */
int __fastcall sub_60162BF0(int a1, int a2, float *a3, float *a4, int a5, int a6);  /* 0x00162bf0 */
int __fastcall sub_60163440(int a1, int a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x00163440 */
int __fastcall sub_6016377C(int a1, int a2, int a3, int a4);  /* 0x0016377c */
int __fastcall sub_601638EC(int a1, int a2, float *a3, float *a4, int a5, float *a6);  /* 0x001638ec */
int __fastcall sub_601644C4(int a1, int a2, int a3, float *a4, int a5, int a6);  /* 0x001644c4 */
int __fastcall ShapedCollider_vf2C(int a1, _DWORD *a2);  /* 0x00164ddc */
int __fastcall sub_60164DF0(int result, int a2, unsigned int a3);  /* 0x00164df0 */
bool __fastcall ShapedCollider_checkRTTI(int a1, int a2);  /* 0x001650b8 */
int __fastcall ShapedCollider_init(int a1, int a2, _DWORD *a3);  /* 0x0016522c */
void __fastcall SwingingCollider_dtor(sead::IDisposer *a1);  /* 0x001653ec */
int __fastcall SwingingCollider_dtorFree(sead::IDisposer *a1);  /* 0x00165424 */
int __fastcall sub_60165460(_DWORD *a1, int a2, int a3, signed int a4, int a5);  /* 0x00165460 */
int __fastcall sub_60165590(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00165590 */
int __fastcall sub_601656B0(int result);  /* 0x001656b0 */
int __fastcall sub_601658F0(int result, int a2);  /* 0x001658f0 */
int __fastcall sub_60165934(int result, int a2);  /* 0x00165934 */
int __fastcall SwingingCollider_vf3C(int a1, float *a2);  /* 0x00165be0 */
int __fastcall SwingingCollider_execute(_DWORD *a1, int a2, int a3, int a4);  /* 0x00165cc4 */
int __fastcall sub_60165D48(int result);  /* 0x00165d48 */
int __fastcall SwingingCollider_vf2C(int a1, _DWORD *a2);  /* 0x0016660c */
bool __fastcall SwingingCollider_checkRTTI(int a1, int a2);  /* 0x00166620 */
int __fastcall sub_60166AE0(float *a1, float *a2, int *a3, int *a4);  /* 0x00166ae0 */
int __fastcall sub_60166BF0(float *a1, float *a2, float *a3);  /* 0x00166bf0 */
int __fastcall sub_60166CF0(float *a1, float *a2, float *a3);  /* 0x00166cf0 */
int __fastcall sub_60166DF0(float *a1, float *a2, int a3);  /* 0x00166df0 */
unsigned int __fastcall sub_60166E60(unsigned int result, float *a2, int a3, int a4, int a5);  /* 0x00166e60 */
bool __fastcall sub_6016717C(float *a1, float *a2);  /* 0x0016717c */
int __fastcall sub_60167218(float *a1, float *a2, float *a3);  /* 0x00167218 */
int __fastcall sub_601675C0(int a1);  /* 0x001675c0 */
int __fastcall sub_60167638(int a1);  /* 0x00167638 */
int __fastcall sub_601679DC(int a1, float *a2, int a3, _BYTE *a4);  /* 0x001679dc */
int __fastcall sub_60167C94(int a1, float *a2, int a3, _BYTE *a4);  /* 0x00167c94 */
int __fastcall sub_60167E8C(int a1, float *a2, int a3, _BYTE *a4);  /* 0x00167e8c */
bool __fastcall sub_60168120(int a1);  /* 0x00168120 */
int __fastcall sub_60168634(int a1, _DWORD *a2);  /* 0x00168634 */
int __fastcall sub_601686E4(int a1);  /* 0x001686e4 */
bool __fastcall sub_601687A8(Actor *a1);  /* 0x001687a8 */
int __fastcall sub_601687F4(float *a1, float *a2, float *a3);  /* 0x001687f4 */
int __fastcall sub_60168910(float *a1, float *a2, float *a3);  /* 0x00168910 */
int __fastcall sub_601689FC(int a1, float *a2, float *a3, int a4);  /* 0x001689fc */
unsigned int __fastcall sub_60168B8C(int a1, int a2, int a3);  /* 0x00168b8c */
unsigned int __fastcall sub_60168C9C(int a1, _DWORD *a2, int a3);  /* 0x00168c9c */
int __fastcall sub_60168D04(int a1);  /* 0x00168d04 */
int __fastcall sub_60168DF8(int result);  /* 0x00168df8 */
int __fastcall sub_60168EA0(int result);  /* 0x00168ea0 */
int __fastcall sub_60169030(int a1, float *a2, float *a3, unsigned int a4);  /* 0x00169030 */
int __fastcall sub_601691C0(int a1);  /* 0x001691c0 */
int __fastcall sub_601693DC(int a1, int a2, int a3, int a4);  /* 0x001693dc */
int __fastcall sub_60169544(_DWORD *a1);  /* 0x00169544 */
int __fastcall sub_601698C4(int a1, _DWORD *a2);  /* 0x001698c4 */
int __fastcall sub_60169A30(_DWORD *a1);  /* 0x00169a30 */
int __fastcall sub_6016A024(int a1);  /* 0x0016a024 */
int __fastcall sub_6016A15C(_DWORD *a1, int a2);  /* 0x0016a15c */
int __fastcall sub_6016A300(_DWORD *a1);  /* 0x0016a300 */
int __fastcall sub_6016AB38(int a1);  /* 0x0016ab38 */
int __fastcall sub_6016AD7C(_DWORD *a1, unsigned int a2);  /* 0x0016ad7c */
int __fastcall sub_6016B024(int a1, int a2);  /* 0x0016b024 */
int __fastcall sub_6016B670(int a1);  /* 0x0016b670 */
int __fastcall sub_6016BB6C(int result, int a2, _DWORD *a3, int a4, char a5, int a6);  /* 0x0016bb6c */
int __fastcall sub_6016C320(int a1);  /* 0x0016c320 */
int __fastcall sub_6016C7D4(int a1);  /* 0x0016c7d4 */
int __fastcall sub_6016C978(int a1, int a2, int a3);  /* 0x0016c978 */
int __fastcall sub_6016CC0C(int a1, int a2, int a3);  /* 0x0016cc0c */
int __fastcall sub_6016CDA0(int a1, int a2, int a3);  /* 0x0016cda0 */
int __fastcall sub_6016CF90(int a1, int a2, int a3);  /* 0x0016cf90 */
int __fastcall sub_6016D3EC(int a1, int a2, int a3);  /* 0x0016d3ec */
int __fastcall sub_6016D574(int a1, int a2, int a3);  /* 0x0016d574 */
int __fastcall sub_6016D6F0(int a1, int a2, int a3);  /* 0x0016d6f0 */
int __fastcall sub_6016D938(int a1, int a2, int a3);  /* 0x0016d938 */
int __fastcall sub_6016DB58(int a1, int a2, int a3);  /* 0x0016db58 */
int __fastcall sub_6016DCF4(int a1, int a2, int a3);  /* 0x0016dcf4 */
int __fastcall sub_6016DE7C(int a1);  /* 0x0016de7c */
int __fastcall sub_6016E18C(int a1);  /* 0x0016e18c */
int __fastcall sub_6016E514(int a1);  /* 0x0016e514 */
int __fastcall sub_6016E884(_DWORD *a1);  /* 0x0016e884 */
int __fastcall sub_6016E918(int a1);  /* 0x0016e918 */
int __fastcall sub_6016ED9C(_DWORD *a1);  /* 0x0016ed9c */
int __fastcall sub_6016EE30(int a1, int a2, int a3);  /* 0x0016ee30 */
int __fastcall sub_6016EE88(_DWORD *a1);  /* 0x0016ee88 */
int __fastcall sub_6016EEE8(int result, _DWORD *a2, int a3);  /* 0x0016eee8 */
int __fastcall sub_6016EF74(int result);  /* 0x0016ef74 */
int __fastcall sub_6016EFD0(int result, _DWORD *a2, int a3, int a4, char a5);  /* 0x0016efd0 */
int __fastcall sub_6016F038(int result, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0016f038 */
int __fastcall sub_6016F0B8(int result, float *a2, int a3);  /* 0x0016f0b8 */
int __fastcall sub_6016F160(int result);  /* 0x0016f160 */
int __fastcall sub_6016F204(int result, int a2, int a3, int a4);  /* 0x0016f204 */
int __fastcall sub_6016F31C(int a1);  /* 0x0016f31c */
int __fastcall sub_6016F614(int a1);  /* 0x0016f614 */
int __fastcall sub_6016F760(int a1);  /* 0x0016f760 */
int __fastcall sub_6016FF38(int a1);  /* 0x0016ff38 */
int __fastcall sub_60170034(int a1);  /* 0x00170034 */
int __fastcall sub_601709B4(int a1, int a2);  /* 0x001709b4 */
int __fastcall sub_60170AB4(_DWORD *a1);  /* 0x00170ab4 */
int __fastcall sub_60170B5C(unsigned __int8 *a1);  /* 0x00170b5c */
int __fastcall sub_60170BD8(int a1, unsigned int *a2);  /* 0x00170bd8 */
int __fastcall sub_6017113C(int a1, _DWORD *a2, unsigned int *a3);  /* 0x0017113c */
int __fastcall sub_601719B8(int a1, _DWORD *a2);  /* 0x001719b8 */
int __fastcall sub_60171B7C(int a1, _DWORD *a2, unsigned int *a3);  /* 0x00171b7c */
int __fastcall sub_601721FC(int a1);  /* 0x001721fc */
int __fastcall sub_6017226C(int a1, _DWORD *a2);  /* 0x0017226c */
unsigned int __fastcall sub_601723B8(int a1);  /* 0x001723b8 */
int __fastcall sub_60172FB8(int a1);  /* 0x00172fb8 */
int __fastcall sub_60173634(_DWORD *a1, unsigned int *a2);  /* 0x00173634 */
int __fastcall Actor_CourseSelectocastle_build(int a1);  /* 0x001737e0 */
int __fastcall sub_60174204(int a1);  /* 0x00174204 */
bool __fastcall sub_60174850(int a1);  /* 0x00174850 */
int __fastcall sub_60174C98(int a1);  /* 0x00174c98 */
int __fastcall sub_601759F4(_DWORD *a1);  /* 0x001759f4 */
int __fastcall sub_60175C54(int a1);  /* 0x00175c54 */
int __fastcall sub_60176120(int result);  /* 0x00176120 */
int __fastcall sub_60176434(int a1);  /* 0x00176434 */
bool __fastcall sub_601767E8(int a1);  /* 0x001767e8 */
int __fastcall sub_60177104(int a1);  /* 0x00177104 */
int __fastcall sub_601774C8(int a1, int a2);  /* 0x001774c8 */
int __fastcall sub_60177510(_DWORD *a1);  /* 0x00177510 */
int __fastcall sub_60177B88(int a1, int a2, int a3, int a4);  /* 0x00177b88 */
int __fastcall sub_60177E70(int a1, int a2, int a3, int a4);  /* 0x00177e70 */
int __fastcall sub_60177F44(int a1, int a2);  /* 0x00177f44 */
int __fastcall sub_6017833C(int a1, int a2);  /* 0x0017833c */
int __fastcall sub_60178480(int a1, _DWORD *a2);  /* 0x00178480 */
int __fastcall sub_60178558(int a1, unsigned int a2, unsigned int a3);  /* 0x00178558 */
int __fastcall sub_60178798(int a1, _DWORD *a2);  /* 0x00178798 */
int __fastcall sub_60178CF0(int a1);  /* 0x00178cf0 */
int __fastcall sub_6017A3E0(int a1);  /* 0x0017a3e0 */
int __fastcall sub_6017A89C(int a1);  /* 0x0017a89c */
int __fastcall sub_6017B818(int a1);  /* 0x0017b818 */
unsigned int __fastcall sub_6017BE9C(int a1);  /* 0x0017be9c */
int __fastcall sub_6017D65C(int a1, _DWORD *a2, int *a3);  /* 0x0017d65c */
int __fastcall sub_6017E728(int a1, _DWORD *a2, int *a3, unsigned int a4);  /* 0x0017e728 */
int __fastcall sub_6017F25C(int a1, _DWORD *a2, int *a3, unsigned int a4);  /* 0x0017f25c */
int __fastcall sub_6018018C(int a1, _DWORD *a2, int *a3, unsigned int a4);  /* 0x0018018c */
int __fastcall sub_60180C24(int a1, int a2, _DWORD *a3);  /* 0x00180c24 */
int __fastcall sub_60180FE8(int a1, int a2, _DWORD *a3);  /* 0x00180fe8 */
int __fastcall sub_60181410(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00181410 */
int __fastcall sub_6018194C(int a1, _DWORD *a2);  /* 0x0018194c */
int __fastcall sub_60181AB4(int a1, _DWORD *a2);  /* 0x00181ab4 */
int __fastcall sub_60181BE0(int a1, _DWORD *a2, int a3);  /* 0x00181be0 */
int __fastcall sub_60181E90(int a1, int a2);  /* 0x00181e90 */
int __fastcall sub_60181FC0(int a1, int a2, _DWORD *a3, _DWORD *a4);  /* 0x00181fc0 */
int __fastcall sub_60182C0C(int a1, int a2, int a3, int a4);  /* 0x00182c0c */
int __fastcall sub_60182E68(int a1, unsigned int a2, unsigned int a3, unsigned int a4);  /* 0x00182e68 */
int __fastcall sub_60182ED0(int a1, unsigned int a2, unsigned int a3, unsigned int a4);  /* 0x00182ed0 */
int __fastcall sub_60182F24(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5);  /* 0x00182f24 */
int __fastcall sub_601830AC(int a1, _DWORD *a2, _DWORD *a3);  /* 0x001830ac */
int __fastcall sub_60183600(int a1, unsigned int a2, unsigned int a3);  /* 0x00183600 */
int __fastcall sub_60183698(int a1, unsigned int a2, unsigned int a3, unsigned int a4);  /* 0x00183698 */
int __fastcall sub_60183BE8(unsigned int a1);  /* 0x00183be8 */
int __fastcall sub_60183F9C(unsigned int a1);  /* 0x00183f9c */
int __fastcall sub_60184350(unsigned int a1);  /* 0x00184350 */
int __fastcall sub_60184704(unsigned int a1);  /* 0x00184704 */
int __fastcall sub_6018506C(_DWORD *a1, _DWORD *a2);  /* 0x0018506c */
int __fastcall sub_601854B8(float *a1, float *a2);  /* 0x001854b8 */
int __fastcall sub_601855F4(int a1);  /* 0x001855f4 */
int __fastcall sub_601858A8(int a1, int a2, int a3, int a4);  /* 0x001858a8 */
int __fastcall sub_60185C70(int a1, int a2);  /* 0x00185c70 */
bool __fastcall sub_60185D08(Actor *a1);  /* 0x00185d08 */
bool __fastcall sub_60185EA8(int a1);  /* 0x00185ea8 */
int __fastcall sub_60185EFC(int result, int a2);  /* 0x00185efc */
int __fastcall sub_60185F3C(float *a1);  /* 0x00185f3c */
unsigned int __fastcall sub_60185F9C(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00185f9c */
unsigned int __fastcall sub_60186008(int a1, _DWORD *a2, int a3, int a4, int a5, int a6);  /* 0x00186008 */
unsigned int __fastcall sub_60186074(int a1, int a2, float *a3);  /* 0x00186074 */
int __fastcall sub_601860F8(int a1);  /* 0x001860f8 */
void __fastcall sub_6018617C(int a1, int a2, int a3);  /* 0x0018617c */
unsigned int __fastcall sub_601862E0(int a1);  /* 0x001862e0 */
int __fastcall sub_601863B8(int a1, int a2, int a3);  /* 0x001863b8 */
int __fastcall sub_6018642C(int a1, int a2, int a3, int a4);  /* 0x0018642c */
int __fastcall sub_6018668C(int a1, int a2);  /* 0x0018668c */
int __fastcall sub_601867D0(int a1, _DWORD *a2);  /* 0x001867d0 */
unsigned int __fastcall sub_60186930(int a1, int a2, int a3);  /* 0x00186930 */
int __fastcall sub_6018697C(int a1, int a2);  /* 0x0018697c */
int __fastcall sub_60186A24(int a1);  /* 0x00186a24 */
int __fastcall sub_60186EA8(int a1);  /* 0x00186ea8 */
int __fastcall sub_60187078(int a1, int a2);  /* 0x00187078 */
int __fastcall sub_60187130(int a1, int a2);  /* 0x00187130 */
int __fastcall sub_6018D208(int a1, int a2, int a3);  /* 0x0018d208 */
int __fastcall sub_6018D27C(float *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5, int a6);  /* 0x0018d27c */
int __fastcall sub_6018D514(int a1);  /* 0x0018d514 */
unsigned int __fastcall sub_6018D7F8(int a1, int a2);  /* 0x0018d7f8 */
int __fastcall sub_6018D8A0(_DWORD *a1, int a2, unsigned int a3);  /* 0x0018d8a0 */
int __fastcall sub_6018DB70(int a1, _DWORD *a2, int a3);  /* 0x0018db70 */
int __fastcall sub_6018DC68(int a1, _DWORD *a2, const char **a3);  /* 0x0018dc68 */
int __fastcall sub_6018DD18(int a1, _DWORD *a2, int a3);  /* 0x0018dd18 */
int __fastcall sub_6018E528(int a1);  /* 0x0018e528 */
int __fastcall sub_6018EA14(int a1);  /* 0x0018ea14 */
int __fastcall sub_6018EC04(int a1, _DWORD *a2);  /* 0x0018ec04 */
int __fastcall sub_6018EDF4(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x0018edf4 */
int __fastcall sub_6018F9B0(int a1);  /* 0x0018f9b0 */
int __fastcall sub_6018FABC(_BYTE *a1);  /* 0x0018fabc */
int __fastcall sub_601903B0(int a1);  /* 0x001903b0 */
int __fastcall sub_60190428(int result);  /* 0x00190428 */
int __fastcall sub_60190644(int a1);  /* 0x00190644 */
int __fastcall sub_601906A4(_DWORD *a1);  /* 0x001906a4 */
int __fastcall sub_60190994(int a1);  /* 0x00190994 */
int __fastcall sub_60190CEC(int a1);  /* 0x00190cec */
int __fastcall sub_6019112C(int a1);  /* 0x0019112c */
int __fastcall sub_60191160(_DWORD *a1, _DWORD *a2);  /* 0x00191160 */
bool __fastcall sub_60191698(int a1);  /* 0x00191698 */
int __fastcall sub_601916F4(int a1);  /* 0x001916f4 */
int __fastcall sub_6019172C(int a1);  /* 0x0019172c */
int __fastcall sub_6019180C(int a1);  /* 0x0019180c */
int __fastcall sub_601918EC(int a1);  /* 0x001918ec */
int __fastcall sub_601919B0(_DWORD *a1, int a2);  /* 0x001919b0 */
bool __fastcall sub_60191B00(_DWORD *a1);  /* 0x00191b00 */
int __fastcall Actor_PeachCastle_flag_build(int a1);  /* 0x00191dd4 */
int __fastcall sub_601921DC(int a1);  /* 0x001921dc */
int __fastcall sub_601927EC(int result, float *a2, unsigned int *a3, _DWORD *a4);  /* 0x001927ec */
int __fastcall Actor_CourseSelectoke_build(int a1);  /* 0x00192a00 */
int __fastcall sub_60192FB8(int a1);  /* 0x00192fb8 */
int __fastcall sub_601934DC(int result);  /* 0x001934dc */
int __fastcall sub_60193518(int result);  /* 0x00193518 */
int __fastcall sub_60193558(int a1);  /* 0x00193558 */
int __fastcall sub_60193B54(int a1);  /* 0x00193b54 */
int __fastcall sub_60193BDC(int a1);  /* 0x00193bdc */
int __fastcall sub_60193D64(int a1);  /* 0x00193d64 */
int __fastcall sub_60193EE4(_DWORD *a1, int a2);  /* 0x00193ee4 */
int __fastcall sub_60194404(int a1);  /* 0x00194404 */
int __fastcall Actor_CourseSelectBowserJr_build(int a1);  /* 0x00195724 */
int __fastcall sub_60197820(_DWORD *a1);  /* 0x00197820 */
int __fastcall sub_60197CE4(int a1);  /* 0x00197ce4 */
int __fastcall sub_601981EC(int a1, int a2);  /* 0x001981ec */
int __fastcall sub_601983B4(int a1, int a2);  /* 0x001983b4 */
int __fastcall sub_60198DFC(int a1);  /* 0x00198dfc */
int __fastcall sub_601994E8(int a1);  /* 0x001994e8 */
void __fastcall sub_60199B6C(_DWORD *a1, int a2, int a3);  /* 0x00199b6c */
void __fastcall sub_60199C48(_DWORD *a1, int a2, int a3);  /* 0x00199c48 */
int __fastcall sub_60199D24(_DWORD *a1, const void **a2, const void **a3);  /* 0x00199d24 */
int __fastcall sub_60199FD4(int a1, int a2, _DWORD *a3);  /* 0x00199fd4 */
int __fastcall sub_6019A120(int a1);  /* 0x0019a120 */
int __fastcall sub_6019A214(_DWORD *a1);  /* 0x0019a214 */
int __fastcall sub_6019A628(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019a628 */
int __fastcall sub_6019A808(int a1, int a2, unsigned __int8 a3);  /* 0x0019a808 */
bool __fastcall sub_6019AB84(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019ab84 */
int __fastcall sub_6019AE00(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019ae00 */
int __fastcall sub_6019AE80(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019ae80 */
int __fastcall sub_6019AF00(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019af00 */
int __fastcall sub_6019AF60(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019af60 */
int __fastcall sub_6019B054(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b054 */
int __fastcall sub_6019B0D4(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b0d4 */
int __fastcall sub_6019B154(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b154 */
int __fastcall sub_6019B268(unsigned __int8 a1);  /* 0x0019b268 */
unsigned int __fastcall sub_6019B348(int a1, int a2);  /* 0x0019b348 */
int __fastcall sub_6019B574(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b574 */
int __fastcall sub_6019B64C(float *a1, float *a2);  /* 0x0019b64c */
unsigned int __fastcall sub_6019B6EC(int a1);  /* 0x0019b6ec */
int __fastcall sub_6019B73C(int a1, int a2);  /* 0x0019b73c */
int __fastcall sub_6019B824(int a1);  /* 0x0019b824 */
int __fastcall sub_6019B874(int a1, int a2);  /* 0x0019b874 */
int __fastcall Actor_CSbone_kosuta_build(int a1);  /* 0x0019bb74 */
int __fastcall sub_6019CB4C(_DWORD *a1);  /* 0x0019cb4c */
signed int __fastcall sub_6019D04C(int a1);  /* 0x0019d04c */
unsigned int __fastcall sub_6019D6B4(int a1);  /* 0x0019d6b4 */
int __fastcall sub_6019D834(int a1);  /* 0x0019d834 */
int __fastcall sub_6019D8CC(int a1);  /* 0x0019d8cc */
int __fastcall sub_6019D9FC(int a1);  /* 0x0019d9fc */
unsigned int __fastcall sub_6019DE18(int a1);  /* 0x0019de18 */
int __fastcall sub_6019E658(int a1);  /* 0x0019e658 */
int __fastcall sub_6019E7D8(int a1);  /* 0x0019e7d8 */
int __fastcall sub_6019E9D4(int a1);  /* 0x0019e9d4 */
int __fastcall sub_6019EBE8(int a1);  /* 0x0019ebe8 */
int __fastcall sub_6019ED68(int a1);  /* 0x0019ed68 */
int __fastcall sub_6019F1BC(int a1, int a2, int a3);  /* 0x0019f1bc */
int __fastcall sub_6019F2F0(int a1);  /* 0x0019f2f0 */
int __fastcall sub_6019F708(int a1);  /* 0x0019f708 */
int __fastcall sub_601A0134(int a1);  /* 0x001a0134 */
int __fastcall sub_601A0204(int a1, int a2);  /* 0x001a0204 */
int __fastcall sub_601A02B0(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x001a02b0 */
int __fastcall sub_601A02F8(int a1, unsigned int a2, int a3);  /* 0x001a02f8 */
int __fastcall sub_601A044C(int a1);  /* 0x001a044c */
int __fastcall sub_601A0554(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0554 */
int __fastcall sub_601A0878(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0878 */
int __fastcall sub_601A0B9C(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0b9c */
int __fastcall sub_601A0EC0(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0ec0 */
int __fastcall sub_601A11E4(int a1, unsigned int a2, const char **a3, int a4);  /* 0x001a11e4 */
int __fastcall sub_601A12E0(int a1);  /* 0x001a12e0 */
int __fastcall sub_601A14F0(int a1, unsigned int a2, int a3, int a4, _QWORD *a5);  /* 0x001a14f0 */
int __fastcall sub_601A172C(int a1, unsigned int a2);  /* 0x001a172c */
int __fastcall sub_601A1890(int a1);  /* 0x001a1890 */
int __fastcall sub_601A2334(int a1);  /* 0x001a2334 */
int __fastcall sub_601A299C(int a1);  /* 0x001a299c */
int __fastcall sub_601A29FC(int a1);  /* 0x001a29fc */
int __fastcall sub_601A2AEC(int a1);  /* 0x001a2aec */
int __fastcall sub_601A2CD8(int a1, int a2);  /* 0x001a2cd8 */
int __fastcall sub_601A2D98(int a1, int a2);  /* 0x001a2d98 */
int __fastcall sub_601A2E00(int a1, _DWORD *a2);  /* 0x001a2e00 */
int __fastcall sub_601A2F94(int a1);  /* 0x001a2f94 */
int __fastcall sub_601A3024(int a1);  /* 0x001a3024 */
int __fastcall sub_601A33F8(int a1, unsigned int a2);  /* 0x001a33f8 */
int __fastcall sub_601A3B4C(int a1, int a2, unsigned int a3, unsigned int a4);  /* 0x001a3b4c */
int __fastcall sub_601A3C64(int a1);  /* 0x001a3c64 */
int __fastcall sub_601A446C(int a1);  /* 0x001a446c */
int __fastcall sub_601A450C(int result);  /* 0x001a450c */
int __fastcall sub_601A47DC(int a1, int a2, int a3, int a4);  /* 0x001a47dc */
int __fastcall Actor_CourseSelect_Miibarun_build(int a1);  /* 0x001a4f88 */
int __fastcall sub_601A5468(int a1);  /* 0x001a5468 */
int __fastcall roll_tate_ref(int a1);  /* 0x001a5ef8 */
int __fastcall sub_601A68FC(_DWORD *a1, int a2);  /* 0x001a68fc */
int __fastcall sub_601A6E78(int a1);  /* 0x001a6e78 */
int __fastcall Actor_CourseSelectopuninguKamek_build(int a1);  /* 0x001a76f8 */
int __fastcall sub_601A7C90(int a1);  /* 0x001a7c90 */
int __fastcall sub_601A8F98(int a1);  /* 0x001a8f98 */
int __fastcall Actor_CSPiranha_build(int a1);  /* 0x001a96e0 */
int __fastcall sub_601A9E34(int a1);  /* 0x001a9e34 */
int __fastcall sub_601AA83C(int a1);  /* 0x001aa83c */
int __fastcall sub_601AAE7C(_DWORD *a1, int a2);  /* 0x001aae7c */
int __fastcall sub_601AB238(_DWORD *a1);  /* 0x001ab238 */
int __fastcall Actor_CourseSelectPeach_build(int a1);  /* 0x001ab5b0 */
int __fastcall sub_601AB740(int a1);  /* 0x001ab740 */
int __fastcall sub_601ABAD4(int a1);  /* 0x001abad4 */
int __fastcall sub_601ABC5C(int a1);  /* 0x001abc5c */
int __fastcall Actor_PeachCastle_1door_build(int a1);  /* 0x001ac3d8 */
int __fastcall cobPeachGates1st_open_ref(int a1);  /* 0x001ac414 */
int __fastcall sub_601AC72C(int a1);  /* 0x001ac72c */
int __fastcall cobPeachGates1st_ref(int a1);  /* 0x001ac908 */
int __fastcall Actor_PeachCastle_2door_build(int a1);  /* 0x001ace04 */
int __fastcall cobPeachGates2nd_open_ref(int a1);  /* 0x001ace40 */
int __fastcall sub_601AD23C(int a1);  /* 0x001ad23c */
int __fastcall cobPeachGates2nd_ref(int a1);  /* 0x001ad418 */
int __fastcall Actor_CSpentaro_build(_DWORD *a1);  /* 0x001ade30 */
int __fastcall sub_601B0098(_DWORD *a1);  /* 0x001b0098 */
int __fastcall sub_601B03A8(int a1);  /* 0x001b03a8 */
int __fastcall sub_601B0AB8(int a1);  /* 0x001b0ab8 */
int __fastcall sub_601B0B88(int a1);  /* 0x001b0b88 */
int __fastcall sub_601B0D38(int a1);  /* 0x001b0d38 */
int __fastcall sub_601B0F0C(int a1);  /* 0x001b0f0c */
int __fastcall sub_601B126C(int a1, unsigned int a2);  /* 0x001b126c */
int __fastcall sub_601B13BC(int a1, int a2);  /* 0x001b13bc */
int __fastcall sub_601B16CC(int a1);  /* 0x001b16cc */
int __fastcall sub_601B1FA4(int a1, int a2);  /* 0x001b1fa4 */
int __fastcall sub_601B28C4(_DWORD *a1);  /* 0x001b28c4 */
int __fastcall sub_601B2A1C(int a1);  /* 0x001b2a1c */
int __fastcall sub_601B2CB8(int a1);  /* 0x001b2cb8 */
int __fastcall sub_601B2EF0(int a1, int *a2);  /* 0x001b2ef0 */
int __fastcall sub_601B32F0(_DWORD *a1);  /* 0x001b32f0 */
int __fastcall sub_601B3F54(int a1);  /* 0x001b3f54 */
int __fastcall sub_601B4194(int a1);  /* 0x001b4194 */
int __fastcall sub_601B4294(_DWORD *a1);  /* 0x001b4294 */
int __fastcall sub_601B4548(int a1, int a2, int a3);  /* 0x001b4548 */
int __fastcall sub_601B4788(int a1, unsigned int a2);  /* 0x001b4788 */
int __fastcall sub_601B488C(int a1, int a2);  /* 0x001b488c */
int __fastcall sub_601B4B9C(int a1, float *a2);  /* 0x001b4b9c */
int __fastcall sub_601B5110(_DWORD *a1, int a2, int a3, int a4);  /* 0x001b5110 */
int __fastcall sub_601B51B8(int a1);  /* 0x001b51b8 */
bool __fastcall sub_601B553C(int a1);  /* 0x001b553c */
int __fastcall sub_601B5850(int result, float *a2, _DWORD *a3, _DWORD *a4);  /* 0x001b5850 */
int __fastcall sub_601B59CC(float *a1, float *a2);  /* 0x001b59cc */
int __fastcall sub_601B69F4(int a1, int a2);  /* 0x001b69f4 */
int __fastcall sub_601B7E90(_DWORD *a1);  /* 0x001b7e90 */
int __fastcall sub_601B83F8(int a1, int a2);  /* 0x001b83f8 */
unsigned int __fastcall sub_601B86B0(_DWORD *a1);  /* 0x001b86b0 */
int __fastcall sub_601B8BE8(int a1);  /* 0x001b8be8 */
int __fastcall sub_601B9108(float *a1, float *a2, float *a3);  /* 0x001b9108 */
int __fastcall sub_601B92AC(int a1);  /* 0x001b92ac */
int __fastcall sub_601B95B0(int a1);  /* 0x001b95b0 */
int __fastcall sub_601BA0F8(int a1, int a2);  /* 0x001ba0f8 */
int __fastcall sub_601BA56C(int a1, int a2, int a3);  /* 0x001ba56c */
int __fastcall sub_601BAC64(int a1, float *a2, float *a3, float *a4);  /* 0x001bac64 */
int __fastcall sub_601BBC60(_DWORD *a1);  /* 0x001bbc60 */
int __fastcall sub_601BC1DC(int a1, int *a2);  /* 0x001bc1dc */
unsigned int __fastcall sub_601BC2F8(int a1);  /* 0x001bc2f8 */
int __fastcall sub_601BC868(int a1);  /* 0x001bc868 */
int __fastcall sub_601BCD10(int a1);  /* 0x001bcd10 */
int __fastcall sub_601BCEF4(int a1, int a2, int *a3);  /* 0x001bcef4 */
int __fastcall sub_601BE520(int a1);  /* 0x001be520 */
int __fastcall sub_601C0478(int a1);  /* 0x001c0478 */
int __fastcall sub_601C062C(_DWORD *a1);  /* 0x001c062c */
unsigned int __fastcall sub_601C0908(_DWORD *a1);  /* 0x001c0908 */
unsigned int __fastcall sub_601C09F0(_DWORD *a1);  /* 0x001c09f0 */
unsigned int __fastcall sub_601C0ABC(_DWORD *a1);  /* 0x001c0abc */
int __fastcall sub_601C0C88(int *a1);  /* 0x001c0c88 */
int __fastcall sub_601C0E8C(int a1);  /* 0x001c0e8c */
int __fastcall sub_601C100C(_DWORD *a1);  /* 0x001c100c */
int __fastcall sub_601C1174(_DWORD *a1);  /* 0x001c1174 */
int __fastcall sub_601C1228(int a1);  /* 0x001c1228 */
int __fastcall sub_601C16F0(int a1);  /* 0x001c16f0 */
int __fastcall sub_601C182C(_DWORD *a1);  /* 0x001c182c */
int __fastcall sub_601C19BC(_DWORD *a1);  /* 0x001c19bc */
int __fastcall sub_601C1AAC(int a1);  /* 0x001c1aac */
int __fastcall sub_601C1CE0(int a1);  /* 0x001c1ce0 */
int __fastcall sub_601C1EB4(int a1);  /* 0x001c1eb4 */
int __fastcall sub_601C22D4(int a1);  /* 0x001c22d4 */
int __fastcall sub_601C2634(_DWORD *a1);  /* 0x001c2634 */
int __fastcall sub_601C2A9C(int a1, int a2);  /* 0x001c2a9c */
int __fastcall sub_601C2BE0(int a1, int a2);  /* 0x001c2be0 */
int __fastcall sub_601C2CF8(_DWORD *a1);  /* 0x001c2cf8 */
unsigned int __fastcall sub_601C2E80(_DWORD *a1);  /* 0x001c2e80 */
int __fastcall sub_601C3B14(int a1);  /* 0x001c3b14 */
int __fastcall sub_601C3E34(_DWORD *a1);  /* 0x001c3e34 */
int __fastcall sub_601C3FC0(int a1, unsigned __int8 *a2);  /* 0x001c3fc0 */
int __fastcall sub_601C4110(float *a1, float *a2, int a3);  /* 0x001c4110 */
int __fastcall sub_601C42A8(_DWORD *a1);  /* 0x001c42a8 */
bool __fastcall sub_601C4404(_DWORD *a1);  /* 0x001c4404 */
int __fastcall sub_601C4708(int a1, int a2, int a3);  /* 0x001c4708 */
bool __fastcall sub_601C4774(int a1);  /* 0x001c4774 */
unsigned int __fastcall sub_601C4814(int a1, float *a2, int a3, int a4);  /* 0x001c4814 */
int __fastcall sub_601C4960(int a1, float *a2, int a3, int a4);  /* 0x001c4960 */
int __fastcall sub_601C4A1C(int a1, float *a2, int a3, int a4, int a5);  /* 0x001c4a1c */
int __fastcall sub_601C4B8C(int a1, float *a2, float *a3, int a4);  /* 0x001c4b8c */
int __fastcall sub_601C4CFC(int a1);  /* 0x001c4cfc */
int __fastcall sub_601C5354(_DWORD *a1);  /* 0x001c5354 */
int __fastcall sub_601C543C(_DWORD *a1);  /* 0x001c543c */
int __fastcall sub_601C5484(int a1);  /* 0x001c5484 */
int __fastcall sub_601C5718(int a1);  /* 0x001c5718 */
int __fastcall sub_601C581C(int a1);  /* 0x001c581c */
int __fastcall sub_601C5900(int a1);  /* 0x001c5900 */
int __fastcall sub_601C59E4(_DWORD *a1);  /* 0x001c59e4 */
int __fastcall sub_601C5B74(int a1);  /* 0x001c5b74 */
int __fastcall sub_601C5EEC(_DWORD *a1);  /* 0x001c5eec */
int __fastcall sub_601C5F50(_DWORD *a1);  /* 0x001c5f50 */
int __fastcall sub_601C6044(int a1, _DWORD *a2);  /* 0x001c6044 */
signed int __fastcall sub_601C6268(int a1);  /* 0x001c6268 */
int __fastcall sub_601C6708(int a1, int a2);  /* 0x001c6708 */
int __fastcall sub_601C676C(int a1, int a2, int a3);  /* 0x001c676c */
int __fastcall sub_601C68A8(int a1, int a2, int a3);  /* 0x001c68a8 */
int __fastcall sub_601C697C(int a1, int a2, int a3);  /* 0x001c697c */
int __fastcall sub_601C69B0(int result);  /* 0x001c69b0 */
int __fastcall sub_601C69E4(int a1);  /* 0x001c69e4 */
bool __fastcall sub_601C6AA0(int a1);  /* 0x001c6aa0 */
int __fastcall sub_601C6C14(_DWORD *a1, int a2, int a3);  /* 0x001c6c14 */
int __fastcall sub_601C6D90(int a1, _DWORD *a2);  /* 0x001c6d90 */
int __fastcall sub_601C6F7C(int a1);  /* 0x001c6f7c */
float __fastcall sub_601C7334(int a1);  /* 0x001c7334 */
int __fastcall sub_601C77CC(_DWORD *a1);  /* 0x001c77cc */
unsigned int __fastcall sub_601C7C84(_DWORD *a1);  /* 0x001c7c84 */
int __fastcall sub_601C7D78(int a1);  /* 0x001c7d78 */
unsigned int __fastcall sub_601C7E04(_DWORD *a1);  /* 0x001c7e04 */
int __fastcall sub_601C7F14(_DWORD *a1);  /* 0x001c7f14 */
int __fastcall sub_601C7FD4(int a1);  /* 0x001c7fd4 */
int __fastcall sub_601C8120(int a1);  /* 0x001c8120 */
int __fastcall sub_601C8380(int a1);  /* 0x001c8380 */
int __fastcall sub_601C8640(_DWORD *a1);  /* 0x001c8640 */
int __fastcall sub_601C86D0(_DWORD *a1);  /* 0x001c86d0 */
int __fastcall sub_601C87E0(int a1);  /* 0x001c87e0 */
int __fastcall sub_601C90C8(int a1);  /* 0x001c90c8 */
int __fastcall sub_601C91C0(int a1);  /* 0x001c91c0 */
int __fastcall sub_601C93D8(int a1, int a2);  /* 0x001c93d8 */
int __fastcall sub_601CCD14(int a1, int a2);  /* 0x001ccd14 */
int __fastcall sub_601CCD78(int *a1);  /* 0x001ccd78 */
int __fastcall sub_601CCFA4(_DWORD *a1);  /* 0x001ccfa4 */
int __fastcall sub_601CD0DC(_DWORD *a1);  /* 0x001cd0dc */
int __fastcall sub_601CD204(_DWORD *a1);  /* 0x001cd204 */
int __fastcall sub_601CD450(_DWORD *a1);  /* 0x001cd450 */
int __fastcall sub_601CD574(int a1);  /* 0x001cd574 */
int __fastcall sub_601CD8F8(int a1);  /* 0x001cd8f8 */
int __fastcall sub_601CE14C(int a1);  /* 0x001ce14c */
int __fastcall sub_601CE270(_DWORD *a1);  /* 0x001ce270 */
int __fastcall sub_601CE37C(int a1);  /* 0x001ce37c */
int __fastcall sub_601CE558(int a1);  /* 0x001ce558 */
int __fastcall sub_601CE978(int a1, int a2, int a3);  /* 0x001ce978 */
int __fastcall sub_601CEAA8(_DWORD *a1);  /* 0x001ceaa8 */
unsigned int __fastcall sub_601CEC00(_DWORD *a1);  /* 0x001cec00 */
int __fastcall sub_601CED18(int a1, int a2);  /* 0x001ced18 */
int __fastcall sub_601CED7C(int a1, int a2);  /* 0x001ced7c */
int __fastcall sub_601CEEE4(int a1, _DWORD *a2);  /* 0x001ceee4 */
int __fastcall sub_601CF2A4(_DWORD *a1);  /* 0x001cf2a4 */
int __fastcall sub_601CF80C(int a1);  /* 0x001cf80c */
int __fastcall sub_601CF9C0(int a1);  /* 0x001cf9c0 */
int __fastcall sub_601CFA84(int a1);  /* 0x001cfa84 */
int __fastcall sub_601CFB8C(int a1, _DWORD *a2, int a3);  /* 0x001cfb8c */
int __fastcall sub_601CFCDC(int a1, int a2);  /* 0x001cfcdc */
bool __fastcall sub_601CFD30(int a1, int a2);  /* 0x001cfd30 */
bool __fastcall sub_601CFD88(int a1, int a2);  /* 0x001cfd88 */
int __fastcall sub_601CFDE0(int a1);  /* 0x001cfde0 */
int __fastcall sub_601CFE3C(int a1);  /* 0x001cfe3c */
int __fastcall sub_601CFF2C(int a1, int a2);  /* 0x001cff2c */
int __fastcall sub_601CFFEC(int a1, int a2);  /* 0x001cffec */
int __fastcall sub_601D013C(int a1);  /* 0x001d013c */
int __fastcall sub_601D0230(int a1, int a2, int a3);  /* 0x001d0230 */
int __fastcall sub_601D0330(unsigned int *a1, int a2);  /* 0x001d0330 */
int __fastcall sub_601D05D4(int a1);  /* 0x001d05d4 */
int __fastcall sub_601D06BC(int a1);  /* 0x001d06bc */
int __fastcall sub_601D07C8(int a1);  /* 0x001d07c8 */
int __fastcall sub_601D0948(int a1);  /* 0x001d0948 */
int __fastcall sub_601D0B7C(int a1);  /* 0x001d0b7c */
int __fastcall sub_601D0DC0(int a1, int a2);  /* 0x001d0dc0 */
int __fastcall sub_601D10C8(int a1);  /* 0x001d10c8 */
bool __fastcall sub_601D1248(int a1, int a2, _DWORD *a3);  /* 0x001d1248 */
int __fastcall sub_601D12C0(int a1, int a2);  /* 0x001d12c0 */
int __fastcall sub_601D1400(int a1, int a2);  /* 0x001d1400 */
int __fastcall sub_601D1724(int a1);  /* 0x001d1724 */
int __fastcall sub_601D1C5C(int a1, int a2);  /* 0x001d1c5c */
int __fastcall sub_601D1E48(int a1);  /* 0x001d1e48 */
int __fastcall sub_601D22F8(int a1);  /* 0x001d22f8 */
int __fastcall sub_601D27A8(int a1, int a2);  /* 0x001d27a8 */
int __fastcall sub_601D3B8C(int a1);  /* 0x001d3b8c */
int __fastcall sub_601D413C(_DWORD *a1);  /* 0x001d413c */
int __fastcall sub_601D42EC(int a1);  /* 0x001d42ec */
unsigned int __fastcall sub_601D43F8(int a1);  /* 0x001d43f8 */
int __fastcall sub_601D462C(int a1, int a2);  /* 0x001d462c */
int __fastcall sub_601D4E6C(int a1);  /* 0x001d4e6c */
int __fastcall sub_601D532C(int a1);  /* 0x001d532c */
void __fastcall sub_601D54BC(_DWORD *a1);  /* 0x001d54bc */
int __fastcall sub_601D55A4(int a1, int a2, int a3, _DWORD *a4);  /* 0x001d55a4 */
int __fastcall sub_601D63C4(int a1);  /* 0x001d63c4 */
int __fastcall sub_601D6648(_DWORD *a1, int a2);  /* 0x001d6648 */
int __fastcall sub_601D6754(_DWORD *a1);  /* 0x001d6754 */
int __fastcall sub_601D75F4(int a1);  /* 0x001d75f4 */
int __fastcall sub_601D7EF4(_DWORD *a1, int *a2, float *a3, int a4);  /* 0x001d7ef4 */
int __fastcall sub_601D8094(_DWORD *a1);  /* 0x001d8094 */
int __fastcall sub_601D8284(int a1);  /* 0x001d8284 */
int __fastcall sub_601D844C(int a1);  /* 0x001d844c */
int __fastcall sub_601D84D4(int a1, int a2, int a3, _DWORD *a4);  /* 0x001d84d4 */
bool __fastcall sub_601D86E4(int a1, int a2, _BOOL4 a3);  /* 0x001d86e4 */
int __fastcall sub_601D8938(int a1, int a2, int a3);  /* 0x001d8938 */
int __fastcall sub_601D8AE4(_DWORD *a1, int *a2, int a3);  /* 0x001d8ae4 */
unsigned int __fastcall sub_601D8C88(int a1, int a2, int a3);  /* 0x001d8c88 */
int __fastcall sub_601D8D24(int a1);  /* 0x001d8d24 */
int __fastcall sub_601D8D88(int a1);  /* 0x001d8d88 */
int __fastcall sub_601D8DEC(int a1);  /* 0x001d8dec */
int __fastcall sub_601D956C(_DWORD *a1);  /* 0x001d956c */
int __fastcall sub_601D9AEC(int a1, int a2);  /* 0x001d9aec */
int __fastcall sub_601D9B20(int a1);  /* 0x001d9b20 */
int __fastcall sub_601D9B54(int result);  /* 0x001d9b54 */
int __fastcall sub_601D9B88(int a1);  /* 0x001d9b88 */
bool __fastcall sub_601D9D1C(_DWORD *a1);  /* 0x001d9d1c */
int __fastcall sub_601D9D54(_DWORD *a1);  /* 0x001d9d54 */
bool __fastcall sub_601D9D84(_DWORD *a1);  /* 0x001d9d84 */
bool __fastcall sub_601D9E28(_DWORD *a1);  /* 0x001d9e28 */
bool __fastcall sub_601D9E90(_DWORD *a1);  /* 0x001d9e90 */
bool __fastcall sub_601D9EC8(_DWORD *a1);  /* 0x001d9ec8 */
int __fastcall sub_601D9F00(_DWORD *a1, int a2);  /* 0x001d9f00 */
bool __fastcall sub_601D9F8C(_DWORD *a1);  /* 0x001d9f8c */
bool __fastcall sub_601D9FC4(_DWORD *a1);  /* 0x001d9fc4 */
bool __fastcall sub_601DA01C(_DWORD *a1);  /* 0x001da01c */
bool __fastcall sub_601DA074(_DWORD *a1);  /* 0x001da074 */
bool __fastcall sub_601DA0DC(_DWORD *a1);  /* 0x001da0dc */
bool __fastcall sub_601DA114(_DWORD *a1);  /* 0x001da114 */
bool __fastcall sub_601DA1D8(_DWORD *a1);  /* 0x001da1d8 */
bool __fastcall sub_601DA210(_DWORD *a1);  /* 0x001da210 */
bool __fastcall sub_601DA248(_DWORD *a1);  /* 0x001da248 */
bool __fastcall sub_601DA280(_DWORD *a1);  /* 0x001da280 */
bool __fastcall sub_601DA2B8(_DWORD *a1);  /* 0x001da2b8 */
int __fastcall sub_601DA2F0(_DWORD *a1);  /* 0x001da2f0 */
bool __fastcall sub_601DA484(_DWORD *a1);  /* 0x001da484 */
bool __fastcall sub_601DA4BC(_DWORD *a1);  /* 0x001da4bc */
bool __fastcall sub_601DA4F4(_DWORD *a1);  /* 0x001da4f4 */
bool __fastcall sub_601DA52C(_DWORD *a1);  /* 0x001da52c */
bool __fastcall sub_601DA5B8(_DWORD *a1);  /* 0x001da5b8 */
int __fastcall sub_601DA5F0(_DWORD *a1);  /* 0x001da5f0 */
bool __fastcall sub_601DA650(_DWORD *a1);  /* 0x001da650 */
bool __fastcall sub_601DA6F0(unsigned int *a1, _DWORD *a2);  /* 0x001da6f0 */
int __fastcall sub_601DA824(_DWORD *a1);  /* 0x001da824 */
bool __fastcall sub_601DA8A8(_DWORD *a1);  /* 0x001da8a8 */
bool __fastcall sub_601DA8E0(_DWORD *a1);  /* 0x001da8e0 */
int __fastcall sub_601DA918(_DWORD *a1);  /* 0x001da918 */
int __fastcall sub_601DA98C(int a1);  /* 0x001da98c */
bool __fastcall sub_601DAABC(_DWORD *a1);  /* 0x001daabc */
bool __fastcall sub_601DAAF4(_DWORD *a1);  /* 0x001daaf4 */
bool __fastcall sub_601DAB2C(_DWORD *a1);  /* 0x001dab2c */
bool __fastcall sub_601DABF0(_DWORD *a1);  /* 0x001dabf0 */
bool __fastcall sub_601DAC28(_DWORD *a1);  /* 0x001dac28 */
bool __fastcall sub_601DACFC(_DWORD *a1);  /* 0x001dacfc */
bool __fastcall sub_601DAD34(_DWORD *a1);  /* 0x001dad34 */
bool __fastcall sub_601DAD6C(_DWORD *a1);  /* 0x001dad6c */
bool __fastcall sub_601DADA4(_DWORD *a1);  /* 0x001dada4 */
bool __fastcall sub_601DADDC(_DWORD *a1);  /* 0x001daddc */
bool __fastcall sub_601DAE14(_DWORD *a1);  /* 0x001dae14 */
bool __fastcall sub_601DAE4C(_DWORD *a1, int a2);  /* 0x001dae4c */
int __fastcall sub_601DAE88(_DWORD *a1);  /* 0x001dae88 */
int __fastcall sub_601DAEF0(_DWORD *a1);  /* 0x001daef0 */
int __fastcall sub_601DAF58(int *a1, unsigned int a2);  /* 0x001daf58 */
int __fastcall sub_601DBB64(int32x4_t *a1);  /* 0x001dbb64 */
int __fastcall sub_601DFE2C(int a1);  /* 0x001dfe2c */
int __fastcall sub_601DFF20(int result, int a2, int a3, int a4);  /* 0x001dff20 */
int __fastcall sub_601E0070(_DWORD *a1, _DWORD *a2);  /* 0x001e0070 */
int __fastcall sub_601E0194(_DWORD *a1);  /* 0x001e0194 */
int __fastcall sub_601E0240(_DWORD *a1, _DWORD *a2);  /* 0x001e0240 */
int __fastcall sub_601E028C(_DWORD *a1);  /* 0x001e028c */
int __fastcall sub_601E02C4(_DWORD *a1);  /* 0x001e02c4 */
int __fastcall sub_601E02F8(_DWORD *a1);  /* 0x001e02f8 */
int __fastcall sub_601E032C(_DWORD *a1, int a2, _DWORD *a3);  /* 0x001e032c */
int __fastcall sub_601E039C(_DWORD *a1, int a2);  /* 0x001e039c */
int __fastcall sub_601E04F4(_DWORD *a1, _DWORD *a2);  /* 0x001e04f4 */
int __fastcall sub_601E0644(_DWORD *a1);  /* 0x001e0644 */
int __fastcall sub_601E06F0(int a1, _DWORD *a2);  /* 0x001e06f0 */
int __fastcall sub_601E08C8(int *a1);  /* 0x001e08c8 */
int __fastcall sub_601E0954(int *a1);  /* 0x001e0954 */
int __fastcall sub_601E0A30(_DWORD *a1);  /* 0x001e0a30 */
int __fastcall sub_601E0AB8(_DWORD *a1);  /* 0x001e0ab8 */
int __fastcall sub_601E0C28(int a1);  /* 0x001e0c28 */
int __fastcall sub_601E0E04(_DWORD *a1, _DWORD *a2);  /* 0x001e0e04 */
int __fastcall sub_601E1000(int a1, _DWORD *a2);  /* 0x001e1000 */
bool __fastcall sub_601E1158(_DWORD *a1);  /* 0x001e1158 */
int __fastcall sub_601E1330(_DWORD *a1, unsigned int a2);  /* 0x001e1330 */
int __fastcall sub_601E1398(_DWORD *a1);  /* 0x001e1398 */
int __fastcall sub_601E14F8(_DWORD *a1, int a2, int *a3);  /* 0x001e14f8 */
int __fastcall sub_601E17C0(_DWORD *a1, int a2, _DWORD *a3, int a4);  /* 0x001e17c0 */
int __fastcall sub_601E1A20(_DWORD *a1, _DWORD *a2, int *a3);  /* 0x001e1a20 */
int __fastcall sub_601E1AB0(int a1);  /* 0x001e1ab0 */
bool __fastcall sub_601E1B80(int a1);  /* 0x001e1b80 */
int __fastcall sub_601E1CF4(int a1);  /* 0x001e1cf4 */
int __fastcall sub_601E27B4(int a1);  /* 0x001e27b4 */
int __fastcall sub_601E2910(int a1);  /* 0x001e2910 */
int __fastcall SE_PLY_ref_2_helper_helper_1E2F00(int a1, unsigned int a2);  /* 0x001e2f00 */
int __fastcall sub_601E2F20(int a1);  /* 0x001e2f20 */
int __fastcall sub_601E322C(_DWORD *a1, unsigned int a2);  /* 0x001e322c */
int __fastcall sub_601E4A74(int result, unsigned int a2, unsigned int a3, int a4);  /* 0x001e4a74 */
int __fastcall sub_601E4BD4(int a1, int a2, int a3, int a4, int a5);  /* 0x001e4bd4 */
int __fastcall sub_601E4C88(_DWORD *a1, int a2, _DWORD *a3);  /* 0x001e4c88 */
int __fastcall sub_601E4DEC(int a1, int a2);  /* 0x001e4dec */
int __fastcall sub_601E4EA4(int a1, int a2, int a3, int a4, int a5);  /* 0x001e4ea4 */
int __fastcall sub_601E4F7C(int a1, int a2);  /* 0x001e4f7c */
int __fastcall sub_601E4FB4(int a1, int a2);  /* 0x001e4fb4 */
int __fastcall sub_601E5344(int a1);  /* 0x001e5344 */
int __fastcall sub_601E5468(int a1);  /* 0x001e5468 */
int __fastcall sub_601E5AB0(int a1);  /* 0x001e5ab0 */
int __fastcall sub_601E6414(int a1);  /* 0x001e6414 */
int __fastcall sub_601E6C04(int a1);  /* 0x001e6c04 */
int __fastcall sub_601E6EA8(_BYTE *a1);  /* 0x001e6ea8 */
int __fastcall sub_601E73A4(int a1);  /* 0x001e73a4 */
int __fastcall sub_601E74A4(int a1);  /* 0x001e74a4 */
int __fastcall sub_601E81AC(int a1, int *a2, int a3);  /* 0x001e81ac */
int __fastcall sub_601E8A94(int a1, int a2);  /* 0x001e8a94 */
int __fastcall sub_601E9B18(int a1, int a2);  /* 0x001e9b18 */
int __fastcall sub_601EA3C4(int a1, int a2);  /* 0x001ea3c4 */
bool __fastcall sub_601EAA9C(int a1, int a2);  /* 0x001eaa9c */
int __fastcall sub_601EAB4C(int a1, int a2);  /* 0x001eab4c */
bool __fastcall sub_601EABD0(int a1);  /* 0x001eabd0 */
int __fastcall Actor_CSshadouaikon_build(int a1);  /* 0x001eaf00 */
int __fastcall balloon_shadowkun_ref(int a1);  /* 0x001eaf3c */
int __fastcall Actor_shadoukun_build(int a1);  /* 0x001ec418 */
int __fastcall sub_601EC704(int a1);  /* 0x001ec704 */
int __fastcall sub_601ECA7C(_DWORD *a1, int *a2);  /* 0x001eca7c */
int __fastcall sub_601ECD14(_DWORD *a1, int a2);  /* 0x001ecd14 */
int __fastcall sub_601F0180(int a1, _DWORD *a2);  /* 0x001f0180 */
int __fastcall sub_601F0304(int a1);  /* 0x001f0304 */
int __fastcall sub_601F03B8(int a1);  /* 0x001f03b8 */
int __fastcall sub_601F0850(_DWORD *a1);  /* 0x001f0850 */
int __fastcall sub_601F115C(int a1);  /* 0x001f115c */
int __fastcall sub_601F1E10(int a1);  /* 0x001f1e10 */
int __fastcall sub_601F2688(int a1, int a2, int a3, int a4);  /* 0x001f2688 */
int __fastcall sub_601F28F8(int a1, int a2);  /* 0x001f28f8 */
int __fastcall Actor_CourseSelectairship_BowserJr_build(_DWORD *a1);  /* 0x001f464c */
int __fastcall W7_cs_appear00_ref(int a1);  /* 0x001f4eb0 */
int __fastcall sub_601F664C(int a1, _DWORD *a2);  /* 0x001f664c */
int __fastcall sub_601F74B4(int a1);  /* 0x001f74b4 */
int __fastcall W7_cs_wait00_ref(int a1);  /* 0x001f77ec */
int __fastcall sub_601F8174(int a1);  /* 0x001f8174 */
int __fastcall Actor_CourseSelectairship_Lemmy_build(_DWORD *a1);  /* 0x001f8ebc */
int __fastcall sub_601FA238(int a1, _DWORD *a2, int a3, int a4);  /* 0x001fa238 */
bool __fastcall sub_601FA2CC(int a1, int a2);  /* 0x001fa2cc */
int __fastcall sub_601FA428(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4);  /* 0x001fa428 */
int __fastcall Actor_CSW9sutageto_build(int a1);  /* 0x001fb3b4 */
int __fastcall sub_601FB64C(int a1);  /* 0x001fb64c */
int __fastcall sub_601FBE34(int a1);  /* 0x001fbe34 */
int __fastcall Actor_flag_build(int a1);  /* 0x001fc198 */
int __fastcall sub_601FC414(int a1);  /* 0x001fc414 */
int __fastcall Actor_CourseSelectsuichiA_build(int a1);  /* 0x001fc918 */
int __fastcall sub_601FCB08(int a1);  /* 0x001fcb08 */
int __fastcall Actor_CourseSelectsuichiB_build(int a1);  /* 0x001fcfe4 */
int __fastcall sub_601FD1D4(int a1);  /* 0x001fd1d4 */
int __fastcall CourseSelectTask_ctor(int a1, int a2);  /* 0x001fd6e4 */
void __fastcall sub_601FD9E0(sead::CalculateTask *a1);  /* 0x001fd9e0 */
int __fastcall sub_601FEE28(int a1);  /* 0x001fee28 */
int __fastcall sub_601FF05C(int a1, char a2);  /* 0x001ff05c */
int __fastcall sub_601FF340(int a1, unsigned int a2);  /* 0x001ff340 */
int __fastcall sub_601FF878(int a1, int a2, int a3, int a4);  /* 0x001ff878 */

/* ---- actors_a.c ---- */
int __fastcall Actor_CourseSelectBoo_build(int a1);  /* 0x00200210 */
int __fastcall sub_60200954(int a1);  /* 0x00200954 */
int __fastcall Actor_CSpuku_build(_DWORD *a1);  /* 0x00201cb4 */
int __fastcall sub_60203138(int a1);  /* 0x00203138 */
int __fastcall sub_6020339C(int a1);  /* 0x0020339c */
int __fastcall sub_60203F40(int a1);  /* 0x00203f40 */
int __fastcall sub_60203FF0(int *a1);  /* 0x00203ff0 */
int __fastcall sub_602040E4(_WORD *a1);  /* 0x002040e4 */
int __fastcall sub_60204314(int a1, unsigned int a2);  /* 0x00204314 */
int __fastcall Actor_CSo_build(int a1);  /* 0x002046f8 */
int __fastcall sub_60204858(int a1);  /* 0x00204858 */
int __fastcall Actor_CourseSelectfort_build(int a1);  /* 0x00204eec */
int __fastcall sub_60205728(int a1);  /* 0x00205728 */
int __fastcall Actor_CourseSelectfort_bosu_build(int a1);  /* 0x00205e28 */
int __fastcall sub_60206700(int a1);  /* 0x00206700 */
int __fastcall demo_jump_ref_2(_DWORD *a1);  /* 0x00207bb8 */
int __fastcall demo_jump_ref_3(_DWORD *a1);  /* 0x00207d60 */
int __fastcall sub_60208888(_DWORD *a1, int a2);  /* 0x00208888 */
int __fastcall sub_60208D50(int a1);  /* 0x00208d50 */
int __fastcall Actor_W2Hammer_burosu_build(int a1);  /* 0x002092a8 */
int __fastcall sub_60209598(int *a1);  /* 0x00209598 */
int __fastcall sub_6020ABE8(_DWORD *a1);  /* 0x0020abe8 */
int __fastcall Actor_CSW2Goomba_build(int a1);  /* 0x0020b0a8 */
int __fastcall sub_6020BBE8(_DWORD *a1);  /* 0x0020bbe8 */
int __fastcall sub_6020BDBC(Actor *a1);  /* 0x0020bdbc */
int __fastcall Actor_CSW4_Item_build(int a1);  /* 0x0020ce10 */
int __fastcall sub_6020DC50(_DWORD *a1, int a2);  /* 0x0020dc50 */
int __fastcall sub_6020E0F4(int a1);  /* 0x0020e0f4 */
int __fastcall Actor_CSW5Boo_build(int a1);  /* 0x0020e36c */
int __fastcall sub_6020EDB4(int a1);  /* 0x0020edb4 */
int __fastcall sub_6020F4E0(int a1);  /* 0x0020f4e0 */
bool __fastcall sub_6020F78C(int a1);  /* 0x0020f78c */
int __fastcall sub_6021007C(_DWORD *a1);  /* 0x0021007c */
float __fastcall sub_60210A38(int a1, int a2);  /* 0x00210a38 */
int __fastcall Actor_CSW7_build(int a1);  /* 0x00211138 */
bool __fastcall sub_60211530(int a1);  /* 0x00211530 */
int __fastcall sub_602118F0(_DWORD *a1, int a2);  /* 0x002118f0 */
bool __fastcall sub_602120D8(int a1, int a2, int a3);  /* 0x002120d8 */
int __fastcall sub_60213380(int a1);  /* 0x00213380 */
int __fastcall Actor_CourseSelect_W7_Item_build(int a1);  /* 0x00213628 */
int __fastcall sub_6021454C(_DWORD *a1, int a2);  /* 0x0021454c */
int __fastcall sub_6021483C(int a1);  /* 0x0021483c */
int __fastcall sub_6021508C(int result);  /* 0x0021508c */
int __fastcall sub_602153A0(int a1);  /* 0x002153a0 */
int __fastcall CS_W8a_DarkCloud_ref(_DWORD *a1);  /* 0x00215b9c */
int __fastcall sub_60216340(int a1, int a2);  /* 0x00216340 */
int __fastcall sub_60217114(int a1);  /* 0x00217114 */
int __fastcall sub_60217DD8(int a1, _DWORD *a2);  /* 0x00217dd8 */
int __fastcall Actor_CSgeyser_build(int a1);  /* 0x00217fd4 */
int __fastcall sub_602184A4(int a1, int a2);  /* 0x002184a4 */
int __fastcall sub_602187E0(int a1);  /* 0x002187e0 */
int __fastcall sub_60218EB0(_DWORD *a1);  /* 0x00218eb0 */
int __fastcall sub_6021927C(_DWORD *a1);  /* 0x0021927c */
int __fastcall sub_602196D8(int a1);  /* 0x002196d8 */
int __fastcall sub_60219858(int a1);  /* 0x00219858 */
int __fastcall sub_60219E1C(int a1);  /* 0x00219e1c */
int __fastcall sub_6021A000(float *a1);  /* 0x0021a000 */
int __fastcall sub_6021A0EC(int a1);  /* 0x0021a0ec */
int __fastcall sub_6021A420(int a1, int a2);  /* 0x0021a420 */
int __fastcall sub_6021A728(int result, int a2);  /* 0x0021a728 */
int __fastcall sub_6021A78C(int a1);  /* 0x0021a78c */
int __fastcall sub_6021AA74(int a1);  /* 0x0021aa74 */
int __fastcall sub_6021B11C(int a1);  /* 0x0021b11c */
int __fastcall sub_6021B578(int a1);  /* 0x0021b578 */
int __fastcall sub_6021BC64(int result, char a2);  /* 0x0021bc64 */
int __fastcall sub_6021BD48(int a1);  /* 0x0021bd48 */
int __fastcall sub_6021BF88(int a1, int *a2, int a3);  /* 0x0021bf88 */
void __fastcall sub_6021C56C(int a1, int a2);  /* 0x0021c56c */
int __fastcall sub_6021C5B8(int a1, int a2, int a3);  /* 0x0021c5b8 */
int __fastcall sub_6021C610(int a1);  /* 0x0021c610 */
int __fastcall sub_6021C710(_DWORD *a1, _DWORD *a2, _DWORD *a3);  /* 0x0021c710 */
int __fastcall sub_6021C7D4(int a1);  /* 0x0021c7d4 */
int __fastcall sub_6021CC78(int a1);  /* 0x0021cc78 */
int __fastcall sub_6021CE80(_DWORD *a1);  /* 0x0021ce80 */
int __fastcall sub_6021CEF4(int a1);  /* 0x0021cef4 */
int __fastcall sub_6021D034(int a1);  /* 0x0021d034 */
int __fastcall sub_6021D2C4(int a1, int a2);  /* 0x0021d2c4 */
bool __fastcall sub_6021D400(int a1);  /* 0x0021d400 */
int __fastcall sub_6021D520(int a1);  /* 0x0021d520 */
int __fastcall sub_6021DAF8(int a1);  /* 0x0021daf8 */
int __fastcall sub_6021DBC8(_DWORD *a1);  /* 0x0021dbc8 */
int __fastcall sub_6021E054(_DWORD *a1);  /* 0x0021e054 */
int __fastcall sub_6021E8AC(_BYTE *a1);  /* 0x0021e8ac */
int __fastcall sub_6021EDAC(int a1);  /* 0x0021edac */
int __fastcall sub_6021EE50(int a1, int a2);  /* 0x0021ee50 */
int __fastcall sub_6021F50C(int a1, int a2, int a3, int a4);  /* 0x0021f50c */
int __fastcall sub_6021F6E0(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0021f6e0 */
int __fastcall sub_6021F784(_DWORD *a1, _DWORD *a2, _DWORD *a3, unsigned int a4);  /* 0x0021f784 */
int __fastcall sub_6021FA6C(int a1);  /* 0x0021fa6c */
int __fastcall sub_6021FF78(int a1, int *a2, int a3, _DWORD *a4);  /* 0x0021ff78 */
bool __fastcall sub_602200B4(int a1, int *a2, _DWORD *a3);  /* 0x002200b4 */
int __fastcall sub_6022036C(int a1, int a2, int a3);  /* 0x0022036c */
int __fastcall sub_60220790(int a1);  /* 0x00220790 */
int __fastcall sub_602207C8(int a1);  /* 0x002207c8 */
int __fastcall sub_60220CDC(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x00220cdc */
int __fastcall sub_60220E60(_DWORD *a1);  /* 0x00220e60 */
int __fastcall sub_60221178(int a1, int a2, _DWORD *a3);  /* 0x00221178 */
int __fastcall sub_6022135C(int *a1);  /* 0x0022135c */
int __fastcall sub_60221D5C(int a1, int a2);  /* 0x00221d5c */
int __fastcall sub_60221EB8(int a1, _DWORD *a2);  /* 0x00221eb8 */
int __fastcall sub_602221C8(_DWORD *a1, int a2, int a3);  /* 0x002221c8 */
int __fastcall sub_602227E8(int a1);  /* 0x002227e8 */
int __fastcall sub_60222950(_DWORD *a1, _DWORD *a2);  /* 0x00222950 */
int __fastcall sub_60222DC8(int a1);  /* 0x00222dc8 */
int __fastcall sub_60223718(int a1);  /* 0x00223718 */
int __fastcall sub_6022392C(int a1);  /* 0x0022392c */
int __fastcall sub_60223B9C(_DWORD *a1, _DWORD *a2);  /* 0x00223b9c */
int __fastcall sub_60223D00(_DWORD *a1);  /* 0x00223d00 */
int __fastcall sub_60223D58(_DWORD *a1);  /* 0x00223d58 */
int __fastcall sub_602241C0(int a1);  /* 0x002241c0 */
int __fastcall sub_60224724(int a1);  /* 0x00224724 */
int __fastcall sub_60224A04(_DWORD *a1, int a2, int a3);  /* 0x00224a04 */
int __fastcall sub_60224B54(_DWORD *a1, int a2, unsigned __int8 *a3, int a4);  /* 0x00224b54 */
int __fastcall sub_60224CC8(int a1, int a2);  /* 0x00224cc8 */
int __fastcall sub_60224DCC(int a1, int a2);  /* 0x00224dcc */
int __fastcall sub_60224ED0(int a1, int a2);  /* 0x00224ed0 */
int __fastcall sub_60224FD4(int a1, _DWORD *a2);  /* 0x00224fd4 */
int __fastcall sub_60225174(int a1, int a2, const char **a3);  /* 0x00225174 */
int __fastcall sub_6022534C(int a1, int a2, int a3);  /* 0x0022534c */
int __fastcall sub_60225484(int a1, int a2, int a3);  /* 0x00225484 */
int __fastcall sub_602255BC(int a1, int a2, int a3);  /* 0x002255bc */
int __fastcall sub_602256F4(int a1, const char **a2, int a3);  /* 0x002256f4 */
int __fastcall sub_602265DC(int a1, _DWORD *a2);  /* 0x002265dc */
int __fastcall sub_60226700(int a1, int a2);  /* 0x00226700 */
int __fastcall sub_602268CC(_DWORD *a1, unsigned __int8 **a2);  /* 0x002268cc */
int __fastcall sub_60226A80(int a1, int a2, int a3);  /* 0x00226a80 */
bool __fastcall sub_60226D30(int a1, int a2);  /* 0x00226d30 */
int __fastcall sub_60226F74(_DWORD *a1);  /* 0x00226f74 */
int __fastcall sub_60227944(int a1, int a2);  /* 0x00227944 */
int __fastcall sub_60227A9C(_DWORD *a1);  /* 0x00227a9c */
int __fastcall sub_60227F68(int a1);  /* 0x00227f68 */
int __fastcall sub_60229DE0(int a1, int a2, int a3);  /* 0x00229de0 */
int __fastcall sub_60229EAC(int a1, _DWORD *a2);  /* 0x00229eac */
int __fastcall sub_6022A7E4(int (__fastcall ****a1)(_DWORD, int), int a2);  /* 0x0022a7e4 */
int __fastcall sub_6022A8B4(_BYTE *a1);  /* 0x0022a8b4 */
bool __fastcall sub_6022A900(int a1);  /* 0x0022a900 */
int __fastcall sub_6022A9FC(int a1);  /* 0x0022a9fc */
int __fastcall sub_6022AA74(int a1);  /* 0x0022aa74 */
int __fastcall sub_6022AC6C(_BYTE *a1, int a2);  /* 0x0022ac6c */
int __fastcall sub_6022ADB4(int a1);  /* 0x0022adb4 */
int __fastcall sub_6022AE5C(int a1, int *a2, int a3, int a4);  /* 0x0022ae5c */
int __fastcall sub_6022B648(int a1, int a2);  /* 0x0022b648 */
int __fastcall sub_6022B68C(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5);  /* 0x0022b68c */
int __fastcall sub_6022C144(int a1, int a2);  /* 0x0022c144 */
int __fastcall sub_6022C228(int a1, int a2, int a3);  /* 0x0022c228 */
int __fastcall sub_6022C360(int a1, _DWORD *a2);  /* 0x0022c360 */
int __fastcall sub_6022CBE8(int a1, int a2, int a3);  /* 0x0022cbe8 */
bool __fastcall sub_6022CC88(int a1, int a2, int a3);  /* 0x0022cc88 */
int __fastcall sub_6022CD28(int a1, _DWORD *a2, int a3);  /* 0x0022cd28 */
int __fastcall sub_6022D06C(int result, int *a2, char a3);  /* 0x0022d06c */
int __fastcall sub_6022D0D0(int a1, int a2);  /* 0x0022d0d0 */
bool __fastcall sub_6022DC58(int a1, unsigned int a2);  /* 0x0022dc58 */
int __fastcall sub_6022DD38(int a1, int a2);  /* 0x0022dd38 */
bool __fastcall sub_6022F460(int a1);  /* 0x0022f460 */
int __fastcall sub_6022F644(int a1);  /* 0x0022f644 */
int __fastcall sub_60230578(int a1);  /* 0x00230578 */
int __fastcall sub_602311CC(int result);  /* 0x002311cc */
void __fastcall sub_60231264(sead::IDisposer *a1);  /* 0x00231264 */
int __fastcall sub_60231338(int a1);  /* 0x00231338 */
int __fastcall sub_602313B0(int a1);  /* 0x002313b0 */
int __fastcall sub_6023160C(int a1, int a2, int a3, float *a4);  /* 0x0023160c */
int __fastcall sub_60232B58(int a1);  /* 0x00232b58 */
int __fastcall sub_60232E10(int a1);  /* 0x00232e10 */
int __fastcall sub_60232EAC(int a1);  /* 0x00232eac */
int __fastcall sub_602330FC(int a1);  /* 0x002330fc */
int __fastcall sub_602331F8(int a1);  /* 0x002331f8 */
int __fastcall sub_602333E0(int a1, int a2);  /* 0x002333e0 */
int __fastcall sub_60233464(int a1, int a2);  /* 0x00233464 */
int __fastcall sub_6023349C(int a1, int a2);  /* 0x0023349c */
int __fastcall sub_602338CC(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8);  /* 0x002338cc */
int __fastcall sub_602342AC(int a1, int a2, int a3, int a4);  /* 0x002342ac */
int __fastcall sub_60234378(int result, int a2);  /* 0x00234378 */
int __fastcall sub_602343CC(int result, int a2);  /* 0x002343cc */
int __fastcall sub_60234420(int result);  /* 0x00234420 */
int __fastcall sub_6023446C(int a1);  /* 0x0023446c */
int __fastcall sub_602346C0(int a1);  /* 0x002346c0 */
int __fastcall sub_60234748(_DWORD *a1, int a2, int a3, int a4);  /* 0x00234748 */
int __fastcall sub_60234958(int a1, int a2);  /* 0x00234958 */
int __fastcall sub_60234B78(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00234b78 */
unsigned int __fastcall sub_60234DE0(int a1);  /* 0x00234de0 */
int __fastcall sub_60234F80(int a1, int a2);  /* 0x00234f80 */
int __fastcall sub_60234FE0(int a1, int a2);  /* 0x00234fe0 */
int __fastcall sub_602350B0(int a1);  /* 0x002350b0 */
int __fastcall sub_602354FC(int a1, int a2);  /* 0x002354fc */
int __fastcall sub_6023566C(int result, int a2, int a3);  /* 0x0023566c */
int __fastcall sub_602356B4(int a1, int a2);  /* 0x002356b4 */
int __fastcall sub_6023586C(float *a1, _DWORD *a2, _DWORD *a3);  /* 0x0023586c */
int __fastcall sub_602359B0(int a1);  /* 0x002359b0 */
int __fastcall EffectData_ctor(int result);  /* 0x00235dd0 */
int __fastcall sub_60235E50(int a1);  /* 0x00235e50 */
int __fastcall EffectData_setEffectId(int a1, int a2);  /* 0x00235ea0 */
int __fastcall EffectData_init(int a1);  /* 0x0023601c */
int __fastcall sub_60236074(int a1);  /* 0x00236074 */
int __fastcall sub_602360C0(int a1);  /* 0x002360c0 */
int __fastcall sub_6023611C(int a1);  /* 0x0023611c */
int __fastcall sub_6023615C(int a1, __int64 *a2);  /* 0x0023615c */
int __fastcall sub_602361D4(int a1);  /* 0x002361d4 */
int __fastcall sub_60236238(int a1);  /* 0x00236238 */
int __fastcall sub_60236290(int a1, int a2);  /* 0x00236290 */
int __fastcall sub_6023636C(int a1, _QWORD *a2);  /* 0x0023636c */
int __fastcall sub_602363D0(int a1, int a2);  /* 0x002363d0 */
int __fastcall EffectData_update(int32x4_t *a1, float *a2, unsigned int *a3, float *a4);  /* 0x00236430 */
int __fastcall sub_60236A80(int a1, __int64 *a2, char a3);  /* 0x00236a80 */
int __fastcall sub_60236D10(int a1, char a2);  /* 0x00236d10 */
int __fastcall sub_60236D5C(int a1, int a2, int a3);  /* 0x00236d5c */
int __fastcall EffectData_create(int a1, int a2, int a3, int a4);  /* 0x00236da0 */
int __fastcall sub_60236DF4(int a1, int a2, int a3);  /* 0x00236df4 */
int __fastcall sub_60236E40(unsigned int a1, int a2, int a3, int a4, int a5);  /* 0x00236e40 */
int __fastcall sub_60236EC4(unsigned int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00236ec4 */
int __fastcall sub_60236F24(unsigned int a1, int a2, int a3, int a4, int a5);  /* 0x00236f24 */
int __fastcall sub_60236F74(unsigned int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00236f74 */
bool __fastcall sub_60236FD4(float *a1);  /* 0x00236fd4 */
int __fastcall EffectWrapper_update(int32x4_t *a1, int a2, float *a3, unsigned int *a4, float *a5);  /* 0x00237088 */
int __fastcall sub_60237208(int32x4_t *a1, float *a2, unsigned int *a3, float *a4);  /* 0x00237208 */
int __fastcall sub_602372C0(int a1, int a2, int a3, char a4);  /* 0x002372c0 */
int __fastcall sub_60237454(int a1, __int64 *a2, char a3);  /* 0x00237454 */
int __fastcall EffectWrapper_ctor(int a1);  /* 0x0023750c */
int __fastcall sub_60237560(int a1);  /* 0x00237560 */
int __fastcall sub_602375C4(int32x4_t *a1, int a2, float *a3, unsigned int *a4, float *a5);  /* 0x002375c4 */
int __fastcall sub_60237610(int a1, int a2, int a3, char a4);  /* 0x00237610 */
int __fastcall sub_602378EC(_DWORD *a1, int a2);  /* 0x002378ec */
int __fastcall sub_60237B20(int a1, int a2, int a3);  /* 0x00237b20 */
int __fastcall sub_60237BA0(unsigned int a1);  /* 0x00237ba0 */
int __fastcall sub_60237CAC(unsigned int a1, unsigned int a2);  /* 0x00237cac */
int __fastcall sub_60237CE0(unsigned int a1);  /* 0x00237ce0 */
int __fastcall sub_60237EA4(int a1);  /* 0x00237ea4 */
int __fastcall sub_60237FD0(int a1);  /* 0x00237fd0 */
int __fastcall sub_6023816C(_DWORD *a1, const char *a2);  /* 0x0023816c */
int __fastcall sub_602384C8(int a1, _DWORD *a2);  /* 0x002384c8 */
int __fastcall sub_602387C8(_DWORD *a1);  /* 0x002387c8 */
int __fastcall sub_6023895C(int a1);  /* 0x0023895c */
int __fastcall sub_60238A94(int a1, int a2);  /* 0x00238a94 */
int __fastcall sub_60238B84(int a1, int a2);  /* 0x00238b84 */
int __fastcall sub_60238D98(_DWORD *a1);  /* 0x00238d98 */
int __fastcall sub_60239158(int a1, _DWORD *a2, int a3, int a4);  /* 0x00239158 */
int __fastcall sub_60239458(int a1, int a2, int a3, int a4, __int64 *a5);  /* 0x00239458 */
int __fastcall sub_602396F8(int a1, int a2, int a3, int *a4);  /* 0x002396f8 */
int __fastcall sub_60239B9C(int result, _DWORD *a2, int a3, int a4);  /* 0x00239b9c */
int __fastcall EffectData_setEffectId_helper(int a1, unsigned int a2);  /* 0x00239bdc */
int __fastcall sub_60239BF4(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4);  /* 0x00239bf4 */
int __fastcall sub_60239E08(int a1, int a2);  /* 0x00239e08 */
int __fastcall sub_60239EB0(int a1);  /* 0x00239eb0 */
int __fastcall sub_6023AB38(float *a1);  /* 0x0023ab38 */
unsigned int __fastcall sub_6023B03C(_DWORD *a1, int a2);  /* 0x0023b03c */
int __fastcall sub_6023CB40(int a1);  /* 0x0023cb40 */
int __fastcall sub_6023D250(int a1);  /* 0x0023d250 */
int __fastcall sub_6023D424(int a1);  /* 0x0023d424 */
int __fastcall sub_6023D4FC(int a1);  /* 0x0023d4fc */
int __fastcall sub_6023D5D4(int a1);  /* 0x0023d5d4 */
int __fastcall sub_6023D6B4(int a1);  /* 0x0023d6b4 */
int __fastcall sub_6023D790(int a1);  /* 0x0023d790 */
int __fastcall sub_6023E194(float *a1, int a2);  /* 0x0023e194 */
int __fastcall sub_6023E2A0(int a1);  /* 0x0023e2a0 */
int __fastcall sub_6023ECEC(int a1);  /* 0x0023ecec */
bool __fastcall sub_6023F1A8(int a1, _BYTE *a2);  /* 0x0023f1a8 */
int __fastcall sub_6023F32C(int a1);  /* 0x0023f32c */
int __fastcall sub_6023FA9C(int a1);  /* 0x0023fa9c */
bool __fastcall sub_60242F84(int a1);  /* 0x00242f84 */
int __fastcall sub_60243658(int *a1);  /* 0x00243658 */
int __fastcall sub_60244BDC(int a1);  /* 0x00244bdc */
int __fastcall sub_602451DC(int result);  /* 0x002451dc */
int __fastcall sub_602453A0(int *a1, int a2);  /* 0x002453a0 */
int __fastcall sub_6024585C(int a1);  /* 0x0024585c */
int __fastcall sub_60245940(int a1, int a2);  /* 0x00245940 */
int __fastcall sub_60245BC8(int a1);  /* 0x00245bc8 */
int __fastcall sub_60245C6C(int a1);  /* 0x00245c6c */
int __fastcall sub_60245D78(int a1);  /* 0x00245d78 */
bool __fastcall sub_60246030(int a1, _BYTE *a2);  /* 0x00246030 */
int __fastcall sub_602461EC(int a1);  /* 0x002461ec */
int __fastcall sub_60246374(int a1, int a2);  /* 0x00246374 */
unsigned int __fastcall sub_602465B8(float *a1);  /* 0x002465b8 */
unsigned int __fastcall sub_6024679C(int a1, int a2);  /* 0x0024679c */
bool __fastcall sub_60246AD8(int a1);  /* 0x00246ad8 */
int __fastcall sub_60246DE8(int a1);  /* 0x00246de8 */
int __fastcall sub_60246F50(int a1, int a2);  /* 0x00246f50 */
int __fastcall sub_60247198(int a1, int a2);  /* 0x00247198 */
int __fastcall sub_60247340(int a1);  /* 0x00247340 */
int __fastcall sub_6024756C(int a1);  /* 0x0024756c */
int __fastcall sub_6024778C(int a1, int a2, _BYTE *a3);  /* 0x0024778c */
int __fastcall sub_602481EC(int a1, int a2, int a3);  /* 0x002481ec */
int __fastcall sub_602486D8(int a1, int a2, int a3);  /* 0x002486d8 */
int __fastcall sub_6024919C(int a1);  /* 0x0024919c */
int __fastcall sub_602495A4(_DWORD *a1);  /* 0x002495a4 */
int __fastcall SE_EMY_YOSHI_HPDP_ref(_DWORD *a1, int a2, int a3);  /* 0x00249c78 */
int __fastcall sub_60249D70(int a1, int a2, int a3);  /* 0x00249d70 */
int __fastcall sub_6024A0E8(int a1);  /* 0x0024a0e8 */
int __fastcall sub_6024B130(_DWORD *a1);  /* 0x0024b130 */
int __fastcall sub_6024B62C(unsigned int *a1);  /* 0x0024b62c */
int __fastcall sub_6024B96C(int a1);  /* 0x0024b96c */
int __fastcall sub_6024BB04(int a1);  /* 0x0024bb04 */
int __fastcall sub_6024BC38(_DWORD *a1, int a2, char a3, int a4);  /* 0x0024bc38 */
int __fastcall sub_6024D71C(int a1);  /* 0x0024d71c */
int __fastcall eye_wait_ref_2(int *a1);  /* 0x0024e73c */
int __fastcall sub_6024EE5C(int a1);  /* 0x0024ee5c */
int __fastcall sub_6024F1F8(int a1);  /* 0x0024f1f8 */
int __fastcall sub_6024F4A8(int a1);  /* 0x0024f4a8 */
int __fastcall sub_6024F660(int a1);  /* 0x0024f660 */
int __fastcall sub_6024F818(int a1);  /* 0x0024f818 */
int __fastcall sub_6024FA6C(int a1);  /* 0x0024fa6c */
int __fastcall eye_fly_ref(int *a1);  /* 0x00250164 */
int __fastcall sub_60250368(int a1);  /* 0x00250368 */
int __fastcall sub_60250484(int a1);  /* 0x00250484 */
int __fastcall sub_60250B48(int a1);  /* 0x00250b48 */
int __fastcall SE_EMY_MAMEKURIBO_CLING_ref(int a1);  /* 0x00251ab0 */
int __fastcall sub_6025250C(int *a1);  /* 0x0025250c */
int __fastcall sub_6025261C(int a1);  /* 0x0025261c */
int __fastcall sub_60253194(int a1, int a2);  /* 0x00253194 */
int __fastcall sub_60253344(int a1, int a2);  /* 0x00253344 */
int __fastcall sub_602535A0(int a1);  /* 0x002535a0 */
int __fastcall sub_60253E2C(int a1);  /* 0x00253e2c */
int __fastcall sub_60253F94(int a1, int a2, char a3);  /* 0x00253f94 */
int __fastcall sub_60254000(int a1, int a2, int a3, int a4, int a5);  /* 0x00254000 */
int __fastcall hanachan_big_head_ref(_DWORD *a1, int a2);  /* 0x002546b8 */
int __fastcall sub_602547D8(int result);  /* 0x002547d8 */
int __fastcall hanachan_big_ref(_DWORD *a1, int a2);  /* 0x00254d6c */
int __fastcall GiantWiggler_onCreate(int a1);  /* 0x002554cc */
int __fastcall sub_602559BC(int a1);  /* 0x002559bc */
void __fastcall sub_60255B24(int a1);  /* 0x00255b24 */
int __fastcall sub_602561CC(int a1, _DWORD *a2);  /* 0x002561cc */
int __fastcall sub_602563F0(int a1);  /* 0x002563f0 */
int __fastcall sub_6025663C(int a1);  /* 0x0025663c */
bool __fastcall sub_60256CFC(int a1, int a2, float *a3);  /* 0x00256cfc */
void __fastcall sub_60257928(_DWORD *a1);  /* 0x00257928 */
int __fastcall sub_60257AE8(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00257ae8 */
int __fastcall sub_60257BE8(_DWORD ***a1);  /* 0x00257be8 */
int __fastcall sub_60257E50(int a1);  /* 0x00257e50 */
int __fastcall sub_60258188(int result);  /* 0x00258188 */
int __fastcall body_stop_ref(int a1);  /* 0x00258470 */
int __fastcall sub_60258A64(int a1);  /* 0x00258a64 */
int __fastcall sub_60258C1C(int a1);  /* 0x00258c1c */
int __fastcall sub_6025985C(int a1);  /* 0x0025985c */
int __fastcall SE_EMY_TOUCH_BH_HIBANA_ref(int result, int a2, int a3);  /* 0x00259fb8 */
int __fastcall sub_6025A2F4(int a1);  /* 0x0025a2f4 */
int __fastcall SE_EMY_KAME_KERU_ref(int a1);  /* 0x0025c070 */
int __fastcall BobOmb_ctor(int a1);  /* 0x0025cebc */
int __fastcall BobOmb_onCreate(int a1);  /* 0x0025d0d8 */
int __fastcall BobOmb_setupModel(_DWORD *a1);  /* 0x0025d3c8 */
int __fastcall BobOmb_decideFirstState(int a1);  /* 0x0025d528 */
int __fastcall sub_6025D704(int a1);  /* 0x0025d704 */
int __fastcall BobOmb_onExecute(_DWORD *a1);  /* 0x0025db1c */
int __fastcall sub_6025DE4C(int a1);  /* 0x0025de4c */
int __fastcall sub_6025DEB0(int a1);  /* 0x0025deb0 */
int __fastcall BobOmb_onDraw(int a1);  /* 0x0025dfc4 */
int __fastcall BobOmb_onDelete(int a1);  /* 0x0025e020 */
int __fastcall sub_6025E2A8(int a1);  /* 0x0025e2a8 */
int __fastcall sub_6025F29C(int a1, int a2, int a3);  /* 0x0025f29c */
int __fastcall sub_6025F338(int a1, int a2, int a3);  /* 0x0025f338 */
int __fastcall sub_6025FA10(int a1, int a2, int a3);  /* 0x0025fa10 */
unsigned int __fastcall sub_6025FA54(int a1, int a2);  /* 0x0025fa54 */
bool __fastcall sub_6025FB2C(int a1);  /* 0x0025fb2c */
int __fastcall sub_6025FC2C(int a1);  /* 0x0025fc2c */
int __fastcall sub_6025FFE4(int a1, int a2);  /* 0x0025ffe4 */
int __fastcall sub_602600B0(int result);  /* 0x002600b0 */
int __fastcall sub_602600E4(int a1);  /* 0x002600e4 */
int __fastcall sub_602605EC(int a1);  /* 0x002605ec */
int __fastcall sub_60260BAC(int a1);  /* 0x00260bac */
int __fastcall sub_60260D54(int a1, int a2, float *a3);  /* 0x00260d54 */
int __fastcall Actor_parabomu_RDash_build(_DWORD *a1);  /* 0x00261428 */
int __fastcall para_receive_ref(int a1);  /* 0x0026167c */
int __fastcall root_parachute_ref(int *a1);  /* 0x00261800 */
int __fastcall sub_602618E8(int *a1);  /* 0x002618e8 */
int __fastcall root_parachute_ref_2(int a1);  /* 0x00261a08 */
int __fastcall BrosBase_ctor(int a1);  /* 0x002632f0 */
int __fastcall sub_60263858(int a1);  /* 0x00263858 */
int __fastcall sub_60263968(int a1);  /* 0x00263968 */
int __fastcall sub_60263B68(_DWORD *a1);  /* 0x00263b68 */
int __fastcall sub_60263E44(int a1);  /* 0x00263e44 */
bool __fastcall sub_60263FA4(int a1);  /* 0x00263fa4 */
int __fastcall sub_602640A0(int a1);  /* 0x002640a0 */
int __fastcall sub_60264900(int a1, const char *a2, int a3);  /* 0x00264900 */
int __fastcall sub_6026508C(int result);  /* 0x0026508c */
bool __fastcall sub_60266410(int a1);  /* 0x00266410 */
int __fastcall sub_6026819C(int a1);  /* 0x0026819c */
int __fastcall sub_602685FC(int *a1);  /* 0x002685fc */
int __fastcall sub_60268E04(int a1);  /* 0x00268e04 */
int __fastcall sub_60269548(int a1);  /* 0x00269548 */
int __fastcall houdai_ball_ref(int a1);  /* 0x0026af40 */
int __fastcall sub_6026B55C(_DWORD *a1);  /* 0x0026b55c */
int __fastcall sub_6026B70C(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0026b70c */
int __fastcall sub_6026C7DC(int *a1);  /* 0x0026c7dc */
int __fastcall sub_6026C9AC(int a1);  /* 0x0026c9ac */
int __fastcall sub_6026CF48(int result);  /* 0x0026cf48 */
int __fastcall sub_6026D1FC(int a1);  /* 0x0026d1fc */
int __fastcall sub_6026DDE8(_DWORD *a1);  /* 0x0026dde8 */
int __fastcall sub_6026DFA4(int a1);  /* 0x0026dfa4 */
int __fastcall houdai_rot_ref(int a1);  /* 0x0026e984 */
int __fastcall houdai_rot_large_B_ref(int a1);  /* 0x0026fd70 */
int __fastcall sub_60271094(int a1);  /* 0x00271094 */
int __fastcall sub_60271648(int a1);  /* 0x00271648 */
int __fastcall sub_602717D4(int a1);  /* 0x002717d4 */
int __fastcall sub_60271E38(int a1);  /* 0x00271e38 */
int __fastcall sub_60271EF4(int a1, int a2);  /* 0x00271ef4 */
int __fastcall sub_602720FC(int a1, float *a2);  /* 0x002720fc */
int __fastcall sub_602723A8(int a1, int a2, int a3);  /* 0x002723a8 */
bool __fastcall sub_60272570(int a1, int a2);  /* 0x00272570 */
int __fastcall sub_602726F8(int a1, int a2, int a3);  /* 0x002726f8 */
int __fastcall sub_60273034(int result, float *a2, _DWORD *a3);  /* 0x00273034 */
int __fastcall sub_6027326C(int result, float *a2, int a3);  /* 0x0027326c */
bool __fastcall sub_60273514(int a1);  /* 0x00273514 */
int __fastcall sub_602740AC(int a1);  /* 0x002740ac */
int __fastcall sub_60274390(int a1);  /* 0x00274390 */
bool __fastcall sub_60274A5C(int a1);  /* 0x00274a5c */
int __fastcall sub_60275818(int *a1);  /* 0x00275818 */
int __fastcall Fuzzy_setupModel(int *a1);  /* 0x00276d00 */
bool __fastcall sub_60276E10(int a1);  /* 0x00276e10 */
int __fastcall sub_60276FBC(float a1);  /* 0x00276fbc */
int __fastcall sub_60277540(int a1);  /* 0x00277540 */
int __fastcall sub_602778D0(int a1);  /* 0x002778d0 */
int __fastcall sub_60278058(int a1);  /* 0x00278058 */
int __fastcall choropoo_hole_ref(int *a1);  /* 0x00278fe8 */
int __fastcall sub_602790B8(int a1);  /* 0x002790b8 */
int __fastcall SE_EMY_CHOROPU_APP_ref(int a1);  /* 0x00279884 */
int __fastcall go_out_ed_ref(int *a1);  /* 0x00279f28 */
int __fastcall sub_6027B330(int a1);  /* 0x0027b330 */
int __fastcall sub_6027B714(int a1);  /* 0x0027b714 */
int __fastcall sub_6027B814(_DWORD *a1);  /* 0x0027b814 */
bool __fastcall sub_6027BB88(int a1);  /* 0x0027bb88 */
bool __fastcall sub_6027C218(int a1);  /* 0x0027c218 */
int __fastcall sub_6027C3C4(int a1);  /* 0x0027c3c4 */
int __fastcall sub_6027C554(int a1);  /* 0x0027c554 */
int __fastcall sub_6027C688(int a1);  /* 0x0027c688 */
int __fastcall dead_2_ref(int *a1);  /* 0x0027c79c */
int __fastcall dead_2_ref_2(int *a1);  /* 0x0027c8dc */
int __fastcall sub_6027D1CC(int a1);  /* 0x0027d1cc */
int __fastcall sub_6027E140(int a1);  /* 0x0027e140 */
int __fastcall sub_6027E874(int a1);  /* 0x0027e874 */
int __fastcall sub_6027F748(int a1);  /* 0x0027f748 */
int __fastcall sub_60280788(int a1);  /* 0x00280788 */
int __fastcall sub_60281D6C(int a1);  /* 0x00281d6c */
int __fastcall sub_60282BB4(int a1);  /* 0x00282bb4 */
int __fastcall sub_602839E0(int a1);  /* 0x002839e0 */
int __fastcall sub_60283D2C(int a1);  /* 0x00283d2c */
int __fastcall sub_60284F44(int a1, int a2, int a3, int a4);  /* 0x00284f44 */
int __fastcall sub_60285440(int a1, int a2);  /* 0x00285440 */
int __fastcall sub_60285510(int a1);  /* 0x00285510 */
int __fastcall sub_602855F4(int a1);  /* 0x002855f4 */
int __fastcall sub_602856EC(int *a1, int a2);  /* 0x002856ec */
void __fastcall sub_6028573C(int *a1, int a2, signed int a3, int a4);  /* 0x0028573c */
int __fastcall sub_60285C54(int a1);  /* 0x00285c54 */
int __fastcall sub_60285E04(int a1);  /* 0x00285e04 */
int __fastcall sub_60288BA4(int *a1);  /* 0x00288ba4 */
int __fastcall sub_60288D08(int a1);  /* 0x00288d08 */
int __fastcall sub_602890D0(int result);  /* 0x002890d0 */
int __fastcall sub_602892A4(int a1);  /* 0x002892a4 */
int __fastcall sub_60289DD8(int a1);  /* 0x00289dd8 */
bool __fastcall SE_OBJ_TARU_HIT_ref(int a1, int a2, int a3);  /* 0x0028a100 */
bool __fastcall SE_OBJ_TARU_HIT_ref_2(int a1, int a2, int a3);  /* 0x0028a5dc */
int __fastcall sub_6028B250(_BYTE *a1);  /* 0x0028b250 */
int __fastcall sub_6028CD24(int a1);  /* 0x0028cd24 */
int __fastcall sub_6028FDA0(int a1, char a2);  /* 0x0028fda0 */
int __fastcall sub_6028FE94(int a1);  /* 0x0028fe94 */
int __fastcall sub_6028FF68(_DWORD *a1);  /* 0x0028ff68 */
int __fastcall sub_60290130(int a1);  /* 0x00290130 */
int __fastcall PlayerStates_updateModelAndAnims_helper(int a1, int a2);  /* 0x00290228 */
int __fastcall sub_60290260(int a1);  /* 0x00290260 */
int __fastcall sub_602904E8(int a1);  /* 0x002904e8 */
bool __fastcall sub_602905AC(int a1, int a2, int a3);  /* 0x002905ac */
int __fastcall sub_60290840(_DWORD *a1);  /* 0x00290840 */
int __fastcall sub_60290A48(int a1, int a2);  /* 0x00290a48 */
int __fastcall sub_60291080(int a1);  /* 0x00291080 */
int __fastcall sub_60291310(int a1);  /* 0x00291310 */
int __fastcall sub_6029159C(int a1);  /* 0x0029159c */
int __fastcall sub_602915F4(int *a1);  /* 0x002915f4 */
int __fastcall sub_6029166C(int a1);  /* 0x0029166c */
int __fastcall sub_602918C0(int a1);  /* 0x002918c0 */
void __fastcall sub_60291A5C(int a1);  /* 0x00291a5c */
int __fastcall sub_6029266C(int a1);  /* 0x0029266c */
unsigned __int32 __fastcall sub_60292D70(int a1, _DWORD *a2);  /* 0x00292d70 */
int __fastcall dokan_touch_ref(int *a1);  /* 0x002930d8 */
bool __fastcall sub_602941DC(int a1);  /* 0x002941dc */
bool __fastcall sub_60294710(int a1);  /* 0x00294710 */
int __fastcall sub_60296B54(int a1);  /* 0x00296b54 */
int __fastcall sub_60296E0C(_DWORD *a1);  /* 0x00296e0c */
int __fastcall sub_602970EC(int a1, int a2);  /* 0x002970ec */
int __fastcall sub_602971C4(int a1, int a2);  /* 0x002971c4 */
int __fastcall sub_602975D0(Actor *a1);  /* 0x002975d0 */
int __fastcall sub_60297A6C(Actor *a1, float *a2);  /* 0x00297a6c */
bool __fastcall sub_6029855C(int a1);  /* 0x0029855c */
int __fastcall sub_602986D0(int a1, int a2, int a3);  /* 0x002986d0 */
void __fastcall sub_6029951C(int a1);  /* 0x0029951c */
int __fastcall sub_60299850(Actor *a1);  /* 0x00299850 */
int __fastcall sub_6029994C(_DWORD *a1);  /* 0x0029994c */
int __fastcall sub_60299B20(int a1);  /* 0x00299b20 */
int __fastcall sub_60299D08(int a1);  /* 0x00299d08 */
int __fastcall sub_60299FD0(int a1, float *a2);  /* 0x00299fd0 */
int __fastcall dokan_touch_ref_2(int a1);  /* 0x0029a9a8 */
int __fastcall Actor_kapipe_Piranha_furawa_build(int a1);  /* 0x0029adc0 */
int __fastcall SE_EMY_ref(int32x4_t *a1);  /* 0x0029d4c4 */
int __fastcall sub_6029DDD8(int a1);  /* 0x0029ddd8 */
int __fastcall Thwomp_updateModel(float *a1);  /* 0x0029e02c */
bool __fastcall sub_6029E430(int a1);  /* 0x0029e430 */
int __fastcall sub_6029F478(int a1);  /* 0x0029f478 */
int __fastcall sub_6029F5DC(_DWORD *a1);  /* 0x0029f5dc */
int __fastcall sub_6029F94C(int a1);  /* 0x0029f94c */
int __fastcall SE_OBJ_CMN_TOUCH_THUNDER_ref_2(int a1, int a2);  /* 0x002a002c */
int __fastcall sub_602A10D0(int a1);  /* 0x002a10d0 */
bool __fastcall sub_602A1F74(int a1);  /* 0x002a1f74 */
bool __fastcall sub_602A25C0(int a1);  /* 0x002a25c0 */
int __fastcall sub_602A25F8(int result);  /* 0x002a25f8 */
int __fastcall sub_602A2DA0(int a1);  /* 0x002a2da0 */
int __fastcall sub_602A3124(int a1, int a2);  /* 0x002a3124 */
int __fastcall sub_602A3178(_DWORD *a1);  /* 0x002a3178 */
void __fastcall sub_602A3250(int a1, int a2);  /* 0x002a3250 */
int __fastcall sub_602A3358(int a1, int a2);  /* 0x002a3358 */
int __fastcall sub_602A3520(float *a1, int a2, int a3);  /* 0x002a3520 */
int __fastcall sub_602A358C(float *a1, unsigned int a2, int a3, unsigned int a4, int a5);  /* 0x002a358c */
int __fastcall sub_602A38A4(int a1, int *a2);  /* 0x002a38a4 */
int __fastcall ActorScaler_execute(int a1);  /* 0x002a3f10 */
int __fastcall sub_602A3F7C(int a1, int a2);  /* 0x002a3f7c */
int __fastcall ActorScaler_getOwnerScale(int a1);  /* 0x002a3fec */
int __fastcall sub_602A52A0(int *a1);  /* 0x002a52a0 */
unsigned __int64 __fastcall sub_602A546C(int **a1);  /* 0x002a546c */
bool __fastcall sub_602A5688(int a1);  /* 0x002a5688 */
int __fastcall sub_602A58B4(int a1, int a2);  /* 0x002a58b4 */
int __fastcall Enemy_killSpin(int a1, int a2);  /* 0x002a5ae8 */
int __fastcall sub_602A5EF4(float *a1, int a2);  /* 0x002a5ef4 */
int __fastcall sub_602A6024(int a1, int a2, char a3, char a4);  /* 0x002a6024 */
int __fastcall sub_602A63E4(int a1, int a2, int a3, char a4, char a5);  /* 0x002a63e4 */
int __fastcall Enemy_killYoshi(int a1, int a2);  /* 0x002a66f8 */
int __fastcall sub_602A6C70(float *a1, float a2, int a3, int a4);  /* 0x002a6c70 */
int __fastcall Enemy_killWithState(int a1, int a2, _DWORD *a3, int a4);  /* 0x002a7164 */
int __fastcall sub_602A74C0(int a1);  /* 0x002a74c0 */
int __fastcall sub_602A75C4(int a1, int a2);  /* 0x002a75c4 */
int __fastcall sub_602A7624(int a1);  /* 0x002a7624 */
int __fastcall sub_602A7BAC(int a1, int a2);  /* 0x002a7bac */
void __fastcall sub_602A7CEC(char *a1);  /* 0x002a7cec */
int __fastcall sub_602A8254(int a1);  /* 0x002a8254 */
int __fastcall StateVirtual_Enemy_dtorFree(int a1);  /* 0x002a82e8 */
int __fastcall StateVirtual_Enemy_getId(int a1);  /* 0x002a82ec */
int __fastcall sub_602A852C(int a1, _DWORD *a2);  /* 0x002a852c */
int __fastcall sub_602A8904(int a1, _DWORD *a2);  /* 0x002a8904 */
int __fastcall sub_602A8B10(int a1, _DWORD *a2);  /* 0x002a8b10 */
int __fastcall sub_602A8C84(int a1);  /* 0x002a8c84 */
int __fastcall sub_602A8EE0(int a1);  /* 0x002a8ee0 */
int __fastcall sub_602A8FA4(int a1, int a2);  /* 0x002a8fa4 */
int __fastcall sub_602AAAB0(int *a1);  /* 0x002aaab0 */
int __fastcall SE_EMY_FIRE_SNAKE_EXTINCT_ref(int a1);  /* 0x002aba70 */
int __fastcall FireSnake_ctor(int a1);  /* 0x002abde8 */
int __fastcall sub_602AC53C(int *a1);  /* 0x002ac53c */
int __fastcall sub_602AC6EC(int a1);  /* 0x002ac6ec */
int __fastcall sub_602ACF44(int a1);  /* 0x002acf44 */
int __fastcall sub_602AD28C(int a1);  /* 0x002ad28c */
int __fastcall sub_602ADA1C(float *a1);  /* 0x002ada1c */
void __fastcall sub_602AEF18(int a1, int a2, int a3);  /* 0x002aef18 */
int __fastcall sub_602AEFE0(int **a1);  /* 0x002aefe0 */
int __fastcall sub_602AF064(int **a1);  /* 0x002af064 */
int __fastcall sub_602AF0E4(int *a1);  /* 0x002af0e4 */
int __fastcall sub_602AF1E0(_DWORD **a1);  /* 0x002af1e0 */
int __fastcall sub_602AF2DC(int a1);  /* 0x002af2dc */
int __fastcall Actor_fishubon_build(_DWORD *a1);  /* 0x002af438 */
int __fastcall sub_602B06E0(_DWORD *a1);  /* 0x002b06e0 */
int __fastcall sub_602B0F2C(int a1);  /* 0x002b0f2c */
bool __fastcall sub_602B13EC(int a1);  /* 0x002b13ec */
int __fastcall sub_602B14EC(int a1);  /* 0x002b14ec */
int __fastcall sub_602B17D4(int result);  /* 0x002b17d4 */
int __fastcall SE_EMY_FISHBONE_BREAK_ref_3(int a1, int a2, int a3);  /* 0x002b1ac8 */
int __fastcall pakkun_water_ref(int a1);  /* 0x002b3e84 */
int __fastcall sub_602B413C(float *a1);  /* 0x002b413c */
bool __fastcall sub_602B45E8(int a1);  /* 0x002b45e8 */
bool __fastcall sub_602B46E4(int a1);  /* 0x002b46e4 */
int __fastcall sub_602B4874(int a1);  /* 0x002b4874 */
int __fastcall sub_602B584C(_DWORD *a1);  /* 0x002b584c */
int __fastcall sub_602B5A20(int a1);  /* 0x002b5a20 */
int __fastcall Actor_kafugumannen_build(int a1);  /* 0x002b62c0 */
int __fastcall sub_602B79E4(_DWORD *a1);  /* 0x002b79e4 */
int __fastcall sub_602B7AF8(int a1);  /* 0x002b7af8 */
int __fastcall sub_602B80E4(int a1);  /* 0x002b80e4 */
int __fastcall sub_602B86C4(int a1, int *a2, int a3);  /* 0x002b86c4 */
int __fastcall SE_EMY_GABON_ROCK_ref(unsigned __int8 *a1);  /* 0x002ba02c */
int __fastcall sub_602BA470(_DWORD *a1);  /* 0x002ba470 */
int __fastcall sub_602BA5F0(int a1);  /* 0x002ba5f0 */
int __fastcall sub_602BAB5C(int a1, int a2);  /* 0x002bab5c */
int __fastcall sub_602BB2F8(int a1);  /* 0x002bb2f8 */
int __fastcall sub_602BB404(int a1);  /* 0x002bb404 */
int __fastcall sub_602BB4E0(int a1);  /* 0x002bb4e0 */
int __fastcall sub_602BB5CC(int a1);  /* 0x002bb5cc */
int __fastcall sub_602C1A20(int a1);  /* 0x002c1a20 */
int __fastcall sub_602C1B2C(int a1, int a2, int a3);  /* 0x002c1b2c */
int __fastcall sub_602C1BE0(int a1, int a2);  /* 0x002c1be0 */
int __fastcall sub_602C1F6C(int a1);  /* 0x002c1f6c */
int __fastcall sub_602C2130(int result);  /* 0x002c2130 */
int __fastcall sub_602C2178(int a1);  /* 0x002c2178 */
int __fastcall sub_602C22A8(int a1);  /* 0x002c22a8 */
int __fastcall sub_602C2494(int a1);  /* 0x002c2494 */
int __fastcall sub_602C2A98(int a1, int a2, int a3);  /* 0x002c2a98 */
bool __fastcall sub_602C2BD4(int a1);  /* 0x002c2bd4 */
int __fastcall sub_602C3178(int a1);  /* 0x002c3178 */
void __fastcall sub_602C33AC(int a1);  /* 0x002c33ac */
int __fastcall sub_602C340C(int a1);  /* 0x002c340c */
int __fastcall sub_602C409C(int a1);  /* 0x002c409c */
int __fastcall sub_602C43CC(int result, int a2);  /* 0x002c43cc */
int __fastcall sub_602C4404(int a1);  /* 0x002c4404 */
int __fastcall sub_602C44A4(int a1);  /* 0x002c44a4 */
bool __fastcall sub_602C583C(int a1);  /* 0x002c583c */
int __fastcall SE_OBJ_TEKKYU_CRASH_ref(int a1);  /* 0x002c6524 */
int __fastcall sub_602C6B90(int a1);  /* 0x002c6b90 */
int __fastcall SE_OBJ_TEKKYU_ROLL_ref(int a1);  /* 0x002c7ab0 */
int __fastcall sub_602C7F08(int a1);  /* 0x002c7f08 */
int __fastcall SE_OBJ_TEKKYU_L_CRASH_ref(int a1);  /* 0x002c8fc0 */
int __fastcall SE_OBJ_TEKKYU_L_ROLL_ref(int a1);  /* 0x002c97dc */
int __fastcall sub_602CA078(int a1);  /* 0x002ca078 */
int __fastcall sub_602CA1DC(int a1);  /* 0x002ca1dc */
int __fastcall sub_602CAE24(int a1);  /* 0x002cae24 */
void __fastcall sub_602CAEE4(int a1);  /* 0x002caee4 */
int __fastcall sub_602CB180(int a1, int a2, unsigned int a3);  /* 0x002cb180 */
int __fastcall sub_602CB34C(int *a1);  /* 0x002cb34c */
void __fastcall sub_602CB83C(int a1);  /* 0x002cb83c */
int __fastcall sub_602CB904(_DWORD *a1);  /* 0x002cb904 */
int __fastcall flower_2_ref(int a1);  /* 0x002cd574 */
int __fastcall hanachan_head_ref(_DWORD *a1, int a2);  /* 0x002cdf6c */
int __fastcall sub_602CE894(int a1);  /* 0x002ce894 */
void __fastcall sub_602CEEB8(int a1);  /* 0x002ceeb8 */
int __fastcall sub_602CF048(int *a1, int a2, int a3);  /* 0x002cf048 */
int __fastcall sub_602CF5A4(int a1, _DWORD *a2);  /* 0x002cf5a4 */
int __fastcall sub_602D00A4(int a1);  /* 0x002d00a4 */
int __fastcall sub_602D0278(int a1, float *a2);  /* 0x002d0278 */
int __fastcall sub_602D040C(int a1, int a2, int a3);  /* 0x002d040c */
void __fastcall sub_602D1450(_DWORD *a1);  /* 0x002d1450 */
int __fastcall sub_602D1614(int a1, int a2, int a3, int a4, int a5);  /* 0x002d1614 */
int __fastcall sub_602D17E0(int a1, float *a2, int *a3);  /* 0x002d17e0 */
int __fastcall sub_602D1910(int a1, int a2);  /* 0x002d1910 */
int __fastcall sub_602D1B04(int a1);  /* 0x002d1b04 */
int __fastcall sub_602D1D84(int a1, int a2, int a3, int a4);  /* 0x002d1d84 */
int __fastcall sub_602D1DFC(int a1);  /* 0x002d1dfc */
int __fastcall sub_602D1F80(int a1);  /* 0x002d1f80 */
int __fastcall sub_602D25C0(int a1, int a2, int a3, int a4);  /* 0x002d25c0 */
int __fastcall jump_attack_ref(int a1);  /* 0x002d3db4 */
int __fastcall jump_attack_ed_ref(int a1);  /* 0x002d4188 */
int __fastcall SledgeBro_ctor(int a1);  /* 0x002d5210 */
int __fastcall sub_602D5890(int a1);  /* 0x002d5890 */
int __fastcall sub_602D59A8(_DWORD *a1);  /* 0x002d59a8 */
int __fastcall sub_602D5DF0(int a1);  /* 0x002d5df0 */
int __fastcall sub_602D5EF8(int a1);  /* 0x002d5ef8 */
int __fastcall SumoBro_StunPlayers(unsigned __int8 *a1);  /* 0x002d6764 */
int __fastcall sub_602D7E88(int a1, int a2, int a3);  /* 0x002d7e88 */
int __fastcall SE_EMY_BONE_MET_ref(int a1);  /* 0x002d8540 */
int __fastcall sub_602DA2D8(int a1);  /* 0x002da2d8 */
int __fastcall sub_602DABE8(_DWORD *a1);  /* 0x002dabe8 */
int __fastcall sub_602DADF4(int a1);  /* 0x002dadf4 */
int __fastcall sub_602DB234(int a1);  /* 0x002db234 */
int __fastcall sub_602DB344(int a1);  /* 0x002db344 */
int __fastcall sub_602DB46C(int a1);  /* 0x002db46c */
int __fastcall sub_602DB924(float *a1);  /* 0x002db924 */
bool __fastcall sub_602DC370(int a1);  /* 0x002dc370 */
int __fastcall sub_602DC488(int a1, int a2, int *a3, int a4);  /* 0x002dc488 */
int __fastcall sub_602DD938(int result, int a2, int a3);  /* 0x002dd938 */
int __fastcall sub_602DF044(int a1);  /* 0x002df044 */
int __fastcall sub_602DF4E0(int a1);  /* 0x002df4e0 */
int __fastcall sub_602DF630(_DWORD *a1);  /* 0x002df630 */
int __fastcall sub_602DF778(int a1);  /* 0x002df778 */
int __fastcall sub_602DFA98(_DWORD *a1, int a2);  /* 0x002dfa98 */
int __fastcall sub_602DFB00(int result);  /* 0x002dfb00 */
int __fastcall sub_602DFC0C(_DWORD *a1, _DWORD *a2, int *a3);  /* 0x002dfc0c */
int __fastcall sub_602DFC80(int *a1, int a2, int a3);  /* 0x002dfc80 */
int __fastcall sub_602E1370(int a1);  /* 0x002e1370 */
int __fastcall sub_602E175C(int a1);  /* 0x002e175c */
void __fastcall sub_602E209C(int a1);  /* 0x002e209c */
unsigned int __fastcall sub_602E25E4(int a1);  /* 0x002e25e4 */
unsigned __int32 __fastcall sub_602E26AC(_DWORD *a1);  /* 0x002e26ac */
int __fastcall sub_602E2CE0(int a1);  /* 0x002e2ce0 */
int __fastcall sub_602E2F10(int result);  /* 0x002e2f10 */
bool __fastcall sub_602E3034(int a1);  /* 0x002e3034 */
int __fastcall sub_602E3270(int a1, float *a2);  /* 0x002e3270 */
int __fastcall sub_602E3590(int a1, int a2);  /* 0x002e3590 */
int __fastcall sub_602E3714(int a1);  /* 0x002e3714 */
int __fastcall sub_602E3888(int a1);  /* 0x002e3888 */
int __fastcall sub_602E4998(int a1, int a2);  /* 0x002e4998 */
int __fastcall sub_602E4BC8(int result, int a2, int a3, int a4);  /* 0x002e4bc8 */
int __fastcall sub_602E4CF4(int a1, int a2);  /* 0x002e4cf4 */
void __fastcall sub_602E5E3C(int a1);  /* 0x002e5e3c */
int __fastcall sub_602E5FF0(int a1);  /* 0x002e5ff0 */
int __fastcall sub_602E6290(_DWORD *a1, int a2, int a3);  /* 0x002e6290 */
int __fastcall sub_602E6444(_DWORD **a1, float *a2, int a3, float *a4, int a5);  /* 0x002e6444 */
int __fastcall sub_602E6B18(int result);  /* 0x002e6b18 */
int __fastcall sub_602E6CD4(_DWORD *a1);  /* 0x002e6cd4 */
int __fastcall sub_602E6D20(_DWORD *a1);  /* 0x002e6d20 */
int __fastcall sub_602E6DDC(_DWORD *a1);  /* 0x002e6ddc */
int __fastcall sub_602E6E24(_DWORD *a1, int a2, int a3);  /* 0x002e6e24 */
int __fastcall sub_602E6EF0(_DWORD *a1);  /* 0x002e6ef0 */
int __fastcall sub_602E6F24(_DWORD *a1);  /* 0x002e6f24 */
int __fastcall sub_602E6F88(int result);  /* 0x002e6f88 */
int __fastcall sub_602EB130(int a1);  /* 0x002eb130 */
int __fastcall sub_602ED9C4(int a1, float *a2);  /* 0x002ed9c4 */
int __fastcall sub_602EDA9C(int a1);  /* 0x002eda9c */
int __fastcall sub_602EDD20(int a1, float *a2, unsigned int *a3);  /* 0x002edd20 */
int __fastcall sub_602EDE70(int a1);  /* 0x002ede70 */
int __fastcall IceActor_setScale(int a1, float *a2);  /* 0x002ee238 */
int __fastcall sub_602EE480(int a1);  /* 0x002ee480 */
int __fastcall sub_602EE580(int a1);  /* 0x002ee580 */
int __fastcall sub_602EE7D8(int a1, int a2, unsigned int a3, int a4);  /* 0x002ee7d8 */
bool __fastcall sub_602EE904(int a1);  /* 0x002ee904 */
int __fastcall sub_602EE940(int a1);  /* 0x002ee940 */
int __fastcall sub_602EEF20(int a1, int a2, int a3);  /* 0x002eef20 */
int __fastcall sub_602EF2C8(int a1);  /* 0x002ef2c8 */
int __fastcall sub_602EF368(int a1);  /* 0x002ef368 */
int __fastcall sub_602EF61C(int a1, float *a2);  /* 0x002ef61c */
int __fastcall sub_602F0518(int a1);  /* 0x002f0518 */
int __fastcall sub_602F05E4(int a1, int a2, int a3);  /* 0x002f05e4 */
int __fastcall sub_602F06BC(int a1, int a2, int a3);  /* 0x002f06bc */
int __fastcall sub_602F07A4(int a1, int a2, int a3);  /* 0x002f07a4 */
int __fastcall sub_602F08CC(int a1, unsigned __int8 *a2);  /* 0x002f08cc */
int __fastcall sub_602F0A90(int a1, int a2, int a3);  /* 0x002f0a90 */
int __fastcall sub_602F27AC(int result, int a2, int a3);  /* 0x002f27ac */
int __fastcall sub_602F296C(int result, int a2);  /* 0x002f296c */
int __fastcall sub_602F2BF8(int a1, int a2, int a3, int a4, _DWORD *a5);  /* 0x002f2bf8 */
int __fastcall sub_602F2C84(int a1);  /* 0x002f2c84 */
int __fastcall sub_602F2F3C(int a1, char a2, float *a3);  /* 0x002f2f3c */
int __fastcall sub_602F2FD0(int a1, int *a2, int a3);  /* 0x002f2fd0 */
int __fastcall sub_602F31A0(int a1, int *a2, int a3);  /* 0x002f31a0 */
int __fastcall sub_602F322C(int a1, int *a2, unsigned int a3, _DWORD *a4);  /* 0x002f322c */
int __fastcall sub_602F3280(int a1, int *a2);  /* 0x002f3280 */
int __fastcall sub_602F32F8(_BYTE *a1, int *a2, unsigned int a3, _DWORD *a4);  /* 0x002f32f8 */
int __fastcall sub_602F335C(_BYTE *a1, int *a2, unsigned int a3);  /* 0x002f335c */
int __fastcall sub_602F3414(_BYTE *a1, float *a2, float *a3, unsigned int a4);  /* 0x002f3414 */
int __fastcall EnemyFreezeMgr_ctor(int a1, int a2);  /* 0x002f35a4 */
int __fastcall EnemyFreezeMgr_setFlags(int result, char *a2);  /* 0x002f36ac */
int __fastcall sub_602F3750(_BYTE *a1);  /* 0x002f3750 */
int __fastcall sub_602F37B0(int a1);  /* 0x002f37b0 */
int __fastcall sub_602F389C(int a1);  /* 0x002f389c */
int __fastcall sub_602F3978(unsigned __int8 *a1);  /* 0x002f3978 */
int __fastcall sub_602F3BA0(unsigned __int8 *a1);  /* 0x002f3ba0 */
int __fastcall sub_602F3D20(int result);  /* 0x002f3d20 */
int __fastcall EnemyFreezeMgr_freeze(int a1, int a2, unsigned int a3);  /* 0x002f3e4c */
int __fastcall sub_602F4044(int result);  /* 0x002f4044 */
int __fastcall sub_602F4160(int result);  /* 0x002f4160 */
int __fastcall sub_602F43B8(int a1);  /* 0x002f43b8 */
int __fastcall sub_602F4590(unsigned int *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x002f4590 */
int __fastcall sub_602F46EC(unsigned int *a1);  /* 0x002f46ec */
int __fastcall sub_602F4740(unsigned int *a1, float *a2);  /* 0x002f4740 */
int __fastcall SE_EMY_IGAKURIBO_CLOSE_ref(int a1);  /* 0x002f4e74 */
int __fastcall sub_602F5ED8(int a1);  /* 0x002f5ed8 */
int __fastcall sub_602F6080(int a1);  /* 0x002f6080 */
int __fastcall sub_602F64CC(int a1);  /* 0x002f64cc */
int __fastcall Actor_raitokurage_build(_DWORD *a1);  /* 0x002f7d40 */
int __fastcall sub_602F8DB0(int a1, _DWORD *a2);  /* 0x002f8db0 */
int __fastcall sub_602F91A4(int a1);  /* 0x002f91a4 */
int __fastcall sub_602F94B8(int a1);  /* 0x002f94b8 */
int __fastcall sub_602F9CF8(int a1);  /* 0x002f9cf8 */
int __fastcall sub_602FA0D4(int result, int a2);  /* 0x002fa0d4 */
float __fastcall sub_602FA1EC(_DWORD *a1, int a2);  /* 0x002fa1ec */
int __fastcall eye_anim_ref(int a1);  /* 0x002fa518 */
int __fastcall sub_602FA5DC(_DWORD *a1, int a2);  /* 0x002fa5dc */
int __fastcall eye_anim_ref_2(_DWORD *a1);  /* 0x002fa80c */
int __fastcall sub_602FABD8(float *a1, unsigned int a2);  /* 0x002fabd8 */
bool __fastcall sub_602FD158(int a1, int a2, int a3);  /* 0x002fd158 */
int __fastcall sub_602FD474(int a1);  /* 0x002fd474 */
int __fastcall sub_602FE478(int a1);  /* 0x002fe478 */
int __fastcall sub_602FEC74(int a1);  /* 0x002fec74 */
bool __fastcall sub_602FFA84(Actor *a1);  /* 0x002ffa84 */
int __fastcall sub_602FFAD8(int a1);  /* 0x002ffad8 */
int __fastcall fire_wait_up_ref(int a1);  /* 0x002ffcc8 */

/* ---- actors_b.c ---- */
unsigned __int32 __fastcall sub_60300044(int a1);  /* 0x00300044 */
int __fastcall sub_603005B0(int a1);  /* 0x003005b0 */
int __fastcall sub_603005F4(int a1, int a2);  /* 0x003005f4 */
int __fastcall sub_60300AA0(int a1);  /* 0x00300aa0 */
int __fastcall sub_60300AE4(int a1, _DWORD *a2);  /* 0x00300ae4 */
int __fastcall sub_60300D18(int a1);  /* 0x00300d18 */
int __fastcall sub_60301B94(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x00301b94 */
int __fastcall sub_60302F60(_DWORD *a1);  /* 0x00302f60 */
int __fastcall sub_6030309C(int a1);  /* 0x0030309c */
int __fastcall sub_603035FC(int a1, int a2, int a3, int a4);  /* 0x003035fc */
int __fastcall sub_6030413C(int a1);  /* 0x0030413c */
int __fastcall sub_60304350(int a1);  /* 0x00304350 */
int __fastcall sub_6030453C(int a1);  /* 0x0030453c */
int __fastcall sub_60304738(_DWORD *a1);  /* 0x00304738 */
int __fastcall sub_603048F4(_DWORD *a1);  /* 0x003048f4 */
int __fastcall sub_60304AB8(_DWORD *a1);  /* 0x00304ab8 */
int __fastcall sub_60304C74(int a1);  /* 0x00304c74 */
int __fastcall sub_603053A4(int a1);  /* 0x003053a4 */
int __fastcall sub_603058D4(int a1, int a2);  /* 0x003058d4 */
int __fastcall sub_60306810(int a1);  /* 0x00306810 */
int __fastcall SE_EMY_JUGEM_APP_ref_2(int a1);  /* 0x00306d50 */
int __fastcall sub_60308B44(_DWORD *a1);  /* 0x00308b44 */
int __fastcall sub_60309174(int a1, int a2, int a3);  /* 0x00309174 */
int __fastcall sub_60309604(_DWORD *a1);  /* 0x00309604 */
int __fastcall sub_60309918(float *a1, _DWORD *a2, _DWORD *a3);  /* 0x00309918 */
int __fastcall pakkun_tane_ref(unsigned int *a1);  /* 0x0030a988 */
int __fastcall sub_6030AFA4(_DWORD *a1);  /* 0x0030afa4 */
int __fastcall sub_6030B11C(int a1);  /* 0x0030b11c */
signed int __fastcall sub_6030BECC(int a1);  /* 0x0030becc */
int __fastcall sub_6030C40C(int a1);  /* 0x0030c40c */
int __fastcall sub_6030D1EC(int a1, unsigned int a2);  /* 0x0030d1ec */
int __fastcall sub_6030D498(int a1, unsigned int a2);  /* 0x0030d498 */
int __fastcall sub_6030D7A4(int a1, int a2);  /* 0x0030d7a4 */
int __fastcall sub_6030DC78(int a1, unsigned int a2);  /* 0x0030dc78 */
int __fastcall sub_6030F9FC(int a1);  /* 0x0030f9fc */
int __fastcall sub_603101A4(int result, int a2, int a3);  /* 0x003101a4 */
int __fastcall DryBones_beginState_Walk(int a1);  /* 0x00312034 */
int __fastcall DryBones_executeState_Walk(_BYTE *a1);  /* 0x0031215c */
int __fastcall DryBones_beginState_Turn(int a1);  /* 0x003124f8 */
int __fastcall DryBones_executeState_Turn(int a1);  /* 0x00312618 */
int __fastcall big_stop_ref(int *a1);  /* 0x00312768 */
int __fastcall sub_603128EC(int a1);  /* 0x003128ec */
int __fastcall sub_60314424(int a1);  /* 0x00314424 */
int __fastcall sub_6031467C(int a1, _DWORD *a2, int a3);  /* 0x0031467c */
int __fastcall sub_60314EA0(int a1);  /* 0x00314ea0 */
int __fastcall sub_60315140(int a1);  /* 0x00315140 */
int __fastcall sub_603155DC(int a1);  /* 0x003155dc */
int __fastcall sub_60315974(int a1, int a2, int a3);  /* 0x00315974 */
int __fastcall sub_60316180(int a1, int a2, int a3, int a4);  /* 0x00316180 */
int __fastcall DryBones_checkCollapse(int a1);  /* 0x00316e28 */
int __fastcall sub_60316F50(int a1);  /* 0x00316f50 */
int __fastcall sub_603171E8(int a1);  /* 0x003171e8 */
int __fastcall sub_6031776C(int a1);  /* 0x0031776c */
int __fastcall head_anim_ref(int a1);  /* 0x00318654 */
int __fastcall SE_EMY_BIG_KALON_REVIVAL_HEAD_ref(int a1);  /* 0x00318a38 */
int __fastcall SE_EMY_BIG_KALON_REVIVAL_HEAD_ref_2(int a1);  /* 0x00318d24 */
int __fastcall sub_6031962C(int a1);  /* 0x0031962c */
int __fastcall sub_603197BC(int a1);  /* 0x003197bc */
int __fastcall SE_EMY_DOWN_SYNC_1_ref(int a1);  /* 0x00319d24 */
int __fastcall sub_60319E30(int a1);  /* 0x00319e30 */
int __fastcall sub_6031A028(int a1);  /* 0x0031a028 */
unsigned int __fastcall sub_6031AC74(int a1, int a2);  /* 0x0031ac74 */
int __fastcall sub_6031B2DC(int a1, int a2);  /* 0x0031b2dc */
int __fastcall sub_6031B374(int a1);  /* 0x0031b374 */
int __fastcall sub_6031B7A0(int a1);  /* 0x0031b7a0 */
int __fastcall sub_6031B8F4(int a1);  /* 0x0031b8f4 */
int __fastcall sub_6031BCBC(int a1);  /* 0x0031bcbc */
int __fastcall SE_EMY_KERONPA_ALARM_ref(int32x4_t *a1);  /* 0x0031c0d0 */
int __fastcall sub_6031C22C(int a1);  /* 0x0031c22c */
int __fastcall sub_6031C374(int a1);  /* 0x0031c374 */
bool __fastcall sub_6031C45C(int a1);  /* 0x0031c45c */
unsigned int __fastcall attack_md_ref(int a1);  /* 0x0031ca94 */
int __fastcall attack_ed_ref(int a1);  /* 0x0031cf2c */
int __fastcall SE_EMY_KERONPA_FIRE_ref(int a1);  /* 0x0031cfe0 */
int __fastcall sub_6031D3D0(int32x4_t *a1);  /* 0x0031d3d0 */
int __fastcall sub_6031DB1C(int a1, int a2, int a3);  /* 0x0031db1c */
int __fastcall sub_6031DEB0(int a1);  /* 0x0031deb0 */
int __fastcall sub_6031E63C(_DWORD *a1);  /* 0x0031e63c */
int __fastcall sub_6031EA54(int a1);  /* 0x0031ea54 */
int __fastcall attack_md_ref_2(_DWORD *a1);  /* 0x0031ef94 */
int __fastcall attack_ed_ref_2(int a1);  /* 0x0031f300 */
int __fastcall SE_EMY_KILLER_CROSS_ref(int32x4_t *a1);  /* 0x0031fe88 */
void __fastcall sub_6032089C(_BYTE *a1);  /* 0x0032089c */
int __fastcall sub_60321050(int a1);  /* 0x00321050 */
int __fastcall BanzaiBill_initColliders(int a1);  /* 0x003212e0 */
void __fastcall sub_6032166C(int a1);  /* 0x0032166c */
int __fastcall sub_60321720(int a1);  /* 0x00321720 */
void __fastcall sub_6032185C(int a1);  /* 0x0032185c */
int __fastcall sub_6032191C(int a1);  /* 0x0032191c */
int __fastcall sub_60321B48(int a1);  /* 0x00321b48 */
int __fastcall sub_60321CD4(int result);  /* 0x00321cd4 */
int __fastcall sub_60321D0C(int result, int a2);  /* 0x00321d0c */
int __fastcall sub_60321DAC(int result);  /* 0x00321dac */
bool __fastcall sub_60321E38(int a1);  /* 0x00321e38 */
int __fastcall sub_60321F58(int a1);  /* 0x00321f58 */
int __fastcall sub_60321FA0(int a1);  /* 0x00321fa0 */
int __fastcall sub_60321FD0(int32x4_t *a1);  /* 0x00321fd0 */
int __fastcall sub_60322150(int32x4_t *a1);  /* 0x00322150 */
int __fastcall sub_6032232C(int a1, int a2, int a3);  /* 0x0032232c */
int __fastcall sub_603251C8(int a1);  /* 0x003251c8 */
int __fastcall sub_60325724(int a1);  /* 0x00325724 */
int __fastcall BillBlaster_onDraw(int a1);  /* 0x00326148 */
int __fastcall BillBlaster_onDelete(int a1);  /* 0x00326298 */
int __fastcall sub_603262C0(int *a1);  /* 0x003262c0 */
int __fastcall sub_60326550(_DWORD *a1);  /* 0x00326550 */
int __fastcall killer_mag_houdai_ref(int a1);  /* 0x00326754 */
int __fastcall sub_60326850(_DWORD *a1);  /* 0x00326850 */
int __fastcall sub_60326A08(int a1);  /* 0x00326a08 */
int __fastcall sub_60326F6C(int a1);  /* 0x00326f6c */
bool __fastcall BillBlaster_checkRTTI(int a1, int a2);  /* 0x00327264 */
void __fastcall BillBlaster_dtor(int a1);  /* 0x00327368 */
int __fastcall BillBlaster_dtorFree(int a1);  /* 0x003273b8 */
int __fastcall SE_EMY_KG_KILLER_SHOT_ref(int a1);  /* 0x0032743c */
bool __fastcall SE_EMY_KG_KILLER_FLY_ref(int32x4_t *a1);  /* 0x00327674 */
int __fastcall sub_60327B64(int a1);  /* 0x00327b64 */
int __fastcall sub_60328098(int a1);  /* 0x00328098 */
int __fastcall sub_60328190(int a1);  /* 0x00328190 */
int __fastcall sub_60328C1C(int a1);  /* 0x00328c1c */
int __fastcall sub_60328FF4(int a1);  /* 0x00328ff4 */
unsigned int __fastcall sub_6032963C(int a1);  /* 0x0032963c */
int __fastcall sub_6032A15C(int a1);  /* 0x0032a15c */
int __fastcall SE_EMY_MG_KILLER_FLY_ref(int32x4_t *a1);  /* 0x0032a7f0 */
int __fastcall BanzaiBill_onCreate(int a1);  /* 0x0032a9dc */
int __fastcall killer_mag_ref(int a1);  /* 0x0032ad28 */
int __fastcall SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref(int32x4_t *a1);  /* 0x0032b1bc */
unsigned int __fastcall sub_6032C0DC(int a1);  /* 0x0032c0dc */
int __fastcall SE_EMY_MG_KILLER_FLY_ref_2(int32x4_t *a1);  /* 0x0032d198 */
int __fastcall sub_6032D740(int a1);  /* 0x0032d740 */
int __fastcall killer_mag_ref_2(_DWORD *a1);  /* 0x0032d918 */
int __fastcall SE_EMY_HUHU_BREATH_IN_ref(int *a1);  /* 0x0032df3c */
int __fastcall SE_EMY_HUHU_BREATH_OUT_ref(int a1);  /* 0x0032e4c0 */
int __fastcall sub_6032EA68(int a1);  /* 0x0032ea68 */
int __fastcall sub_6032FA20(int a1);  /* 0x0032fa20 */
int __fastcall sub_6032FB2C(int a1);  /* 0x0032fb2c */
int __fastcall sub_6033048C(int a1, int a2);  /* 0x0033048c */
int __fastcall sub_603309EC(int a1);  /* 0x003309ec */
int __fastcall SE_EMY_KK_SHIKO_ref(int a1);  /* 0x003323e0 */
int __fastcall sub_603334A8(int a1);  /* 0x003334a8 */
int __fastcall sub_603335B0(int a1);  /* 0x003335b0 */
int __fastcall sub_603336A4(int a1);  /* 0x003336a4 */
int __fastcall sub_603337C8(int a1);  /* 0x003337c8 */
int __fastcall sub_60333938(int a1);  /* 0x00333938 */
int __fastcall sub_60333E90(int a1);  /* 0x00333e90 */
unsigned int __fastcall sub_6033410C(unsigned int result, int a2, int a3);  /* 0x0033410c */
int __fastcall SumoBroLightning_executeState_Down(int a1);  /* 0x00334cac */
int __fastcall SE_OBJ_KK_THUNDER_SEPARATE_ref(int a1);  /* 0x00334ebc */
int __fastcall SumoBroLightning_onCreate(int a1);  /* 0x00335270 */
int __fastcall SE_OBJ_CMN_TOUCH_THUNDER_ref_3(int a1, int a2, int a3);  /* 0x00335804 */
int __fastcall sub_60336E10(int a1);  /* 0x00336e10 */
int __fastcall sub_603370CC(int a1, int a2);  /* 0x003370cc */
int __fastcall sub_60338D58(int a1);  /* 0x00338d58 */
int __fastcall sub_6033A26C(__int64 a1);  /* 0x0033a26c */
int __fastcall sub_6033A830(int a1);  /* 0x0033a830 */
int __fastcall sub_6033AA2C(int a1);  /* 0x0033aa2c */
int __fastcall sub_6033C38C(int a1);  /* 0x0033c38c */
int __fastcall sub_6033C4A8(int a1);  /* 0x0033c4a8 */
int __fastcall sub_6033CF5C(int a1, int a2, int a3);  /* 0x0033cf5c */
int __fastcall sub_6033D008(int a1, _DWORD *a2);  /* 0x0033d008 */
int __fastcall sub_6033FC60(int a1);  /* 0x0033fc60 */
int __fastcall sub_6033FFCC(int a1);  /* 0x0033ffcc */
int __fastcall sub_60340170(int a1);  /* 0x00340170 */
int __fastcall sub_603407D0(int a1, int a2, int a3);  /* 0x003407d0 */
int __fastcall sub_60340870(int a1, int a2, int a3);  /* 0x00340870 */
int __fastcall sub_603411E4(int result);  /* 0x003411e4 */
bool __fastcall sub_6034180C(int a1, float *a2);  /* 0x0034180c */
unsigned int __fastcall sub_60341D2C(_DWORD *a1);  /* 0x00341d2c */
unsigned int __fastcall sub_60342084(_DWORD *a1);  /* 0x00342084 */
int __fastcall sub_60342328(int a1);  /* 0x00342328 */
int __fastcall SE_EMY_CHOROPU_M_OPEN_ref(int a1);  /* 0x003432c8 */
int __fastcall SE_EMY_CHOROPU_M_APP_ref(int a1);  /* 0x00343a64 */
int __fastcall sub_60344BDC(int *a1);  /* 0x00344bdc */
int __fastcall sub_60344DF4(int a1);  /* 0x00344df4 */
int __fastcall sub_603453AC(int a1, int a2, int a3);  /* 0x003453ac */
int __fastcall sub_60345A00(int a1, int a2);  /* 0x00345a00 */
int __fastcall sub_60345D14(int a1);  /* 0x00345d14 */
int __fastcall sub_60345EA4(_DWORD *a1);  /* 0x00345ea4 */
int __fastcall sub_6034600C(int a1, int a2);  /* 0x0034600c */
int __fastcall sub_60346188(int a1);  /* 0x00346188 */
int __fastcall sub_60346400(int a1);  /* 0x00346400 */
int __fastcall sub_603467A4(int a1);  /* 0x003467a4 */
int __fastcall SE_EMY_MECHAKOOPA_DAMAGE_ref(int a1);  /* 0x003477f8 */
int __fastcall SE_EMY_MECHAKOOPA_RESTART_F_ref(int a1);  /* 0x00347b68 */
int __fastcall sub_603483E8(_DWORD *a1);  /* 0x003483e8 */
int __fastcall sub_6034850C(int a1);  /* 0x0034850c */
int __fastcall SE_EMY_MECHAKOOPA_WALK_ref(int a1);  /* 0x00348704 */
bool __fastcall sub_6034891C(int a1);  /* 0x0034891c */
int __fastcall SE_EMY_MECHAKOOPA_DAMAGE_ref_2(int a1, int a2);  /* 0x00348cd0 */
bool __fastcall sub_6034933C(int a1);  /* 0x0034933c */
int __fastcall sub_6034946C(int a1);  /* 0x0034946c */
int __fastcall Actor_kokaBuzzy_build(unsigned int *a1);  /* 0x00349bf8 */
int __fastcall SE_EMY_REV_KOURA_FALL_ref(int a1);  /* 0x0034a0d4 */
int __fastcall sub_6034AD68(int a1);  /* 0x0034ad68 */
int __fastcall sub_6034AEF8(int a1, unsigned int *a2);  /* 0x0034aef8 */
int __fastcall sub_6034B828(_DWORD *a1);  /* 0x0034b828 */
int __fastcall sub_6034BC18(int a1);  /* 0x0034bc18 */
int __fastcall sub_6034CE90(int a1);  /* 0x0034ce90 */
int __fastcall sub_6034D134(int a1);  /* 0x0034d134 */
int __fastcall sub_6034DC00(int a1);  /* 0x0034dc00 */
int __fastcall SE_EMY_REV_KOURA_FALL_ref_2(int a1, int a2, float *a3);  /* 0x0034e108 */
int __fastcall walk_mini_ref(int a1);  /* 0x0034f168 */
int __fastcall walk_mini_ref_2(int a1);  /* 0x0034f79c */
int __fastcall sub_60351F54(int a1, int a2);  /* 0x00351f54 */
int __fastcall sub_60352120(int result, unsigned int a2);  /* 0x00352120 */
int __fastcall sub_60352424(int a1);  /* 0x00352424 */
bool __fastcall sub_6035288C(int a1);  /* 0x0035288c */
int __fastcall sub_60352988(StageActor *a1);  /* 0x00352988 */
int __fastcall sub_60352A88(int a1, int a2, int a3);  /* 0x00352a88 */
int __fastcall sub_60355C1C(int a1, int a2);  /* 0x00355c1c */
int __fastcall sub_60356538(int a1, int a2);  /* 0x00356538 */
int __fastcall sub_60357164(int a1);  /* 0x00357164 */
int __fastcall sub_60357274(int a1);  /* 0x00357274 */
int __fastcall KoopaTroopa_ctor(_DWORD *a1);  /* 0x0035851c */
int __fastcall sub_60359C04(int a1, _DWORD *a2, int a3);  /* 0x00359c04 */
int __fastcall KoopaTroopa_onCreate(int a1);  /* 0x00359d98 */
int __fastcall sub_6035A168(_DWORD *a1);  /* 0x0035a168 */
int __fastcall sub_6035A5CC(int a1);  /* 0x0035a5cc */
int __fastcall KoopaTroopa_beforeExecute(_DWORD *a1);  /* 0x0035a73c */
int __fastcall sub_6035A898(_DWORD *a1);  /* 0x0035a898 */
int __fastcall KoopaTroopa_onExecute(int a1);  /* 0x0035a97c */
int __fastcall sub_6035ABA0(int a1);  /* 0x0035aba0 */
int __fastcall sub_6035ADF0(int a1);  /* 0x0035adf0 */
int __fastcall KoopaTroopa_onDraw(int a1);  /* 0x0035b0dc */
int __fastcall KoopaTroopa_onDelete(int a1);  /* 0x0035b18c */
int __fastcall sub_6035B2D0(int a1, int a2, int a3);  /* 0x0035b2d0 */
int __fastcall sub_6035B5B0(int a1, int a2, int a3);  /* 0x0035b5b0 */
void __fastcall sub_6035B720(int a1);  /* 0x0035b720 */
int __fastcall SE_EMY_KURIBO_M_DAMAGE_ref_2(int a1, int a2, int a3);  /* 0x0035bbec */
int __fastcall sub_6035C488(ShellEnemy *a1, int a2, int a3, int a4);  /* 0x0035c488 */
int __fastcall sub_6035C5B4(int a1, int a2);  /* 0x0035c5b4 */
bool __fastcall sub_6035C618(int a1);  /* 0x0035c618 */
int __fastcall KoopaTroopa_decideFirstState(int *a1);  /* 0x0035c740 */
int __fastcall sub_6035C96C(int a1, int a2, int a3, int a4);  /* 0x0035c96c */
int __fastcall sub_6035CA00(int a1, int a2);  /* 0x0035ca00 */
int __fastcall sub_6035CAF8(_DWORD *a1);  /* 0x0035caf8 */
int __fastcall sub_6035CC80(int a1);  /* 0x0035cc80 */
int __fastcall sub_6035CD74(int a1);  /* 0x0035cd74 */
int __fastcall KoopaTroopa_endState_Slide(int a1);  /* 0x0035d174 */
int __fastcall KoopaTroopa_executeState_Slide(int a1);  /* 0x0035d18c */
int __fastcall revival_shell_ref(_DWORD *a1);  /* 0x0035d2b0 */
int __fastcall sub_6035D5E4(_BYTE *a1);  /* 0x0035d5e4 */
bool __fastcall sub_6035DB18(int a1);  /* 0x0035db18 */
int __fastcall SE_EMY_TORPEDO_MOVE_ref(int a1);  /* 0x0035e590 */
int __fastcall SE_EMY_TORPEDO_MOVE_ref_2(int a1);  /* 0x0035ebb0 */
int __fastcall SE_EMY_TORPEDO_MOVE_ref_3(int a1);  /* 0x0035f08c */
int __fastcall sub_6035F524(int *a1);  /* 0x0035f524 */
int __fastcall sub_6035F680(int a1);  /* 0x0035f680 */
int __fastcall sub_6035F908(int a1);  /* 0x0035f908 */
void __fastcall sub_6035FB00(int a1);  /* 0x0035fb00 */
int __fastcall Actor_tariporigon_airship_build(int a1);  /* 0x00360888 */
int __fastcall sub_603609D4(int a1);  /* 0x003609d4 */
int __fastcall sub_60360AC0(int a1);  /* 0x00360ac0 */
unsigned int __fastcall sub_60361EF8(int a1, int a2);  /* 0x00361ef8 */
int __fastcall sub_60362120(int *a1);  /* 0x00362120 */
int __fastcall sub_603622B8(int a1);  /* 0x003622b8 */
int __fastcall wing_kuri_ref(_DWORD *a1);  /* 0x00362b90 */
int __fastcall sub_60363110(int a1);  /* 0x00363110 */
int __fastcall sub_60363230(int a1);  /* 0x00363230 */
int __fastcall Actor_gurupupatapata_build(_DWORD *a1);  /* 0x003642ac */
int __fastcall skl_root_shell_ref(int a1);  /* 0x00365468 */
bool __fastcall sub_60365A3C(int a1);  /* 0x00365a3c */
int __fastcall sub_60366FA4(int *a1);  /* 0x00366fa4 */
int __fastcall sub_60367188(int a1);  /* 0x00367188 */
int __fastcall SE_EMY_PENGUIN_DAMAGE_ref(int a1, int a2, int a3);  /* 0x00367600 */
int __fastcall SE_EMY_PENGUIN_PIYO_ref(int a1);  /* 0x003686c8 */
int __fastcall sub_60369198(int a1);  /* 0x00369198 */
int __fastcall sub_6036958C(int a1);  /* 0x0036958c */
int __fastcall sub_6036968C(int a1);  /* 0x0036968c */
int __fastcall sub_60369858(int a1, int a2, int a3);  /* 0x00369858 */
bool __fastcall sub_60369CA0(int a1, int a2, int a3);  /* 0x00369ca0 */
int __fastcall sub_6036A6A8(int a1);  /* 0x0036a6a8 */
bool __fastcall sub_6036A7E8(int a1);  /* 0x0036a7e8 */
int __fastcall sub_6036A904(int a1);  /* 0x0036a904 */
int __fastcall sub_6036AA34(int a1);  /* 0x0036aa34 */
int __fastcall penguin_glasses_ref(int *a1);  /* 0x0036b894 */
int __fastcall sub_6036BA4C(int a1);  /* 0x0036ba4c */
int __fastcall ice_C1_ref(int a1);  /* 0x0036c0f0 */
int __fastcall sub_6036CBDC(int a1);  /* 0x0036cbdc */
int __fastcall sub_6036CFB4(int a1, int a2);  /* 0x0036cfb4 */
int __fastcall sub_6036D184(int a1);  /* 0x0036d184 */
int __fastcall sub_6036D3A8(int a1);  /* 0x0036d3a8 */
int __fastcall sub_6036EBB8(int a1, int a2);  /* 0x0036ebb8 */
int __fastcall sub_6036EF50(int a1);  /* 0x0036ef50 */
int __fastcall sub_6036F208(float *a1);  /* 0x0036f208 */
int __fastcall SE_OBJ_POLTERGEIST_FLY_ref(int a1);  /* 0x0036f3a4 */
int __fastcall sub_6036FC70(int a1);  /* 0x0036fc70 */
int __fastcall sub_6036FD84(int a1);  /* 0x0036fd84 */
bool __fastcall sub_60370004(int a1);  /* 0x00370004 */
int __fastcall sub_603701F4(int a1);  /* 0x003701f4 */
int __fastcall sub_60370B50(int a1);  /* 0x00370b50 */
int __fastcall sub_60371580(_DWORD *a1);  /* 0x00371580 */
int __fastcall sub_603728E8(int a1, _DWORD *a2);  /* 0x003728e8 */
int __fastcall sub_60372D64(int a1);  /* 0x00372d64 */
int __fastcall sub_60372E6C(float *a1);  /* 0x00372e6c */
int __fastcall sub_6037325C(int a1, int a2, int a3, int a4);  /* 0x0037325c */
int __fastcall sub_60373544(int a1, int a2);  /* 0x00373544 */
bool __fastcall sub_603736AC(int a1);  /* 0x003736ac */
int __fastcall sub_603739E4(float *a1, int a2, int a3);  /* 0x003739e4 */
int __fastcall sub_60373A6C(int a1, int a2, int a3);  /* 0x00373a6c */
int __fastcall sub_60373ADC(int result);  /* 0x00373adc */
int __fastcall sub_60373B2C(int result);  /* 0x00373b2c */
int __fastcall sub_60373B78(int a1, int a2, int a3, int a4);  /* 0x00373b78 */
int __fastcall sub_60373CE4(int a1);  /* 0x00373ce4 */
int __fastcall Actor_gurupupukupukumanage_Tag_build(int a1);  /* 0x00374458 */
int __fastcall sub_60374F80(int a1, int a2);  /* 0x00374f80 */
int __fastcall sub_603752D8(int a1, int a2, int a3);  /* 0x003752d8 */
int __fastcall sub_60375824(int a1);  /* 0x00375824 */
int __fastcall sub_60375E24(int a1);  /* 0x00375e24 */
int __fastcall sub_603771C8(int a1);  /* 0x003771c8 */
int __fastcall sub_603772C4(_DWORD *a1);  /* 0x003772c4 */
int __fastcall sub_60377564(int result);  /* 0x00377564 */
bool __fastcall sub_60377730(int a1, int a2);  /* 0x00377730 */
signed int __fastcall sub_603778B4(int a1, unsigned int a2, unsigned __int8 **a3);  /* 0x003778b4 */
int __fastcall sub_60377B20(int a1, int a2, unsigned int a3);  /* 0x00377b20 */
int __fastcall sub_60377B58(int a1, int a2, _BYTE *a3, int a4, int *a5);  /* 0x00377b58 */
bool __fastcall sub_60377C40(int a1);  /* 0x00377c40 */
bool __fastcall sub_60377C74(int a1);  /* 0x00377c74 */
int __fastcall sub_60377CA8(int a1, int a2);  /* 0x00377ca8 */
int __fastcall sub_60377CF4(int a1, int a2);  /* 0x00377cf4 */
int __fastcall sub_60377D44(int a1, int a2);  /* 0x00377d44 */
int __fastcall sub_60377D94(int a1, unsigned int *a2);  /* 0x00377d94 */
bool __fastcall sub_60377E2C(int a1);  /* 0x00377e2c */
bool __fastcall sub_60377F40(int a1);  /* 0x00377f40 */
int __fastcall sub_60378BC4(int a1, int *a2);  /* 0x00378bc4 */
bool __fastcall sub_60378D34(int a1);  /* 0x00378d34 */
int __fastcall sub_60378E68(int a1);  /* 0x00378e68 */
int __fastcall sub_60378FD4(int a1, int *a2, int a3);  /* 0x00378fd4 */
int __fastcall sub_6037909C(_DWORD *a1);  /* 0x0037909c */
int __fastcall sub_603791A0(int *a1);  /* 0x003791a0 */
bool __fastcall sub_60379604(int a1, unsigned int a2);  /* 0x00379604 */
int __fastcall sub_60379668(int a1);  /* 0x00379668 */
int __fastcall sub_603796A4(int a1);  /* 0x003796a4 */
int __fastcall sub_603796DC(_DWORD *a1, int a2);  /* 0x003796dc */
int __fastcall sub_603797F8(int result);  /* 0x003797f8 */
int __fastcall sub_60379890(int a1, int a2, int a3);  /* 0x00379890 */
int __fastcall sub_60379A50(unsigned int *a1, float *a2, int (__fastcall *a3)(int));  /* 0x00379a50 */
unsigned int __fastcall sub_6037A010(int a1, unsigned int a2);  /* 0x0037a010 */
bool __fastcall sub_6037A800(int a1);  /* 0x0037a800 */
int __fastcall gabon_rock_ref(int a1);  /* 0x0037ac44 */
int __fastcall sub_6037CD68(int a1);  /* 0x0037cd68 */
int __fastcall sub_6037EF94(int a1);  /* 0x0037ef94 */
int __fastcall sub_60380A04(int a1);  /* 0x00380a04 */
int __fastcall sub_60380F6C(int a1);  /* 0x00380f6c */
int __fastcall sub_603812B4(int a1);  /* 0x003812b4 */
int __fastcall sub_60381950(int a1, int a2);  /* 0x00381950 */
int __fastcall sub_60381BAC(unsigned int *a1, int a2, unsigned int a3);  /* 0x00381bac */
int __fastcall sub_60381D18(int a1, int a2, unsigned int a3);  /* 0x00381d18 */
unsigned int __fastcall sub_60381F48(int a1, unsigned int a2);  /* 0x00381f48 */
int __fastcall sub_603823D4(int a1, int a2);  /* 0x003823d4 */
bool __fastcall sub_6038397C(int a1);  /* 0x0038397c */
int __fastcall sub_60383BAC(int a1, int a2);  /* 0x00383bac */
int __fastcall sub_60383EAC(int a1, int a2);  /* 0x00383eac */
int __fastcall sub_603841C8(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003841c8 */
int __fastcall sub_60384458(int a1, int a2);  /* 0x00384458 */
int __fastcall sub_60385760(int a1);  /* 0x00385760 */
int __fastcall sub_60386364(int a1, float *a2, unsigned int a3, int a4);  /* 0x00386364 */
int __fastcall sub_60386480(int result, int a2, char a3, int a4);  /* 0x00386480 */
int __fastcall sub_603864C4(_DWORD *a1);  /* 0x003864c4 */
int __fastcall sub_60386654(char *a1, int a2);  /* 0x00386654 */
int __fastcall SE_EMY_SANBO_LAND_ref(int a1);  /* 0x003868e4 */
int __fastcall sub_60386CF4(_DWORD *a1);  /* 0x00386cf4 */
bool __fastcall sub_603874A8(int a1, int a2);  /* 0x003874a8 */
int __fastcall sub_60387714(int a1);  /* 0x00387714 */
int __fastcall sub_60387754(int a1, int a2, int a3);  /* 0x00387754 */
int __fastcall sub_603877D4(float *a1, int a2);  /* 0x003877d4 */
int __fastcall sub_6038788C(int a1);  /* 0x0038788c */
int __fastcall sub_60387944(int result);  /* 0x00387944 */
void __fastcall sub_60387988(int a1);  /* 0x00387988 */
bool __fastcall sub_60387A1C(int a1);  /* 0x00387a1c */
int __fastcall sub_60387A60(int a1);  /* 0x00387a60 */
int __fastcall sub_6038B0F8(int *a1);  /* 0x0038b0f8 */
int __fastcall sub_6038B2A8(int a1);  /* 0x0038b2a8 */
int __fastcall sub_6038BA98(int a1);  /* 0x0038ba98 */
int __fastcall sub_6038BDC4(int a1);  /* 0x0038bdc4 */
int __fastcall sub_6038C070(int a1, unsigned int *a2);  /* 0x0038c070 */
int __fastcall sub_6038C3A4(float *a1);  /* 0x0038c3a4 */
unsigned int __fastcall sub_6038C5D4(int a1);  /* 0x0038c5d4 */
bool __fastcall sub_6038C924(int a1);  /* 0x0038c924 */
bool __fastcall sub_6038CB08(int a1);  /* 0x0038cb08 */
int __fastcall throw_right_ref(int a1);  /* 0x0038e950 */
int __fastcall SE_EMY_GABON_ROCK_ref_2(int a1);  /* 0x0038ea64 */
int __fastcall sub_6038F68C(int a1);  /* 0x0038f68c */
int __fastcall sub_6038F8CC(int a1);  /* 0x0038f8cc */
int __fastcall sub_6038FA88(int a1);  /* 0x0038fa88 */
int __fastcall sub_6039057C(int a1);  /* 0x0039057c */
int __fastcall SE_VOC_SHA_NOTICE_ref(int a1);  /* 0x00392674 */
int __fastcall SE_EMY_SHADOW_JUMP_ref(int a1);  /* 0x003931c8 */
int __fastcall SE_EMY_SHADOW_DOWN_ref(int a1);  /* 0x00393e68 */
int __fastcall SE_EMY_SHADOW_JITABATA_ref(int a1);  /* 0x003958a4 */
int __fastcall SE_EMY_SHADOW_JITABATA_ref_2(int a1);  /* 0x00395ae4 */
int __fastcall SE_VOC_SHA_LAUGH_ref(int a1);  /* 0x00397150 */
int __fastcall SE_EMY_SHADOW_BRAKE_ref(int a1);  /* 0x003974ac */
int __fastcall sub_60397B08(int a1);  /* 0x00397b08 */
int __fastcall sub_60398C50(int a1);  /* 0x00398c50 */
int __fastcall sub_603993B8(int a1);  /* 0x003993b8 */
int __fastcall sub_60399750(int a1);  /* 0x00399750 */
int __fastcall sub_60399D50(int *a1);  /* 0x00399d50 */
int __fastcall sub_60399F2C(int a1);  /* 0x00399f2c */
int __fastcall sub_6039A338(int a1);  /* 0x0039a338 */
bool __fastcall sub_6039A3F8(int a1);  /* 0x0039a3f8 */
int __fastcall sub_6039A580(int a1);  /* 0x0039a580 */
int __fastcall sub_6039AAD4(int a1, int *a2);  /* 0x0039aad4 */
int __fastcall sub_6039AC70(int a1);  /* 0x0039ac70 */
int __fastcall sub_6039AE38(unsigned __int8 *a1);  /* 0x0039ae38 */
int __fastcall sub_6039AF5C(int a1, int a2);  /* 0x0039af5c */
int __fastcall sub_6039B2EC(_DWORD *a1);  /* 0x0039b2ec */
int __fastcall sub_6039B3D8(int a1);  /* 0x0039b3d8 */
int __fastcall sub_6039B5BC(int a1);  /* 0x0039b5bc */
int __fastcall sub_6039BAD4(int a1, int a2);  /* 0x0039bad4 */
int __fastcall sub_6039BE2C(int a1, int a2);  /* 0x0039be2c */
int __fastcall sub_6039BFF4(int a1, int a2);  /* 0x0039bff4 */
int __fastcall sub_6039C2BC(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0039c2bc */
int __fastcall sub_6039C64C(int a1);  /* 0x0039c64c */
int __fastcall sub_6039C9CC(int a1, int a2, int a3, int a4);  /* 0x0039c9cc */
int __fastcall sub_6039CAF8(int a1, int a2);  /* 0x0039caf8 */
int __fastcall SE_VOC_SHA_DAMAGE_ref_2(int a1);  /* 0x0039d078 */
int __fastcall sub_6039D1E4(int a1);  /* 0x0039d1e4 */
int __fastcall sub_6039D3BC(int a1);  /* 0x0039d3bc */
bool __fastcall sub_6039D50C(int a1);  /* 0x0039d50c */
bool __fastcall sub_6039D624(int a1);  /* 0x0039d624 */
int __fastcall sub_6039D720(int a1, int a2);  /* 0x0039d720 */
int __fastcall sub_6039D868(int a1, int a2);  /* 0x0039d868 */
int __fastcall sub_6039D99C(_DWORD *a1);  /* 0x0039d99c */
int __fastcall sub_6039DC14(int a1, float *a2, int *a3);  /* 0x0039dc14 */
int __fastcall sub_6039DD78(int a1, float *a2, _DWORD *a3, float *a4, int a5);  /* 0x0039dd78 */
int __fastcall sub_6039DEF4(int a1, int a2);  /* 0x0039def4 */
int __fastcall sub_6039E02C(int a1, int a2);  /* 0x0039e02c */
int __fastcall sub_6039E0A4(int a1, int a2, int a3);  /* 0x0039e0a4 */
int __fastcall sub_6039E2D0(int a1, _DWORD *a2, int a3);  /* 0x0039e2d0 */
int __fastcall sub_6039E438(int a1);  /* 0x0039e438 */
int __fastcall sub_6039E530(int a1);  /* 0x0039e530 */
bool __fastcall sub_6039E65C(int a1);  /* 0x0039e65c */
void __fastcall sub_6039EC30(int a1);  /* 0x0039ec30 */
bool __fastcall sub_6039F5FC(int a1);  /* 0x0039f5fc */
int __fastcall sub_6039F6E0(int a1);  /* 0x0039f6e0 */
int __fastcall sub_6039FB38(int a1, float *a2);  /* 0x0039fb38 */
int __fastcall sub_603A009C(float *a1, int a2, int a3);  /* 0x003a009c */
int __fastcall sub_603A037C(int a1, int a2, int a3);  /* 0x003a037c */
int __fastcall sub_603A047C(int a1, int a2, int a3);  /* 0x003a047c */
int __fastcall sub_603A06B0(int a1, int *a2, int a3, int a4, int a5, int a6);  /* 0x003a06b0 */
bool __fastcall sub_603A0780(int a1, float *a2);  /* 0x003a0780 */
int __fastcall sub_603A08E4(int a1, int a2, int a3, int a4);  /* 0x003a08e4 */
int __fastcall sub_603A0E5C(int a1, int a2);  /* 0x003a0e5c */
int __fastcall sub_603A126C(int a1, int a2);  /* 0x003a126c */
int __fastcall sub_603A1830(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x003a1830 */
int __fastcall sub_603A1E88(int a1, int a2);  /* 0x003a1e88 */
int __fastcall sub_603A2194(int a1);  /* 0x003a2194 */
int __fastcall sub_603A21FC(int result, int a2, int a3);  /* 0x003a21fc */
int __fastcall sub_603A2430(int a1, int a2, int a3, int a4);  /* 0x003a2430 */
bool __fastcall sub_603A24A8(int a1, int a2, int a3);  /* 0x003a24a8 */
int __fastcall sub_603A2A60(int a1, int a2);  /* 0x003a2a60 */
int __fastcall sub_603A2CA0(int a1, int a2, int a3);  /* 0x003a2ca0 */
int __fastcall sub_603A2F54(int a1);  /* 0x003a2f54 */
int __fastcall sub_603A2F84(int result);  /* 0x003a2f84 */
int __fastcall sub_603A338C(int a1);  /* 0x003a338c */
int __fastcall sub_603A4974(int a1, int a2);  /* 0x003a4974 */
int __fastcall sub_603A5930(int a1, int a2, int a3);  /* 0x003a5930 */
int __fastcall sub_603A5D00(int a1, int a2);  /* 0x003a5d00 */
int __fastcall sub_603A5ED0(int a1);  /* 0x003a5ed0 */
int __fastcall sub_603A8968(int a1);  /* 0x003a8968 */
int __fastcall sub_603A8C88(_DWORD *a1);  /* 0x003a8c88 */
int __fastcall sub_603A8DC8(int a1);  /* 0x003a8dc8 */
unsigned int __fastcall sub_603A9110(int a1);  /* 0x003a9110 */
int __fastcall sub_603A9644(int result);  /* 0x003a9644 */
void __fastcall sub_603A9C74(int a1);  /* 0x003a9c74 */
int __fastcall sub_603A9F54(int a1);  /* 0x003a9f54 */
int __fastcall sub_603AB0A4(_DWORD *a1);  /* 0x003ab0a4 */
int __fastcall sub_603AB2E0(_DWORD *a1, int a2);  /* 0x003ab2e0 */
int __fastcall SE_EMY_BIG_TERESA_DEAD_ref(int a1, float *a2);  /* 0x003ac794 */
int __fastcall BigBoo_onCreate(int a1);  /* 0x003ac8f8 */
int __fastcall sub_603ACE60(int *a1);  /* 0x003ace60 */
int __fastcall sub_603AD244(_DWORD **a1);  /* 0x003ad244 */
int __fastcall BigBoo_onExecute(int a1);  /* 0x003ad5c4 */
int __fastcall sub_603AD914(int *a1, int a2);  /* 0x003ad914 */
int __fastcall sub_603ADA8C(int *a1, int a2);  /* 0x003ada8c */
int __fastcall sub_603ADC3C(_DWORD *a1);  /* 0x003adc3c */
int __fastcall sub_603ADD84(int a1);  /* 0x003add84 */
int __fastcall sub_603AE00C(int a1);  /* 0x003ae00c */
int __fastcall sub_603AE1DC(int a1);  /* 0x003ae1dc */
int __fastcall sub_603AE3AC(int a1);  /* 0x003ae3ac */
int __fastcall sub_603AE61C(int a1);  /* 0x003ae61c */
int __fastcall SE_EMY_BIG_TERESA_DEAD_ref_2(_DWORD *a1, int a2, int a3);  /* 0x003aee7c */
int __fastcall shay_teresaB_ref(int a1);  /* 0x003afedc */
int __fastcall sub_603B0CC0(_DWORD *a1);  /* 0x003b0cc0 */
int __fastcall sub_603B1028(_DWORD **a1);  /* 0x003b1028 */
unsigned int __fastcall sub_603B1A78(int a1);  /* 0x003b1a78 */
int __fastcall BooCircle_onCreate(int a1);  /* 0x003b2328 */
int __fastcall BooCircle_onExecute(int a1);  /* 0x003b2604 */
int __fastcall sub_603B2690(int result, unsigned int a2, float *a3);  /* 0x003b2690 */
bool __fastcall BooCircle_checkRTTI(int a1, int a2);  /* 0x003b2a64 */
void __fastcall BooCircle_dtor(Actor *a1);  /* 0x003b2b68 */
int __fastcall BooCircle_dtorFree(Actor *a1);  /* 0x003b2b98 */
int __fastcall sub_603B3948(int *a1);  /* 0x003b3948 */
int __fastcall sub_603B3C4C(int result);  /* 0x003b3c4c */
int __fastcall sub_603B3FBC(_DWORD *a1);  /* 0x003b3fbc */
int __fastcall sub_603B51BC(int a1);  /* 0x003b51bc */
int __fastcall sub_603B5378(int a1);  /* 0x003b5378 */
unsigned int __fastcall sub_603B54EC(int a1, int a2, int a3);  /* 0x003b54ec */
int __fastcall sub_603B565C(int *a1, int a2, int a3);  /* 0x003b565c */
int __fastcall sub_603B5A9C(int a1);  /* 0x003b5a9c */
int __fastcall sub_603B7098(int a1);  /* 0x003b7098 */
int __fastcall sub_603B7330(int a1);  /* 0x003b7330 */
float __fastcall sub_603B7478(int a1);  /* 0x003b7478 */
int __fastcall sub_603B869C(float *a1);  /* 0x003b869c */
int __fastcall sub_603B887C(int a1);  /* 0x003b887c */
int __fastcall sub_603B8F1C(int a1);  /* 0x003b8f1c */
int __fastcall sub_603B90EC(int a1);  /* 0x003b90ec */
int __fastcall sub_603B922C(int a1);  /* 0x003b922c */
int __fastcall sub_603B938C(int a1);  /* 0x003b938c */
int __fastcall sub_603B9514(int a1, int a2, int a3);  /* 0x003b9514 */
int __fastcall sub_603B96DC(int a1, int a2);  /* 0x003b96dc */
unsigned int __fastcall sub_603B97B4(int a1);  /* 0x003b97b4 */
int __fastcall sub_603B992C(_DWORD *a1);  /* 0x003b992c */
int __fastcall sub_603B9A48(int a1);  /* 0x003b9a48 */
bool __fastcall sub_603B9C08(int a1);  /* 0x003b9c08 */
int __fastcall sub_603B9D98(int a1);  /* 0x003b9d98 */
int __fastcall sub_603BA0D0(int a1);  /* 0x003ba0d0 */
int __fastcall sub_603BA6CC(int32x4_t *a1);  /* 0x003ba6cc */
int __fastcall sub_603BA9E0(int a1);  /* 0x003ba9e0 */
int __fastcall sub_603BB138(int a1);  /* 0x003bb138 */
int __fastcall SE_OBJ_PAIPO_LAND_ref(int a1);  /* 0x003bc2f8 */
int __fastcall sub_603BD3B8(_DWORD *a1);  /* 0x003bd3b8 */
int __fastcall sub_603BD5E8(int a1);  /* 0x003bd5e8 */
int __fastcall sub_603BD770(int a1);  /* 0x003bd770 */
int __fastcall sub_603BDBA4(int a1, int a2, int a3, int a4);  /* 0x003bdba4 */
int __fastcall sub_603BDD88(int a1);  /* 0x003bdd88 */
int __fastcall sub_603BECA4(int a1);  /* 0x003beca4 */
int __fastcall sub_603BEF10(_BYTE *a1);  /* 0x003bef10 */
unsigned int __fastcall sub_603BF044(int a1, int a2, int a3);  /* 0x003bf044 */
int __fastcall sub_603BF62C(_DWORD *a1, int a2, int a3);  /* 0x003bf62c */
int __fastcall sub_603BF7A4(int a1);  /* 0x003bf7a4 */
int __fastcall SE_BOSS_JR_HIT_T_ref(float *a1, int a2, int a3);  /* 0x003bf7e4 */
int __fastcall torpedobase_fire_l_ref(int a1);  /* 0x003c0408 */
int __fastcall torpedobase_fire_ref(int a1);  /* 0x003c0720 */
int __fastcall torpedobase_rtrn_ref(int a1);  /* 0x003c08e0 */
int __fastcall sub_603C0B40(int *a1);  /* 0x003c0b40 */
int __fastcall sub_603C0D04(int a1);  /* 0x003c0d04 */
bool __fastcall sub_603C100C(int a1);  /* 0x003c100c */
bool __fastcall sub_603C1120(int a1);  /* 0x003c1120 */
int __fastcall Actor_pipe_unabon_build(_DWORD *a1);  /* 0x003c2480 */
int __fastcall sub_603C249C(int a1, _DWORD *a2);  /* 0x003c249c */
int __fastcall sub_603C2E20(int a1);  /* 0x003c2e20 */
int __fastcall sub_603C3870(int a1);  /* 0x003c3870 */
int __fastcall sub_603C3AC8(int a1);  /* 0x003c3ac8 */
int __fastcall sub_603C44FC(int a1);  /* 0x003c44fc */
unsigned int __fastcall sub_603C4638(int a1);  /* 0x003c4638 */
int __fastcall sub_603C4798(int a1, int a2, int a3, int a4);  /* 0x003c4798 */
int __fastcall sub_603C4CB0(int a1);  /* 0x003c4cb0 */
int __fastcall sub_603C4ED4(int a1);  /* 0x003c4ed4 */
int __fastcall sub_603C59EC(_DWORD *a1);  /* 0x003c59ec */
int __fastcall sub_603C5A24(int a1);  /* 0x003c5a24 */
void __fastcall sub_603C5BB4(int a1);  /* 0x003c5bb4 */
int __fastcall sub_603C5F58(int a1);  /* 0x003c5f58 */
void __fastcall sub_603C69EC(_BYTE *a1);  /* 0x003c69ec */
void __fastcall sub_603C6B28(int a1);  /* 0x003c6b28 */
int __fastcall Actor_unira_RDASH_BGchekunarrow_build(_DWORD *a1);  /* 0x003c72a0 */
int __fastcall sub_603C967C(int a1, _DWORD *a2, int a3);  /* 0x003c967c */
float __fastcall sub_603CA2AC(int a1);  /* 0x003ca2ac */
bool __fastcall sub_603CAADC(int a1);  /* 0x003caadc */
int __fastcall sub_603CACBC(int a1, int a2, char a3, int *a4);  /* 0x003cacbc */
int __fastcall sub_603CB5E8(int a1, int a2);  /* 0x003cb5e8 */
int __fastcall sub_603CBC1C(int result, int a2, int a3, int a4);  /* 0x003cbc1c */
int __fastcall sub_603CC07C(int a1);  /* 0x003cc07c */
int __fastcall sub_603CC15C(int a1, int a2);  /* 0x003cc15c */
int __fastcall sub_603CC2B0(_DWORD *a1);  /* 0x003cc2b0 */
int __fastcall sub_603CC640(int a1, int a2, int a3);  /* 0x003cc640 */
bool __fastcall sub_603CCCF4(int a1);  /* 0x003cccf4 */
int __fastcall sub_603CD134(_DWORD *a1);  /* 0x003cd134 */
bool __fastcall sub_603CDE40(int a1);  /* 0x003cde40 */
int __fastcall sub_603CE08C(int a1);  /* 0x003ce08c */
int __fastcall Actor_kafugumannen_kishi_build(int a1);  /* 0x003ce488 */
bool __fastcall sub_603CE6CC(int a1);  /* 0x003ce6cc */
int __fastcall sub_603CE860(int a1);  /* 0x003ce860 */
bool __fastcall sub_603CEF60(int a1, int a2);  /* 0x003cef60 */
int __fastcall sub_603CF8B0(float *a1, _BYTE *a2, unsigned int a3, int a4);  /* 0x003cf8b0 */
int __fastcall sub_603CFCD8(int a1);  /* 0x003cfcd8 */
int __fastcall sub_603D049C(int a1, float *a2);  /* 0x003d049c */
int __fastcall Actor_pentaro_kipipe_build(int a1);  /* 0x003d0988 */
bool __fastcall sub_603D0AEC(int a1);  /* 0x003d0aec */
int __fastcall sub_603D0E00(int a1);  /* 0x003d0e00 */
int __fastcall sub_603D1790(float *a1, _BYTE *a2);  /* 0x003d1790 */
int __fastcall sub_603D1BFC(int a1, float *a2, unsigned __int8 *a3);  /* 0x003d1bfc */
bool __fastcall sub_603D27D0(int a1);  /* 0x003d27d0 */
int __fastcall Actor_unabon_RDash_2_build(int a1);  /* 0x003d2e70 */
int __fastcall sub_603D4534(int a1);  /* 0x003d4534 */
int __fastcall sub_603D46F4(int a1);  /* 0x003d46f4 */
int __fastcall sub_603D4FE8(int a1, int a2);  /* 0x003d4fe8 */
int __fastcall SE_EMY_WANWAN_BARK_ref(int a1);  /* 0x003d6dc8 */
int __fastcall SE_EMY_WANWAN_ESCAPE_ref(int a1, int a2, int a3, int a4);  /* 0x003d76bc */
int __fastcall SE_EMY_WANWAN_ESCAPE_ref_2(int a1);  /* 0x003d7d18 */
int __fastcall sub_603D8260(_DWORD *a1);  /* 0x003d8260 */
int __fastcall sub_603D8418(int a1);  /* 0x003d8418 */
float __fastcall sub_603D85CC(int a1);  /* 0x003d85cc */
int __fastcall sub_603D8874(int a1);  /* 0x003d8874 */
int __fastcall sub_603D907C(int a1, int a2);  /* 0x003d907c */
int __fastcall sub_603D923C(int result);  /* 0x003d923c */
int __fastcall sub_603D94F8(int a1);  /* 0x003d94f8 */
int __fastcall sub_603D9698(_BYTE *a1);  /* 0x003d9698 */
int __fastcall sub_603D988C(int a1);  /* 0x003d988c */
int __fastcall sub_603D99EC(int a1);  /* 0x003d99ec */
int __fastcall sub_603DA818(int a1);  /* 0x003da818 */
int __fastcall sub_603DA84C(int a1);  /* 0x003da84c */
unsigned int __fastcall sub_603DAD40(int a1);  /* 0x003dad40 */
unsigned int __fastcall sub_603DB12C(int a1);  /* 0x003db12c */
unsigned int __fastcall sub_603DB350(int a1);  /* 0x003db350 */
int __fastcall sub_603DBFA8(int a1);  /* 0x003dbfa8 */
int __fastcall sub_603DC144(int a1);  /* 0x003dc144 */
int __fastcall sub_603DC4CC(int a1);  /* 0x003dc4cc */
int __fastcall sub_603DC968(int a1);  /* 0x003dc968 */
int __fastcall sub_603DE84C(int a1);  /* 0x003de84c */
int __fastcall sub_603DF4C4(int32x4_t *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003df4c4 */
int __fastcall sub_603DF65C(_DWORD *a1, int a2);  /* 0x003df65c */
int __fastcall SE_EMY_WOOCHAN_MOGURU_LAST_ref(int a1);  /* 0x003e0504 */
int __fastcall sub_603E10FC(int result, int a2);  /* 0x003e10fc */
int __fastcall SE_BOSS_WOOGAN_FIRED_ref_2(int a1, int *a2);  /* 0x003e15c0 */
void __fastcall sub_603E3D10(_BYTE *a1);  /* 0x003e3d10 */
void __fastcall sub_603E4284(sead::IDisposer *a1);  /* 0x003e4284 */
int __fastcall sub_603E49B0(int a1, int a2);  /* 0x003e49b0 */
int __fastcall sub_603E4AD8(int result);  /* 0x003e4ad8 */
bool __fastcall sub_603E4B28(int a1);  /* 0x003e4b28 */
int __fastcall sub_603E5154(int a1);  /* 0x003e5154 */
int __fastcall sub_603E54CC(int a1, int a2);  /* 0x003e54cc */
int __fastcall sub_603E552C(int a1, int a2);  /* 0x003e552c */
int __fastcall sub_603E557C(_DWORD *a1);  /* 0x003e557c */
int __fastcall STRM_BGM_SHADOW_START_ref(int a1);  /* 0x003e63d0 */
int __fastcall sub_603E75B8(int a1);  /* 0x003e75b8 */
int __fastcall sub_603E7690(int a1, int *a2);  /* 0x003e7690 */
int __fastcall STRM_BGM_SHADOW_CATCH_ref(int a1);  /* 0x003e772c */
int __fastcall sub_603E7AC8(int a1);  /* 0x003e7ac8 */
int __fastcall sub_603E7D14(int a1, int a2);  /* 0x003e7d14 */
int __fastcall sub_603E801C(int a1, int a2);  /* 0x003e801c */
int __fastcall sub_603E814C(int a1, int a2);  /* 0x003e814c */
int __fastcall sub_603E827C(_DWORD *a1);  /* 0x003e827c */
int __fastcall sub_603E83F8(_DWORD *a1);  /* 0x003e83f8 */
int __fastcall sub_603E9E40(int a1, int a2);  /* 0x003e9e40 */
int __fastcall sub_603EA364(_DWORD *a1);  /* 0x003ea364 */
int __fastcall sub_603EA564(int result);  /* 0x003ea564 */
int __fastcall SE_VOC_SHA_LAUGH_ref_2(int a1);  /* 0x003eb09c */
int __fastcall sub_603EC4AC(int a1, int a2, _DWORD *a3, int a4);  /* 0x003ec4ac */
unsigned int __fastcall sub_603EC7B0(int a1);  /* 0x003ec7b0 */
int __fastcall sub_603EC9F0(_DWORD *a1);  /* 0x003ec9f0 */
int __fastcall sub_603ECDF0(int a1, int a2, _DWORD *a3, int a4, char a5);  /* 0x003ecdf0 */
int __fastcall sub_603ED498(int a1, int a2, _DWORD *a3, int a4);  /* 0x003ed498 */
int __fastcall sub_603ED650(int a1);  /* 0x003ed650 */
int __fastcall sub_603ED814(_DWORD *a1);  /* 0x003ed814 */
int __fastcall sub_603EDCD4(int a1);  /* 0x003edcd4 */
int __fastcall sub_603EDDA8(int a1, int a2);  /* 0x003edda8 */
int __fastcall sub_603EDF48(int a1);  /* 0x003edf48 */
int __fastcall sub_603EE1B0(_DWORD *a1, int a2, int a3, int a4);  /* 0x003ee1b0 */
int __fastcall sub_603EE6EC(int a1);  /* 0x003ee6ec */
int __fastcall sub_603EED64(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6);  /* 0x003eed64 */
int __fastcall sub_603EF044(int a1);  /* 0x003ef044 */
int __fastcall sub_603EF270(int a1, int a2, _DWORD *a3);  /* 0x003ef270 */
int __fastcall sub_603EF410(int a1);  /* 0x003ef410 */
int __fastcall sub_603EF5E0(int a1);  /* 0x003ef5e0 */
int __fastcall sub_603EF6E4(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x003ef6e4 */
int __fastcall sub_603EF810(int a1);  /* 0x003ef810 */
int __fastcall sub_603EFADC(int a1);  /* 0x003efadc */
int __fastcall sub_603EFBA8(int a1);  /* 0x003efba8 */
int __fastcall sub_603EFBF4(int a1);  /* 0x003efbf4 */
int __fastcall sub_603EFC40(int a1, int a2);  /* 0x003efc40 */
int __fastcall sub_603EFEAC(int result, unsigned int a2, int a3);  /* 0x003efeac */
int __fastcall sub_603F0040(int result, int a2, int a3, int a4);  /* 0x003f0040 */
int __fastcall sub_603F01A0(int result, int a2, int a3, int a4);  /* 0x003f01a0 */
void __fastcall sub_603F02F4(int a1, unsigned int a2, unsigned int a3);  /* 0x003f02f4 */
int __fastcall sub_603F0340(int result, int a2);  /* 0x003f0340 */
int __fastcall sub_603F0474(int a1, int a2);  /* 0x003f0474 */
bool __fastcall sub_603F056C(int a1, int a2);  /* 0x003f056c */
int __fastcall sub_603F0658(int a1, int a2);  /* 0x003f0658 */
int __fastcall sub_603F0768(int result, int a2, int a3, int a4);  /* 0x003f0768 */
int __fastcall sub_603F086C(_BYTE *a1);  /* 0x003f086c */
int __fastcall sub_603F1020(int a1);  /* 0x003f1020 */
int __fastcall sub_603F1364(int a1);  /* 0x003f1364 */
int __fastcall AreaTask_ctor(int a1, int a2);  /* 0x003f1530 */
void __fastcall sub_603F18C0(sead::CalculateTask *a1);  /* 0x003f18c0 */
int __fastcall sub_603F2858(int a1, int a2);  /* 0x003f2858 */
int __fastcall gbuffer_texture_ref(int a1, int *a2);  /* 0x003f32b4 */
int __fastcall sub_603F38C8(int a1);  /* 0x003f38c8 */
int __fastcall sub_603F41B8(int a1);  /* 0x003f41b8 */
int __fastcall sub_603F44D0(int a1);  /* 0x003f44d0 */
int __fastcall sub_603F4628(_DWORD *a1, int a2);  /* 0x003f4628 */
int __fastcall sub_603F4740(_DWORD *a1, int a2);  /* 0x003f4740 */
int __fastcall sub_603F47D0(_DWORD *a1, int a2);  /* 0x003f47d0 */
int __fastcall sub_603F4860(int a1);  /* 0x003f4860 */
int __fastcall AreaTask_getWrappedXPos(int result);  /* 0x003f4900 */
int __fastcall sub_603F4A10(int a1, int a2, char *a3);  /* 0x003f4a10 */
int __fastcall sub_603F4B70(int a1, int a2);  /* 0x003f4b70 */
int __fastcall sub_603F4BF4(int a1, float *a2, int *a3);  /* 0x003f4bf4 */
int __fastcall sub_603F4EAC(int a1);  /* 0x003f4eac */
int __fastcall sub_603F4FD8(int a1, int a2);  /* 0x003f4fd8 */
int __fastcall SE_SYS_CE_ref_3_helper(int a1);  /* 0x003f5030 */
int __fastcall sub_603F5508(int a1);  /* 0x003f5508 */
int __fastcall sub_603F55B8(int result);  /* 0x003f55b8 */
int __fastcall sub_603F564C(int a1);  /* 0x003f564c */
int __fastcall sub_603F5A08(int a1);  /* 0x003f5a08 */
int __fastcall sub_603F5BC4(int a1, float *a2, float *a3, float *a4, float *a5);  /* 0x003f5bc4 */
int __fastcall sub_603F6084(int a1);  /* 0x003f6084 */
int __fastcall ChallengeResultScene_ctor_helper_helper_3F625C(int a1);  /* 0x003f625c */
int __fastcall sub_603F6288(int a1);  /* 0x003f6288 */
int __fastcall sub_603F62C0(int a1);  /* 0x003f62c0 */
int __fastcall sub_603F63BC(int a1);  /* 0x003f63bc */
int __fastcall sub_603F63F8(int a1);  /* 0x003f63f8 */
int __fastcall sub_603F64BC(int a1);  /* 0x003f64bc */
int __fastcall sub_603F67B8(int a1);  /* 0x003f67b8 */
int __fastcall sub_603F6868(int a1);  /* 0x003f6868 */
int __fastcall sub_603F68B4(int a1, int a2);  /* 0x003f68b4 */
int __fastcall sub_603F68F8(int result);  /* 0x003f68f8 */
int __fastcall sub_603F692C(int result);  /* 0x003f692c */
int __fastcall sub_603F69FC(_BYTE *a1, int a2, int a3);  /* 0x003f69fc */
int __fastcall sub_603F6AA0(unsigned __int8 *a1, int a2, int a3);  /* 0x003f6aa0 */
int __fastcall sub_603F6B0C(unsigned __int8 *a1, int a2, int a3);  /* 0x003f6b0c */
int __fastcall sub_603F6B7C(int a1);  /* 0x003f6b7c */
int __fastcall sub_603F6C14(unsigned __int8 *a1, int a2);  /* 0x003f6c14 */
int __fastcall sub_603F6EA0(unsigned __int8 *a1, _BYTE *a2);  /* 0x003f6ea0 */
int __fastcall sub_603F6F84(unsigned __int8 *a1);  /* 0x003f6f84 */
bool __fastcall sub_603F7144(unsigned __int8 *a1);  /* 0x003f7144 */
int __fastcall sub_603F727C(_BYTE *a1, int a2, int a3);  /* 0x003f727c */
int __fastcall sub_603F72B8(_BYTE *a1, int a2, int a3);  /* 0x003f72b8 */
int __fastcall sub_603F72F4(_BYTE *a1, int a2, int a3);  /* 0x003f72f4 */
int __fastcall sub_603F7338(_BYTE *a1, int a2, int a3);  /* 0x003f7338 */
int __fastcall sub_603F737C(char *a1, int a2, int a3);  /* 0x003f737c */
int __fastcall sub_603F73CC(char *a1, int a2, int a3);  /* 0x003f73cc */
int __fastcall sub_603F7420(_BYTE *a1, int a2, int a3);  /* 0x003f7420 */
int __fastcall sub_603F7464(_BYTE *a1, int a2, int a3);  /* 0x003f7464 */
int __fastcall sub_603F74A8(_BYTE *a1, int a2);  /* 0x003f74a8 */
int __fastcall sub_603F7548(_BYTE *a1);  /* 0x003f7548 */
int __fastcall sub_603F75FC(_BYTE *a1);  /* 0x003f75fc */
int __fastcall sub_603F76B0(int a1, int a2, int a3);  /* 0x003f76b0 */
int __fastcall sub_603F76F4(int a1, int a2, int a3, unsigned int a4);  /* 0x003f76f4 */
int __fastcall sub_603F774C(int a1, int a2, int a3);  /* 0x003f774c */
void __fastcall sub_603F77EC(int a1);  /* 0x003f77ec */
void __fastcall sub_603F7878(int a1, int a2);  /* 0x003f7878 */
int __fastcall sub_603F78BC(_BYTE *a1, int a2, int a3, int a4);  /* 0x003f78bc */
int __fastcall sub_603F7A98(int a1, int a2, int a3, unsigned int a4);  /* 0x003f7a98 */
int __fastcall sub_603F7B18(int a1, int a2, unsigned int a3);  /* 0x003f7b18 */
int __fastcall sub_603F7B98(int a1, int a2);  /* 0x003f7b98 */
int __fastcall sub_603F7BC8(int a1);  /* 0x003f7bc8 */
int __fastcall sub_603F7D00(int a1, int a2);  /* 0x003f7d00 */
int __fastcall sub_603F80C8(int a1, int a2);  /* 0x003f80c8 */
void __fastcall sub_603F826C(int a1);  /* 0x003f826c */
int __fastcall sub_603F9738(_DWORD *a1, int a2);  /* 0x003f9738 */
int __fastcall sub_603F9BD8(_DWORD *a1);  /* 0x003f9bd8 */
int __fastcall sub_603FA57C(int a1);  /* 0x003fa57c */
int __fastcall sub_603FB640(int a1, unsigned int a2, int a3);  /* 0x003fb640 */
int __fastcall sub_603FB964(int a1, unsigned int a2);  /* 0x003fb964 */
int __fastcall sub_603FB9A0(int a1, unsigned int a2);  /* 0x003fb9a0 */
int __fastcall sub_603FBA2C(int result, int a2, unsigned int a3);  /* 0x003fba2c */
int __fastcall sub_603FBD2C(int a1, int a2);  /* 0x003fbd2c */
int __fastcall sub_603FBE70(int a1);  /* 0x003fbe70 */
bool __fastcall sub_603FC0B4(int a1);  /* 0x003fc0b4 */
unsigned int __fastcall sub_603FC57C(int a1);  /* 0x003fc57c */
unsigned int __fastcall sub_603FC6B4(int a1, int a2);  /* 0x003fc6b4 */
int __fastcall sub_603FC8C4(int a1);  /* 0x003fc8c4 */
int __fastcall sub_603FCB00(_DWORD *a1, int a2);  /* 0x003fcb00 */
int __fastcall sub_603FCB6C(_DWORD *a1, int a2);  /* 0x003fcb6c */
int __fastcall sub_603FCBD8(_DWORD *a1, int a2);  /* 0x003fcbd8 */
void __fastcall sub_603FCC50(int a1, unsigned int a2, unsigned int a3);  /* 0x003fcc50 */
void __fastcall sub_603FCCE4(_DWORD *a1, int *a2);  /* 0x003fcce4 */
int __fastcall sub_603FCFF8(int a1, int a2);  /* 0x003fcff8 */
int __fastcall sub_603FD0B4(_BYTE *a1);  /* 0x003fd0b4 */
bool __fastcall sub_603FD0E8(int a1);  /* 0x003fd0e8 */
int __fastcall sub_603FD238(int a1);  /* 0x003fd238 */
int __fastcall sub_603FD374(int a1);  /* 0x003fd374 */
int __fastcall sub_603FD464(int result, int a2, int a3);  /* 0x003fd464 */
int __fastcall sub_603FD69C(int result);  /* 0x003fd69c */
int __fastcall sub_603FD6E0(int a1, int a2);  /* 0x003fd6e0 */
int __fastcall sub_603FD768(int a1, int a2, __int16 a3);  /* 0x003fd768 */
int __fastcall sub_603FD94C(int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4);  /* 0x003fd94c */
int __fastcall sub_603FDA80(int a1);  /* 0x003fda80 */
int __fastcall sub_603FDB68(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x003fdb68 */
int __fastcall sub_603FDC64(int a1);  /* 0x003fdc64 */
int __fastcall sub_603FE114(int a1);  /* 0x003fe114 */
unsigned int __fastcall sub_603FE52C(int a1);  /* 0x003fe52c */
int __fastcall sub_603FE670(int a1);  /* 0x003fe670 */
unsigned int __fastcall sub_603FE994(int a1);  /* 0x003fe994 */
int __fastcall sub_603FEF70(int a1);  /* 0x003fef70 */
int __fastcall sub_603FEFE8(int a1);  /* 0x003fefe8 */
int __fastcall sub_603FF044(int a1, int a2);  /* 0x003ff044 */
int __fastcall sub_603FF0A8(int a1, int a2);  /* 0x003ff0a8 */
int __fastcall sub_603FF1CC(int a1);  /* 0x003ff1cc */
int __fastcall sub_603FF48C(int a1);  /* 0x003ff48c */
int __fastcall sub_603FF530(int a1);  /* 0x003ff530 */
int __fastcall sub_603FF5A0(int a1, int a2, int a3);  /* 0x003ff5a0 */
void __fastcall sub_603FF5F4(_DWORD *a1);  /* 0x003ff5f4 */
int __fastcall sub_603FF76C(int a1, int a2);  /* 0x003ff76c */
bool __fastcall sub_603FF810(_BYTE *a1);  /* 0x003ff810 */
int __fastcall sub_603FF880(int a1, _DWORD *a2);  /* 0x003ff880 */
unsigned int __fastcall sub_603FFE2C(int *a1, const void *a2);  /* 0x003ffe2c */
int __fastcall sub_60400030(int *a1, _DWORD *a2);  /* 0x00400030 */
int __fastcall sub_604005D0(int result, char a2, int a3, char a4, int a5, int a6);  /* 0x004005d0 */
int __fastcall AreaRumbleMgr_rumbleForPlayer(int a1, int a2, int a3, int a4, int a5);  /* 0x004006b0 */
int __fastcall AreaRumbleMgr_rumble(int result, int a2, char a3, int a4, int a5);  /* 0x004007d8 */
int __fastcall sub_60400980(int a1, int a2, int a3, int a4, int a5);  /* 0x00400980 */
int __fastcall AreaRumbleMgr_rumble2(int a1, int a2, char a3, int a4);  /* 0x00400a34 */
int __fastcall sub_60400D94(int a1);  /* 0x00400d94 */
signed int __fastcall sub_60400F18(int a1);  /* 0x00400f18 */
int __fastcall sub_604011B4(int a1, _DWORD *a2);  /* 0x004011b4 */
int __fastcall sub_60401598(int a1);  /* 0x00401598 */
int __fastcall sub_60401BB8(int a1);  /* 0x00401bb8 */
int __fastcall sub_60401C6C(int a1);  /* 0x00401c6c */
int __fastcall sub_60401DA0(int a1);  /* 0x00401da0 */
int __fastcall sub_60401ED4(int a1);  /* 0x00401ed4 */
int __fastcall sub_60401F34(int a1);  /* 0x00401f34 */
int __fastcall sub_60401F74(int a1, int a2);  /* 0x00401f74 */
int __fastcall sub_6040200C(int result, int a2, unsigned int a3);  /* 0x0040200c */
int __fastcall sub_60402084(int a1, unsigned int a2);  /* 0x00402084 */
int __fastcall sub_60402144(int a1);  /* 0x00402144 */
int __fastcall sub_60402278(int a1);  /* 0x00402278 */
int __fastcall sub_604023AC(int a1);  /* 0x004023ac */
int __fastcall sub_604024E0(int a1);  /* 0x004024e0 */
int __fastcall sub_60402714(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00402714 */
int __fastcall sub_60402758(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x00402758 */
int __fastcall sub_604028B8(int a1);  /* 0x004028b8 */
int __fastcall sub_60402CB0(int a1, int a2);  /* 0x00402cb0 */
int __fastcall sub_60402E34(int a1);  /* 0x00402e34 */
int __fastcall sub_60403080(int a1);  /* 0x00403080 */
int __fastcall sub_604032A0(int a1);  /* 0x004032a0 */
int __fastcall sub_604034B0(int result, int a2);  /* 0x004034b0 */
int __fastcall sub_60403590(_DWORD *a1);  /* 0x00403590 */
int __fastcall sub_6040380C(_DWORD *a1);  /* 0x0040380c */
int __fastcall sub_60403A9C(int a1);  /* 0x00403a9c */
int __fastcall SE_SYS_PJ_PLAYER_TURN_ref(int a1);  /* 0x00403ca8 */
int __fastcall sub_604056E8(int a1, int a2);  /* 0x004056e8 */
int __fastcall sub_60405888(int a1);  /* 0x00405888 */
int __fastcall sub_604058BC(int a1);  /* 0x004058bc */
int __fastcall sub_60405B2C(int a1);  /* 0x00405b2c */
int __fastcall sub_60406290(int a1);  /* 0x00406290 */
int __fastcall sub_60406588(int a1, unsigned int a2, int a3);  /* 0x00406588 */
int __fastcall sub_60406888(int a1);  /* 0x00406888 */
int __fastcall sub_60406A28(_DWORD *a1);  /* 0x00406a28 */
int __fastcall sub_60407280(int a1);  /* 0x00407280 */
int __fastcall sub_604072BC(int result);  /* 0x004072bc */
int __fastcall sub_604072EC(_DWORD *a1);  /* 0x004072ec */
int __fastcall sub_6040734C(int a1);  /* 0x0040734c */
int __fastcall sub_60407384(int a1);  /* 0x00407384 */
int __fastcall sub_60407488(int a1);  /* 0x00407488 */
int __fastcall sub_604075A4(int a1);  /* 0x004075a4 */
int __fastcall sub_60407734(int a1, int a2, int a3);  /* 0x00407734 */
int __fastcall sub_6040776C(int a1);  /* 0x0040776c */
int __fastcall sub_60407A14(int a1);  /* 0x00407a14 */
int __fastcall sub_60407D4C(int a1);  /* 0x00407d4c */
int __fastcall sub_60407D7C(int a1, int a2);  /* 0x00407d7c */
int __fastcall sub_60407DB4(int a1, int a2, int a3);  /* 0x00407db4 */
int __fastcall sub_60407E18(int a1, int a2);  /* 0x00407e18 */
int __fastcall sub_60407E74(int a1, int a2, unsigned int a3, int a4, int a5, int a6);  /* 0x00407e74 */
int __fastcall sub_6040806C(int a1, int a2, unsigned int a3, int a4, int a5, int a6);  /* 0x0040806c */
int __fastcall sub_604080BC(int result, int *a2, int *a3);  /* 0x004080bc */
int __fastcall sub_6040810C(int a1);  /* 0x0040810c */
int __fastcall sub_604081DC(int a1);  /* 0x004081dc */
int __fastcall sub_60408230(int a1, unsigned __int8 a2, unsigned __int8 a3);  /* 0x00408230 */
int __fastcall sub_60408284(int *a1, unsigned __int8 a2, unsigned __int8 a3, char a4);  /* 0x00408284 */
int __fastcall sub_60408350(int a1, int a2);  /* 0x00408350 */
int __fastcall sub_60408488(_DWORD *a1, const void *a2);  /* 0x00408488 */
int __fastcall sub_604085B4(int a1);  /* 0x004085b4 */
bool __fastcall sub_604086EC(int a1, unsigned int a2);  /* 0x004086ec */
int __fastcall PointGet_1UP_00_ref_2_helper(int a1);  /* 0x0040891c */
int __fastcall sub_6040894C(int a1);  /* 0x0040894c */
int __fastcall sub_60408984(_BYTE *a1);  /* 0x00408984 */
int __fastcall sub_604089BC(_BYTE *a1);  /* 0x004089bc */
int __fastcall sub_604089F4(int a1, int a2);  /* 0x004089f4 */
int __fastcall sub_60408A3C(int a1, _DWORD *a2);  /* 0x00408a3c */
unsigned int __fastcall sub_604091B0(int a1);  /* 0x004091b0 */
int __fastcall sub_604091F0(int a1);  /* 0x004091f0 */
int __fastcall sub_60409268(_BYTE *a1, _DWORD *a2);  /* 0x00409268 */
bool __fastcall sub_604092B0(int a1, int a2);  /* 0x004092b0 */
int __fastcall sub_604092F8(unsigned __int8 *a1, int a2);  /* 0x004092f8 */
int __fastcall sub_60409340(int result);  /* 0x00409340 */
int __fastcall sub_604093B8(int result);  /* 0x004093b8 */
int __fastcall sub_604094BC(int a1);  /* 0x004094bc */
int __fastcall sub_604096C4(int result);  /* 0x004096c4 */
int __fastcall sub_60409700(unsigned __int8 *a1);  /* 0x00409700 */
int __fastcall sub_6040975C(int a1, int a2);  /* 0x0040975c */
int __fastcall sub_604097D0(int a1);  /* 0x004097d0 */
unsigned int __fastcall sub_6040994C(unsigned int result);  /* 0x0040994c */
int __fastcall sub_60409994(int result, int a2);  /* 0x00409994 */
int __fastcall sub_604099E0(_BYTE *a1);  /* 0x004099e0 */
int __fastcall sub_60409C18(int result);  /* 0x00409c18 */
int __fastcall sub_60409CC8(int result);  /* 0x00409cc8 */
int __fastcall sub_60409DE4(int a1);  /* 0x00409de4 */
int __fastcall sub_6040A10C(int result);  /* 0x0040a10c */
int __fastcall sub_6040A1D8(int result);  /* 0x0040a1d8 */
int __fastcall sub_6040A310(int a1, int a2);  /* 0x0040a310 */
int __fastcall sub_6040A52C(int a1, int a2);  /* 0x0040a52c */
unsigned int __fastcall sub_6040A5F0(int a1, unsigned int a2);  /* 0x0040a5f0 */
unsigned int __fastcall sub_6040A81C(int a1);  /* 0x0040a81c */
int __fastcall sub_6040A960(int a1, int a2);  /* 0x0040a960 */
int __fastcall sub_6040ACD4(int a1, unsigned int a2);  /* 0x0040acd4 */
int __fastcall sub_6040B278(int a1, unsigned int a2);  /* 0x0040b278 */
int __fastcall sub_6040B33C(int a1);  /* 0x0040b33c */
int __fastcall sub_6040B3B0(_BYTE *a1, int a2);  /* 0x0040b3b0 */
bool __fastcall sub_6040B414(int a1);  /* 0x0040b414 */
int __fastcall sub_6040B798(int a1);  /* 0x0040b798 */
int __fastcall sub_6040BE8C(int a1);  /* 0x0040be8c */
bool __fastcall sub_6040C0DC(int a1);  /* 0x0040c0dc */
unsigned int __fastcall PlayerStates_updateModelAndAnims_helper_40C134(_DWORD *a1, int a2);  /* 0x0040c134 */
unsigned int __fastcall sub_6040C14C(_DWORD *a1, int a2);  /* 0x0040c14c */
int __fastcall sub_6040C398(int result);  /* 0x0040c398 */
int __fastcall sub_6040C424(int a1);  /* 0x0040c424 */
int __fastcall sub_6040C76C(int a1);  /* 0x0040c76c */
int __fastcall sub_6040D224(int a1);  /* 0x0040d224 */
int __fastcall sub_6040D2C0(int result);  /* 0x0040d2c0 */
int __fastcall sub_6040D310(int a1);  /* 0x0040d310 */
void __fastcall sub_6040D3FC(int a1, unsigned int a2, int a3);  /* 0x0040d3fc */
int __fastcall sub_6040D4F0(_DWORD *a1);  /* 0x0040d4f0 */
int __fastcall sub_6040D7A8(_DWORD *a1, unsigned int a2);  /* 0x0040d7a8 */
int __fastcall sub_6040D864(_DWORD *a1);  /* 0x0040d864 */
int __fastcall sub_6040DF10(_DWORD *a1, int a2);  /* 0x0040df10 */
signed int __fastcall sub_6040E074(_DWORD *a1, int a2, int a3);  /* 0x0040e074 */
bool __fastcall sub_6040E244(unsigned int a1);  /* 0x0040e244 */
bool __fastcall sub_6040E274(int a1);  /* 0x0040e274 */
bool __fastcall sub_6040E394(unsigned int a1, char a2);  /* 0x0040e394 */
bool __fastcall sub_6040E3D0(int a1);  /* 0x0040e3d0 */
bool __fastcall sub_6040E48C(unsigned int a1, char a2);  /* 0x0040e48c */
bool __fastcall sub_6040E4C8(int a1);  /* 0x0040e4c8 */
int __fastcall sub_6040E5B0(unsigned int a1, unsigned int a2, int a3);  /* 0x0040e5b0 */
int __fastcall sub_6040E820(int result);  /* 0x0040e820 */
int __fastcall sub_6040E87C(int result);  /* 0x0040e87c */
int __fastcall Animation_update(int a1);  /* 0x0040e904 */
int __fastcall sub_6040E90C(int a1, signed int a2);  /* 0x0040e90c */
int __fastcall sub_6040EB10(int result);  /* 0x0040eb10 */
int __fastcall sub_6040EB64(int result);  /* 0x0040eb64 */
int __fastcall sub_6040EC24(int a1, int a2);  /* 0x0040ec24 */
unsigned int __fastcall sub_6040ECCC(int a1, int a2, float *a3, unsigned int a4);  /* 0x0040eccc */
int __fastcall ModelWrapper_updateAnims(int result);  /* 0x0040f3cc */
int __fastcall ModelWrapper_updateModel(_DWORD *a1);  /* 0x0040f48c */
int __fastcall sub_6040F4B8(int a1, int a2, int a3);  /* 0x0040f4b8 */
int __fastcall sub_6040F514(_DWORD *a1, unsigned int a2, int a3, int a4);  /* 0x0040f514 */
int __fastcall sub_6040F8F4(int a1, int a2, int a3);  /* 0x0040f8f4 */
int __fastcall sub_6040F984(int a1, int a2);  /* 0x0040f984 */
int __fastcall sub_6040FB34(int a1, int a2);  /* 0x0040fb34 */
void __fastcall sub_6040FD68(sead::IDisposer *a1);  /* 0x0040fd68 */
int __fastcall sub_604102A0(_DWORD *a1);  /* 0x004102a0 */
int __fastcall sub_6041046C(_DWORD *a1, int a2, int a3, int a4, int a5, int *a6);  /* 0x0041046c */
int __fastcall sub_604106A4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int *a7);  /* 0x004106a4 */
int __fastcall sub_604108F8(int a1);  /* 0x004108f8 */
int __fastcall sub_60410A24(int a1);  /* 0x00410a24 */
int __fastcall sub_60410B64(int a1);  /* 0x00410b64 */
int __fastcall sub_60410D1C(int a1);  /* 0x00410d1c */
bool __fastcall sub_60410F70(int a1, int a2, int *a3, int a4);  /* 0x00410f70 */
bool __fastcall sub_604115D4(float *a1, float *a2);  /* 0x004115d4 */
int __fastcall sub_604116A0(int *a1, int *a2, int *a3);  /* 0x004116a0 */
int __fastcall sub_604117C4(int a1);  /* 0x004117c4 */
int __fastcall sub_60413FD0(int result);  /* 0x00413fd0 */
int __fastcall sub_60414014(int a1);  /* 0x00414014 */
int __fastcall sub_604140F8(int result);  /* 0x004140f8 */
int __fastcall sub_60414454(int a1, int a2, int a3, int a4);  /* 0x00414454 */
int __fastcall sub_604148F4(_DWORD *a1);  /* 0x004148f4 */
int __fastcall sub_60414BB8(int a1);  /* 0x00414bb8 */
int __fastcall sub_60414DA0(_DWORD *a1, int a2);  /* 0x00414da0 */
int __fastcall sub_604157F4(_DWORD *a1, int a2, int a3, float *a4, int a5);  /* 0x004157f4 */
int __fastcall sub_60416904(int a1, int a2);  /* 0x00416904 */
int __fastcall sub_60416B78(int a1, int a2);  /* 0x00416b78 */
int __fastcall sub_60416EF0(int a1, int a2);  /* 0x00416ef0 */
int __fastcall sub_60416F84(int a1, int a2);  /* 0x00416f84 */
int __fastcall sub_60417134(int a1, int a2);  /* 0x00417134 */
int __fastcall sub_604172E8(int a1);  /* 0x004172e8 */
int __fastcall sub_60417498(int a1, int a2);  /* 0x00417498 */
int __fastcall sub_60417808(int a1, unsigned int a2, int a3);  /* 0x00417808 */
int __fastcall sub_60417FFC(int a1, unsigned int a2);  /* 0x00417ffc */
int __fastcall sub_60418078(int a1, int a2, int a3);  /* 0x00418078 */
int __fastcall sub_60418110(unsigned int a1, _DWORD *a2);  /* 0x00418110 */
int __fastcall sub_6041838C(int result);  /* 0x0041838c */
int __fastcall AnimationCtrl_setRepeat(int result, int a2);  /* 0x004183bc */
int __fastcall sub_604183EC(int result);  /* 0x004183ec */
int __fastcall sub_60418548(int a1);  /* 0x00418548 */
int __fastcall sub_604186F8(int a1);  /* 0x004186f8 */
int __fastcall sub_60418774(int a1, int a2);  /* 0x00418774 */
int __fastcall sub_60418974(int a1);  /* 0x00418974 */
int __fastcall sub_60418DB8(_DWORD *a1);  /* 0x00418db8 */
int __fastcall sub_60418FB4(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00418fb4 */
int __fastcall sub_6041925C(_DWORD *a1, int *a2, int a3);  /* 0x0041925c */
int __fastcall sub_60419380(int a1, int a2, int a3, int a4);  /* 0x00419380 */
int __fastcall sub_60419574(int a1, int a2);  /* 0x00419574 */
int __fastcall sub_60419720(int a1, int a2);  /* 0x00419720 */
int __fastcall sub_604198EC(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x004198ec */
int __fastcall sub_60419A64(_DWORD *a1, int a2);  /* 0x00419a64 */
int __fastcall sub_60419C88(int a1);  /* 0x00419c88 */
int __fastcall sub_60419F48(_DWORD *a1);  /* 0x00419f48 */
int __fastcall sub_6041A024(_DWORD *a1);  /* 0x0041a024 */
int __fastcall sub_6041A1C4(_DWORD *a1, int a2);  /* 0x0041a1c4 */
int __fastcall sub_6041A278(_DWORD *a1, int a2);  /* 0x0041a278 */
int __fastcall sub_6041A990(int a1);  /* 0x0041a990 */
unsigned int __fastcall sub_6041AADC(int a1, int a2);  /* 0x0041aadc */
int __fastcall sub_6041AC90(int a1, int a2);  /* 0x0041ac90 */
int __fastcall sub_6041AFBC(int a1, int a2, int a3);  /* 0x0041afbc */
int __fastcall sub_6041AFF8(_DWORD *a1, _DWORD *a2, int CurrentHeap, int a4);  /* 0x0041aff8 */
int __fastcall sub_6041B234(int a1);  /* 0x0041b234 */
int __fastcall sub_6041B518(int a1);  /* 0x0041b518 */
void __fastcall sub_6041B5D0(int a1);  /* 0x0041b5d0 */
int __fastcall sub_6041B6CC(int a1);  /* 0x0041b6cc */
int __fastcall sub_6041B818(int a1, int a2);  /* 0x0041b818 */
int __fastcall sub_6041B864(int a1, _DWORD *a2, int a3, int a4);  /* 0x0041b864 */
int __fastcall sub_6041B974(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x0041b974 */
int __fastcall sub_6041BA94(_DWORD *a1, int a2, int a3);  /* 0x0041ba94 */
int __fastcall sub_6041BC00(int a1);  /* 0x0041bc00 */
int __fastcall sub_6041BD28(_DWORD *a1, int a2, _DWORD *a3, int a4);  /* 0x0041bd28 */
int __fastcall sub_6041BFD0(_DWORD *a1, int a2, int a3);  /* 0x0041bfd0 */
int __fastcall sub_6041C124(_DWORD *a1, int a2, int a3);  /* 0x0041c124 */
int __fastcall sub_6041C300(_DWORD *a1, int a2, int a3);  /* 0x0041c300 */
int __fastcall sub_6041C4A0(int result, int a2, int a3);  /* 0x0041c4a0 */
int __fastcall sub_6041C894(_DWORD *a1);  /* 0x0041c894 */
int __fastcall sub_6041C99C(_DWORD *a1);  /* 0x0041c99c */
int __fastcall sub_6041CA50(_DWORD *a1);  /* 0x0041ca50 */
int __fastcall sub_6041CC20(_DWORD *a1);  /* 0x0041cc20 */
int __fastcall sub_6041CD6C(_DWORD *a1);  /* 0x0041cd6c */
int __fastcall sub_6041CE84(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0041ce84 */
int __fastcall sub_6041CF7C(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0041cf7c */
int __fastcall sub_6041D07C(int a1);  /* 0x0041d07c */
int __fastcall sub_6041D270(int a1, int a2, int a3);  /* 0x0041d270 */
int __fastcall sub_6041D74C(int a1, int a2, int *a3, int a4);  /* 0x0041d74c */
int __fastcall sub_6041DD00(_DWORD *a1, int a2, int a3, int a4);  /* 0x0041dd00 */
int __fastcall sub_6041F17C(int a1, int a2);  /* 0x0041f17c */
int __fastcall sub_6041F274(int a1, int a2);  /* 0x0041f274 */
int __fastcall sub_6041F598(int a1, int a2);  /* 0x0041f598 */
int __fastcall sub_6041F6C8(int a1, int a2, int a3, int a4);  /* 0x0041f6c8 */
int __fastcall sub_6041FB58(int a1, int a2, _QWORD *a3, char *a4, unsigned int a5, int a6);  /* 0x0041fb58 */
int __fastcall sub_60420030(int a1, int a2, int a3, int a4, int a5);  /* 0x00420030 */
int __fastcall sub_604201A4(int a1);  /* 0x004201a4 */
int __fastcall sub_60420330(int a1);  /* 0x00420330 */
int __fastcall sub_60420378(int a1, int a2, int a3);  /* 0x00420378 */
int __fastcall sub_60420468(_DWORD *a1, int a2);  /* 0x00420468 */
int __fastcall sub_60420528(_DWORD *a1, int a2, int a3);  /* 0x00420528 */
int __fastcall sub_60420704(int a1, int a2, _DWORD *a3, _DWORD *a4);  /* 0x00420704 */
bool __fastcall sub_60420910(_DWORD *a1, _DWORD *a2);  /* 0x00420910 */
int __fastcall sub_60420960(int a1, int a2, int a3, int a4);  /* 0x00420960 */
int __fastcall sub_60420D88(int a1, int a2);  /* 0x00420d88 */
int __fastcall sub_6042105C(int a1, int a2);  /* 0x0042105c */
int __fastcall sub_604210B8(int a1, int a2);  /* 0x004210b8 */
int __fastcall sub_60421114(int a1, int a2);  /* 0x00421114 */
int __fastcall sead_Decompressor_dtorFree(sead::IDisposer *a1);  /* 0x00421174 */
int __fastcall sub_60421880(_DWORD *a1);  /* 0x00421880 */
int __fastcall sub_604218E0(_DWORD *a1);  /* 0x004218e0 */
int __fastcall sub_6042194C(_DWORD *a1, int a2, int a3, int a4);  /* 0x0042194c */
int __fastcall sub_60421AE4(_DWORD *a1, int a2, int a3);  /* 0x00421ae4 */
int __fastcall sub_60421BCC(int result);  /* 0x00421bcc */
int __fastcall sub_60421C50(int result);  /* 0x00421c50 */
int __fastcall sub_60421D08(int a1, int a2);  /* 0x00421d08 */
void __fastcall sub_604222D0(_BYTE *a1);  /* 0x004222d0 */
int __fastcall sub_60422BD4(_DWORD *a1);  /* 0x00422bd4 */
int __fastcall sub_60422C24(int a1);  /* 0x00422c24 */
int __fastcall sub_60422C94(int a1);  /* 0x00422c94 */
int __fastcall sub_60422EFC(_DWORD *a1, int a2);  /* 0x00422efc */
int __fastcall sub_60422F3C(_DWORD *a1, int a2);  /* 0x00422f3c */
int __fastcall BigBoo_onCreate_helper_423EBC(int a1, int a2);  /* 0x00423ebc */
bool __fastcall LightSource_unkUpdate3(int a1);  /* 0x00423ecc */
int __fastcall sub_60424120(int a1);  /* 0x00424120 */
int __fastcall sub_604242A8(_DWORD *a1, int a2);  /* 0x004242a8 */
int __fastcall sub_604243B8(int a1);  /* 0x004243b8 */
bool __fastcall sub_60424410(int a1);  /* 0x00424410 */
int __fastcall sub_60424628(int a1);  /* 0x00424628 */
int __fastcall sub_60424734(int result, float *a2, unsigned int a3, int a4, _DWORD *a5, int a6, int a7);  /* 0x00424734 */
int __fastcall sub_604256D0(int a1, int a2);  /* 0x004256d0 */
int __fastcall sub_60426530(int a1);  /* 0x00426530 */
int __fastcall sub_604265B4(int a1);  /* 0x004265b4 */
int __fastcall sub_604267D0(int a1, unsigned int a2);  /* 0x004267d0 */
int __fastcall sub_60426814(int a1, unsigned int a2);  /* 0x00426814 */
int __fastcall sub_604269A8(int a1);  /* 0x004269a8 */
int __fastcall sub_60426C24(_DWORD *a1, int a2);  /* 0x00426c24 */
int __fastcall sub_60426E38(int a1, int a2);  /* 0x00426e38 */
int __fastcall sub_60427048(_DWORD *a1);  /* 0x00427048 */
int __fastcall sub_60427280(int a1);  /* 0x00427280 */
int __fastcall sub_604277E0(int a1, int *a2, int a3, int a4, int a5, int a6);  /* 0x004277e0 */
int __fastcall sub_60427A10(int result, int a2, int a3);  /* 0x00427a10 */
int __fastcall sub_60427BC8(int a1, int a2, int a3, int a4);  /* 0x00427bc8 */
int __fastcall sub_60427D38(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x00427d38 */
int __fastcall sub_60427EF4(int a1, int a2);  /* 0x00427ef4 */
int __fastcall sub_6042839C(int a1, _DWORD *a2);  /* 0x0042839c */
int __fastcall sub_604283E0(_DWORD *a1, int *a2, int a3);  /* 0x004283e0 */
int __fastcall sub_604288D0(int a1);  /* 0x004288d0 */
int __fastcall sub_604289D4(int a1, int a2, int a3, int a4);  /* 0x004289d4 */
int __fastcall sub_60428A54(int a1, int a2);  /* 0x00428a54 */
int __fastcall sub_60428D08(int a1);  /* 0x00428d08 */
int __fastcall sub_60428D84(int result, int *a2, int a3, int a4, int a5, int a6);  /* 0x00428d84 */
int __fastcall sub_60428EFC(int a1, int a2, int a3, int a4);  /* 0x00428efc */
int __fastcall sub_60428FBC(_DWORD *a1, int a2);  /* 0x00428fbc */
unsigned int __fastcall sub_6042909C(int a1, int a2, int a3);  /* 0x0042909c */
int __fastcall sub_604293E8(int a1, int a2);  /* 0x004293e8 */
int __fastcall sub_60429EF0(float *a1, float *a2, int a3);  /* 0x00429ef0 */
int __fastcall sub_6042A11C(_DWORD *a1, int CurrentHeap, int a3, int a4);  /* 0x0042a11c */
int __fastcall sub_6042A180(int a1, int a2, unsigned int a3);  /* 0x0042a180 */
int __fastcall sub_6042A29C(int a1);  /* 0x0042a29c */
int __fastcall sub_6042A324(int a1);  /* 0x0042a324 */
int __fastcall sub_6042A6C8(int a1, unsigned int a2, int a3, int a4);  /* 0x0042a6c8 */
int __fastcall sub_6042A8AC(int a1, unsigned int a2);  /* 0x0042a8ac */
int __fastcall sub_6042A9E8(int a1, _DWORD *a2);  /* 0x0042a9e8 */
int __fastcall sub_6042AA40(_DWORD *a1, int a2, unsigned int a3, unsigned int a4);  /* 0x0042aa40 */
unsigned int __fastcall sub_6042AC08(_DWORD *a1, unsigned int a2, unsigned int a3);  /* 0x0042ac08 */
int __fastcall sub_6042ADEC(_DWORD *a1, unsigned int a2);  /* 0x0042adec */
int __fastcall sub_6042AE60(_DWORD *a1);  /* 0x0042ae60 */
int __fastcall sub_6042B0CC(_DWORD *a1, int a2);  /* 0x0042b0cc */
int __fastcall sub_6042B378(_DWORD *a1);  /* 0x0042b378 */
int __fastcall sub_6042B62C(signed int *a1, signed int a2, int a3, int a4);  /* 0x0042b62c */
int __fastcall sub_6042B868(int a1);  /* 0x0042b868 */
int __fastcall sub_6042B94C(int a1, const void *a2);  /* 0x0042b94c */
int __fastcall sub_6042BA90(int a1, int a2);  /* 0x0042ba90 */
int __fastcall sub_6042BAEC(int a1, char *a2);  /* 0x0042baec */
int __fastcall sub_6042BB44(int a1, char *a2, unsigned int a3);  /* 0x0042bb44 */
int __fastcall sub_6042BD4C(int a1, int a2);  /* 0x0042bd4c */
int __fastcall sub_6042BD90(int a1);  /* 0x0042bd90 */
int __fastcall sub_6042BEE0(int a1);  /* 0x0042bee0 */
int __fastcall sub_6042C4DC(int a1, int a2, _DWORD *a3);  /* 0x0042c4dc */
int __fastcall sub_6042C5A0(int a1);  /* 0x0042c5a0 */
int __fastcall sub_6042C734(_DWORD *a1);  /* 0x0042c734 */
int __fastcall sub_6042C900(int *a1, int a2, int a3, unsigned int a4);  /* 0x0042c900 */
int __fastcall sub_6042CDB8(int a1);  /* 0x0042cdb8 */
int __fastcall sub_6042CDF8(int a1);  /* 0x0042cdf8 */
int __fastcall sub_6042CEF8(int a1);  /* 0x0042cef8 */
int __fastcall sub_6042D348(_DWORD *a1, int a2);  /* 0x0042d348 */
int __fastcall sub_6042D94C(_DWORD *a1, int a2);  /* 0x0042d94c */
int __fastcall sub_6042E09C(_DWORD *a1, int a2);  /* 0x0042e09c */
int __fastcall sub_6042E1A4(_DWORD *a1, int a2, int a3);  /* 0x0042e1a4 */
int __fastcall sub_6042E4E0(_DWORD *a1, int a2);  /* 0x0042e4e0 */
int __fastcall sub_6042E6BC(_DWORD *a1, int a2, int a3);  /* 0x0042e6bc */
int __fastcall sub_6042E898(float *a1, float *a2);  /* 0x0042e898 */
int __fastcall sub_6042ED44(_DWORD *a1);  /* 0x0042ed44 */
int __fastcall sub_6042EE58(_DWORD *a1);  /* 0x0042ee58 */
int __fastcall sub_6042EF64(int a1, int a2, unsigned int a3);  /* 0x0042ef64 */
int __fastcall sub_6042EFA8(int a1, int a2);  /* 0x0042efa8 */
int __fastcall sub_6042EFE0(int a1, int a2);  /* 0x0042efe0 */
void __fastcall sub_6042F070(_DWORD *a1);  /* 0x0042f070 */
int __fastcall sub_6042F114(int a1);  /* 0x0042f114 */
int __fastcall sub_6042F170(int a1);  /* 0x0042f170 */
int __fastcall sub_6042F1B4(int *a1, int *a2, int a3);  /* 0x0042f1b4 */
int __fastcall sub_6042F238(int a1);  /* 0x0042f238 */
int __fastcall sub_6042F294(void *a1, _DWORD *a2);  /* 0x0042f294 */
int __fastcall sub_6042F520(int a1);  /* 0x0042f520 */
int __fastcall sub_6042F6B8(int *a1);  /* 0x0042f6b8 */
int __fastcall sub_6042F798(int a1, int a2);  /* 0x0042f798 */
int __fastcall sub_6042F82C(int a1, int a2);  /* 0x0042f82c */
int __fastcall sub_6042FB94(int a1, int a2);  /* 0x0042fb94 */
int __fastcall sub_6042FCCC(int result, int a2);  /* 0x0042fccc */
int __fastcall sub_6042FDC8(int a1, int *a2, int a3);  /* 0x0042fdc8 */
int __fastcall sub_6042FE94(int a1, int *a2);  /* 0x0042fe94 */
int __fastcall Resource_getModel2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  /* 0x00430090 */
int __fastcall Resource_getModel(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x004300dc */
int __fastcall sub_604302C8(int a1, int a2, int a3);  /* 0x004302c8 */
int __fastcall sub_60430818(int a1, unsigned int a2, int a3, float32x2_t *a4, int a5, _DWORD *a6, float *a7);  /* 0x00430818 */
int __fastcall sub_60431430(int result);  /* 0x00431430 */
int __fastcall sub_60431578(int a1);  /* 0x00431578 */
int __fastcall sub_60431618(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00431618 */
int __fastcall sub_60431864(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00431864 */
int __fastcall sub_60431918(_DWORD *a1, int a2, int a3, unsigned int a4, int a5);  /* 0x00431918 */
int __fastcall sub_60431C70(_DWORD *a1, int a2);  /* 0x00431c70 */
int __fastcall sub_60431E20(int a1);  /* 0x00431e20 */
int __fastcall sub_60431F1C(_DWORD *a1);  /* 0x00431f1c */
int __fastcall sub_604332D4(int a1);  /* 0x004332d4 */
int __fastcall sub_60433658(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00433658 */
int __fastcall sub_60433F10(int a1, int a2);  /* 0x00433f10 */
int __fastcall sub_60434AE8(int a1, int a2, int a3, _DWORD *a4);  /* 0x00434ae8 */
unsigned int __fastcall sub_60435A24(int a1, int a2, int a3, int a4, unsigned int *a5);  /* 0x00435a24 */
int __fastcall sub_604364F8(int a1, _DWORD *a2, int a3);  /* 0x004364f8 */
int __fastcall sub_60436A4C(int a1);  /* 0x00436a4c */
int __fastcall sub_60436B70(_DWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5);  /* 0x00436b70 */
int __fastcall sub_60436FEC(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6);  /* 0x00436fec */
int __fastcall sub_604373E4(int a1);  /* 0x004373e4 */
int __fastcall sub_60437644(_DWORD *a1, int a2);  /* 0x00437644 */
int __fastcall sub_604376E0(_DWORD *a1, int a2, int a3);  /* 0x004376e0 */
int __fastcall sub_604377CC(int a1);  /* 0x004377cc */
int __fastcall sub_60437A1C(int a1);  /* 0x00437a1c */
int __fastcall sub_60437A74(int a1, int a2);  /* 0x00437a74 */
int __fastcall sub_604399E4(int a1, int a2);  /* 0x004399e4 */
int __fastcall sub_60439B18(int result, int a2, int a3, int a4);  /* 0x00439b18 */
void __fastcall sub_60439C6C(_DWORD *a1);  /* 0x00439c6c */
int __fastcall sub_60439CF4(_DWORD *a1);  /* 0x00439cf4 */
int __fastcall sub_60439E34(int a1, int a2, int a3);  /* 0x00439e34 */
int __fastcall sub_60439ED4(int a1, int a2, int a3, int a4, int a5);  /* 0x00439ed4 */
int __fastcall sub_60439F74(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00439f74 */
int __fastcall sub_6043ADF8(int a1, _DWORD *a2);  /* 0x0043adf8 */
int __fastcall sub_6043AE64(int a1, _DWORD *a2);  /* 0x0043ae64 */
int __fastcall sub_6043AED0(int a1, _DWORD *a2);  /* 0x0043aed0 */
int __fastcall sub_6043AF3C(int a1, int a2, int a3);  /* 0x0043af3c */
int __fastcall sub_6043B2D8(int a1, _DWORD *a2, int a3, int a4);  /* 0x0043b2d8 */
int __fastcall LoadResource(int a1, _DWORD *a2);  /* 0x0043b548 */
int __fastcall sub_6043B8B0(int a1, int a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x0043b8b0 */
int __fastcall sub_6043C320(int a1, int a2);  /* 0x0043c320 */
int __fastcall sub_6043C4B4(_DWORD *a1, _DWORD *a2);  /* 0x0043c4b4 */
void __fastcall sub_6043C7E8(sead::IDisposer *a1);  /* 0x0043c7e8 */
int __fastcall sub_6043D148(int a1);  /* 0x0043d148 */
int __fastcall sub_6043D1CC(int a1);  /* 0x0043d1cc */
void __fastcall sub_6043D2C0(int a1);  /* 0x0043d2c0 */
int __fastcall sub_6043D388(int a1, int a2, int a3);  /* 0x0043d388 */
int __fastcall sub_6043DB38(int a1, int a2, int a3);  /* 0x0043db38 */
int __fastcall sub_6043E808(int a1, size_t a2);  /* 0x0043e808 */
int __fastcall sub_6043E8A4(int a1, int a2);  /* 0x0043e8a4 */
void __fastcall sub_6043E954(sead::IDisposer *a1);  /* 0x0043e954 */
int __fastcall sub_6043EB24(_DWORD *a1, int a2);  /* 0x0043eb24 */
int __fastcall sub_6043EF40(_DWORD *a1, int a2, int a3);  /* 0x0043ef40 */
int __fastcall sub_6043EF70(int a1, _DWORD *a2);  /* 0x0043ef70 */
int __fastcall sub_6043F0B8(int a1, int a2, int a3);  /* 0x0043f0b8 */
int __fastcall sub_6043F1D0(int a1, _DWORD *a2);  /* 0x0043f1d0 */
int __fastcall sub_6043FA94(int a1);  /* 0x0043fa94 */
int __fastcall sub_6043FCB8(int a1, int a2);  /* 0x0043fcb8 */
int __fastcall sub_60440108(_DWORD *a1);  /* 0x00440108 */
bool __fastcall sub_6044022C(unsigned __int8 **a1);  /* 0x0044022c */
int __fastcall sub_60440288(int a1, int a2, unsigned int a3, int a4);  /* 0x00440288 */
int __fastcall sub_6044083C(int a1, int a2, int a3, int a4, int a5);  /* 0x0044083c */
int __fastcall sub_60440C2C(_DWORD *a1, int a2);  /* 0x00440c2c */
int __fastcall sub_60440F90(int a1);  /* 0x00440f90 */
int __fastcall sub_60441050(_DWORD *a1, int a2);  /* 0x00441050 */
int __fastcall sub_60441454(int a1, int a2);  /* 0x00441454 */
int __fastcall sub_60441758(_DWORD *a1, int a2, int a3);  /* 0x00441758 */
int __fastcall sub_604419EC(_DWORD *a1, int a2);  /* 0x004419ec */
int __fastcall sub_60441B18(int a1);  /* 0x00441b18 */
int __fastcall sub_60441CAC(_DWORD *a1);  /* 0x00441cac */
int __fastcall sub_60442878(int a1, int a2, int a3);  /* 0x00442878 */
int __fastcall sub_604431BC(_DWORD *a1, int a2, unsigned int a3);  /* 0x004431bc */
int __fastcall DrawMgr_drawModel(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x004432a4 */
int __fastcall DrawMgr_drawModel2(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00443344 */
int __fastcall sub_604433E4(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x004433e4 */
int __fastcall DrawMgr_drawTile(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x0044344c */
int __fastcall sub_604434C8(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x004434c8 */
int __fastcall sub_6044364C(int a1);  /* 0x0044364c */
int __fastcall sub_60443C7C(int *a1, int a2);  /* 0x00443c7c */
int __fastcall sub_60443FE0(int a1, int a2);  /* 0x00443fe0 */
int __fastcall sub_60444108(_DWORD *a1, int a2, int a3, signed int a4, signed int a5, int a6);  /* 0x00444108 */
int __fastcall sub_604448AC(_DWORD *a1, int a2, int a3, int a4, signed int a5, signed int a6, int a7);  /* 0x004448ac */
int __fastcall sub_60444DD8(int result);  /* 0x00444dd8 */
int __fastcall sub_60444EDC(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00444edc */
int __fastcall sub_60445044(int a1, unsigned int a2);  /* 0x00445044 */
int __fastcall sub_60445120(_DWORD *a1, unsigned int a2, _DWORD *a3);  /* 0x00445120 */
int __fastcall sub_60445224(_DWORD *a1, unsigned int a2, _DWORD *a3);  /* 0x00445224 */
int __fastcall sub_60445328(int a1, unsigned int a2, int a3);  /* 0x00445328 */
int __fastcall sub_604453AC(_DWORD *a1, unsigned int a2, int a3);  /* 0x004453ac */
int __fastcall sub_60445458(_DWORD *a1, unsigned int a2, int a3);  /* 0x00445458 */
int __fastcall sub_60445504(_DWORD *a1, _DWORD *a2, int a3, int a4, _DWORD *a5);  /* 0x00445504 */
int __fastcall sub_60445608(_DWORD *a1, int a2, int a3, int a4);  /* 0x00445608 */
int __fastcall sub_604456F0(int a1, int a2);  /* 0x004456f0 */
int __fastcall sub_60445734(int a1);  /* 0x00445734 */
int __fastcall sub_60445768(int a1, int a2, int a3);  /* 0x00445768 */
int __fastcall sub_60445A10(_DWORD *a1, int a2);  /* 0x00445a10 */
int __fastcall sub_60445CD0(int a1, int a2, int a3, int *a4, int a5);  /* 0x00445cd0 */
int __fastcall sub_60445E30(int result, int a2);  /* 0x00445e30 */
int __fastcall ShuAnim_play(int a1, int a2, _DWORD *a3);  /* 0x00445f80 */
int __fastcall sub_60446088(int a1, int a2, _DWORD *a3);  /* 0x00446088 */
int __fastcall sub_60446220(int a1);  /* 0x00446220 */
int __fastcall sub_60446F0C(int result, int a2, int a3, int *a4, int a5);  /* 0x00446f0c */
int __fastcall sub_604470DC(int a1, int a2, _DWORD *a3);  /* 0x004470dc */
int __fastcall sub_60447354(int a1);  /* 0x00447354 */
int __fastcall sub_604475BC(int a1);  /* 0x004475bc */
int __fastcall sub_604476FC(int a1, int a2, int a3, int a4, int a5);  /* 0x004476fc */
int __fastcall sub_60447898(int a1, int a2, int a3);  /* 0x00447898 */
int __fastcall sub_60447914(int a1, int a2, char a3, int a4);  /* 0x00447914 */
unsigned int __fastcall sub_60447E64(int a1, int a2, int a3, int a4);  /* 0x00447e64 */
int __fastcall sub_60447FD0(int a1, _DWORD *a2, int a3);  /* 0x00447fd0 */
unsigned int __fastcall sub_60448298(_DWORD *a1);  /* 0x00448298 */
int __fastcall sub_60448388(int a1, int a2, _DWORD *a3, int a4);  /* 0x00448388 */
int __fastcall sub_604484CC(int a1, int a2, int a3, _BYTE *a4);  /* 0x004484cc */
int __fastcall sub_60448530(int a1, int a2, int a3);  /* 0x00448530 */
int __fastcall SkeletalAnim_init(int a1, int a2, int a3, int *a4, int a5);  /* 0x004486c8 */
int __fastcall SkeletalAnim_play(int a1, int a2, _DWORD *a3);  /* 0x004488dc */
int __fastcall sub_60448AF4(int result, int a2);  /* 0x00448af4 */
int __fastcall sub_60448B4C(int result);  /* 0x00448b4c */
int __fastcall sub_60448C14(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int a5);  /* 0x00448c14 */
int __fastcall sub_60448D04(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int a5);  /* 0x00448d04 */
int __fastcall sub_604490E4(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x004490e4 */
int __fastcall sub_60449314(int a1);  /* 0x00449314 */
int __fastcall sub_60449810(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00449810 */
int __fastcall sub_604498E8(int a1);  /* 0x004498e8 */
int __fastcall sub_6044A024(int a1);  /* 0x0044a024 */
int __fastcall sub_6044B314(int a1, int a2, int a3, int a4);  /* 0x0044b314 */
unsigned int __fastcall sub_6044B410(_DWORD *a1);  /* 0x0044b410 */
int __fastcall sub_6044B798(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0044b798 */
int __fastcall sub_6044B880(int a1);  /* 0x0044b880 */
int __fastcall sub_6044BD6C(int a1, int a2, int a3, int a4);  /* 0x0044bd6c */
int __fastcall sub_6044BECC(int a1);  /* 0x0044becc */
int __fastcall sub_6044C1FC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0044c1fc */
int __fastcall sub_6044C4AC(int a1);  /* 0x0044c4ac */
int __fastcall sub_6044C520(int a1, unsigned int a2);  /* 0x0044c520 */
int __fastcall sub_6044C848(int a1, unsigned int a2);  /* 0x0044c848 */
int __fastcall sub_6044CF6C(int a1, int a2);  /* 0x0044cf6c */
int __fastcall sub_6044D3DC(int a1, unsigned int a2);  /* 0x0044d3dc */
int __fastcall sub_6044DB00(int a1, int a2, int a3);  /* 0x0044db00 */
int __fastcall sub_6044E288(_DWORD *a1, int a2, int a3, int a4);  /* 0x0044e288 */
int __fastcall sub_6044E360(float *a1);  /* 0x0044e360 */
int __fastcall sub_6044E668(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x0044e668 */
int __fastcall sub_6044E800(int a1, int a2);  /* 0x0044e800 */
int __fastcall sub_6044EE58(int a1);  /* 0x0044ee58 */
int __fastcall sub_6044EED0(_DWORD *a1, int a2, int a3);  /* 0x0044eed0 */
int __fastcall sub_6044F1C4(int a1, int a2);  /* 0x0044f1c4 */
void __fastcall sub_6044F858(_DWORD *a1);  /* 0x0044f858 */
int __fastcall sub_6044FED0(int a1, int a2, int a3, int a4);  /* 0x0044fed0 */

