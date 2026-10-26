/* Player_ctor
 * address: 0x60794EC0   size: 1996   group: player
 * sym: # Player_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Player_ctor(StateActor *a1, ActorBuildInfo *a2)
{
  int v3; // r1
  unsigned int v4; // r2
  float x; // r0
  float y; // r1
  sead_IDisposer *v7; // r0
  sead_IDisposer *v8; // r0
  unsigned int settings1; // r0
  int v10; // r1
  unsigned int playerId; // r0

  PlayerBase_ctor(a1, a2);
  v3 = 0;
  FIELD_U32(a1, 0x0) = (int)&Player_vtable;
  v4 = ((unsigned int)FIELD_U32(a1, 0x14) >> 8) & 0xF;
  if ( v4 <= 6 )
    v3 = dword_60B0C330[v4];
  sub_60794B48(&a1[1]._.collisionMgr[4608], v3, 0, FIELD_U32(a1, 0x14) & 0xF, 1);
  memset(&a1[1]._.collisionMgr[4624], 0, 96);
  x = FIELD_F32(a1, 0x6C);
  y = FIELD_F32(a1, 0x70);
  *(float *)&a1[1]._.collisionMgr[4728] = FIELD_F32(a1, 0x74);
  *(float *)&a1[1]._.collisionMgr[4724] = y;
  *(float *)&a1[1]._.collisionMgr[4720] = x;
  *(_DWORD *)&a1[1]._.collisionMgr[4732] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4736] = 1;
  sub_60021018(&a1[1]._.collisionMgr[4740]);
  LightSource__ctor((LightSource *)&a1[1]._.collisionMgr[5120]);
  *(_DWORD *)&a1[1]._.collisionMgr[5192] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5196] = 0;
  a1[1]._.collisionMgr[5200] = 0;
  v7 = (sead_IDisposer *)operator_new(0x1Cu);
  *(_DWORD *)&a1[1]._.collisionMgr[5204] = Player_ctor_helper_3E568C(v7, FIELD_U32(a1, 0x14) & 0xF);
  sub_6074EE98((int)&a1[1]._.collisionMgr[5208]);
  *(_DWORD *)&a1[1]._.collisionMgr[5252] = 0;
  a1[1]._.collisionMgr[5256] = 0;
  v8 = (sead_IDisposer *)operator_new(0x24u);
  *(_DWORD *)&a1[1]._.collisionMgr[5260] = Player_ctor_helper(v8, FIELD_U32(a1, 0x14) & 0xF);
  a1[1]._.collisionMgr[5264] = 0;
  a1[1]._.collisionMgr[5265] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5268] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5272] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5276] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5280] = 1065353216;
  a1[1]._.collisionMgr[5304] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5300] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5296] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5292] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5288] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5284] = 0;
  a1[1]._.collisionMgr[5320] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5316] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5312] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5308] = 0;
  memset(&a1[1]._.collisionMgr[5324], 0, 61);
  *(_DWORD *)&a1[1]._.field_17A4 = 0;
  a1[1]._.field_17A0 = 0.0;
  a1[1]._.field_179C = 0.0;
  a1[1]._.field_1798 = 0.0;
  a1[1]._.field_1794 = 0;
  a1[1]._.field_17A8 = 1065353216;
  LOBYTE(a1[1].states.executer.methodExecuter.vtable) = 0;
  a1[1].states.executer.vtable = 0;
  a1[1].states.vtable = 0;
  FIELD_U32(a1 + (1) * 6100, 0x17AC) = 0;
  LOBYTE(a1[1].states.manager.currentMethodExecuter) = 0;
  a1[1].states.manager.nextState = 0;
  a1[1].states.manager.executer = 0;
  a1[1].states.executer.methodExecuter.currentState = 0;
  a1[1].states.executer.methodExecuter.owner = 0;
  memset(&a1[1].states.manager.lastState, 0, 80);
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._._._.field_4C);
  a1[2]._._._.field_4C = (int)off_60BC1450;
  a1[2]._._.aCollider.field_44 = 0;
  a1[2]._._.aCollider.field_48 = 0;
  a1[2]._._.aCollider.field_4C = 0;
  LOBYTE(a1[2]._._.aCollider._.containingHeap) = 0;
  a1[2]._._.aCollider._.vtable = 0;
  a1[2]._._.field_B8 = 0;
  a1[2]._._.field_B4 = 0;
  memset(&a1[2]._._.aCollider._.field_8, 0, 58);
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._._.aCollider.field_50);
  a1[2]._._.aCollider.field_50 = (int)off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._._.aCollider.field_B8);
  a1[2]._._.aCollider.field_B8 = (int)off_60BC1450;
  a1[2]._._.aCollider.field_120 = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._._.aCollider.field_124);
  a1[2]._._.aCollider.field_124 = (int)off_60BC1450;
  a1[2]._._.field_260.y = 0.0;
  a1[2]._._.field_260.z = 0.0;
  LOWORD(a1[2]._._.field_26C) = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[72] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[76] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[80] = 0;
  LOBYTE(a1[2]._._.field_260.x) = 0;
  a1[2]._._.field_254.z = 0.0;
  FIELD_F32(a1 + (2) * 6100, 0x258) = 0.0;
  a1[2]._._.field_254.x = 0.0;
  a1[2]._._.field_248.z = 0.0;
  a1[2]._._.field_248.y = 0.0;
  a1[2]._._.field_248.x = 0.0;
  memset(&a1[2]._._.field_270, 0, 69);
  a1[2]._.collisionMgr[70] = 0;
  *(_WORD *)&a1[2]._.collisionMgr[68] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[64] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[60] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[56] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[52] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[48] = 0;
  Player_ctor_helper_77B890(&a1[2]._.collisionMgr[84], FIELD_U32(a1, 0x8));
  *(_DWORD *)&a1[2]._.collisionMgr[120] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[124] = 0;
  a1[2]._.collisionMgr[128] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[132] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[136] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[140] = 1;
  *(_DWORD *)&a1[2]._.collisionMgr[144] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[148] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[152] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[204] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[208] = 0;
  a1[2]._.collisionMgr[212] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[268] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[272] = -1;
  EffectData_ctor((EffectData *)&a1[2]._.collisionMgr[216]);
  *(_DWORD *)&a1[2]._.collisionMgr[332] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[336] = -1;
  EffectData_ctor((EffectData *)&a1[2]._.collisionMgr[280]);
  *(_DWORD *)&a1[2]._.collisionMgr[396] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[400] = -1;
  EffectData_ctor((EffectData *)&a1[2]._.collisionMgr[344]);
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[408]);
  *(_DWORD *)&a1[2]._.collisionMgr[408] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[512]);
  *(_DWORD *)&a1[2]._.collisionMgr[512] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[616]);
  *(_DWORD *)&a1[2]._.collisionMgr[616] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[720]);
  *(_DWORD *)&a1[2]._.collisionMgr[720] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[824]);
  *(_DWORD *)&a1[2]._.collisionMgr[824] = off_60BC1450;
  *(_DWORD *)&a1[2]._.collisionMgr[980] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[984] = -1;
  EffectData_ctor((EffectData *)&a1[2]._.collisionMgr[928]);
  *(_DWORD *)&a1[2]._.collisionMgr[1044] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[1048] = -1;
  EffectData_ctor((EffectData *)&a1[2]._.collisionMgr[992]);
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1056]);
  *(_DWORD *)&a1[2]._.collisionMgr[1056] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1160]);
  *(_DWORD *)&a1[2]._.collisionMgr[1160] = off_60BC1450;
  memset(&a1[2]._.collisionMgr[1264], 0, 212);
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1268]);
  *(_DWORD *)&a1[2]._.collisionMgr[1268] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1372]);
  *(_DWORD *)&a1[2]._.collisionMgr[1372] = off_60BC1450;
  memset(&a1[2]._.collisionMgr[1476], 0, 208);
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1476]);
  *(_DWORD *)&a1[2]._.collisionMgr[1476] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1580]);
  *(_DWORD *)&a1[2]._.collisionMgr[1580] = off_60BC1450;
  *(_DWORD *)&a1[2]._.collisionMgr[1696] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[1684] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[1692] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[1688] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1700]);
  *(_DWORD *)&a1[2]._.collisionMgr[1700] = off_60BC1450;
  *(_DWORD *)&a1[2]._.collisionMgr[1804] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1808]);
  *(_DWORD *)&a1[2]._.collisionMgr[1808] = off_60BC1450;
  *(_DWORD *)&a1[2]._.collisionMgr[1912] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[1916]);
  *(_DWORD *)&a1[2]._.collisionMgr[1916] = off_60BC1450;
  *(_DWORD *)&a1[2]._.collisionMgr[2020] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2024] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[2]._.collisionMgr[2028]);
  *(_DWORD *)&a1[2]._.collisionMgr[2028] = off_60BC1450;
  Player_ctor_helper_786018(&a1[2]._.collisionMgr[2132]);
  *(_DWORD *)&a1[2]._.collisionMgr[2208] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2212] = 0;
  a1[2]._.collisionMgr[2172] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2156] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2152] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2168] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2164] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2160] = 0;
  *(_WORD *)&a1[2]._.collisionMgr[2204] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2180] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2176] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2184] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2188] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2192] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2196] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2200] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2216] = -1;
  *(_DWORD *)&a1[2]._.collisionMgr[2220] = 10;
  *(_DWORD *)&a1[2]._.collisionMgr[2224] = 0;
  a1[2]._.collisionMgr[2228] = 1;
  a1[2]._.collisionMgr[2229] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2160] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2164] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2168] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4700] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4696] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4692] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4688] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4684] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4680] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2200] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2196] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2192] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2188] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2184] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2244] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2240] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2236] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[2232] = 0;
  settings1 = FIELD_U32(a1, 0x14);
  *(_DWORD *)&FIELD_U8(a1, 0x288)[668] = (settings1 >> 8) & 0xF;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[672] = (unsigned __int8)settings1 >> 4;
  FIELD_U8(a1, 0x54) = settings1 & 0xF;
  FIELD_U32(a1, 0x50) = HIBYTE(settings1) & 0xF;
  sub_60786324(&FIELD_U8(a1, 0x288)[40], settings1 & 0xF);
  FIELD_U8(a1, 0x215) = 1;
  v10 = 0;
  *(_DWORD *)FIELD_U8(a1, 0x288) = (char *)a1 + 11356;
  playerId = (unsigned __int8)FIELD_U8(a1, 0x54);
  if ( playerId < 6 )
    v10 = (char)playerId;
  (*(void (__fastcall **)(int, _DWORD))(**(_DWORD **)&a1[1]._.collisionMgr[4620] + 200))(
    *(_DWORD *)&a1[1]._.collisionMgr[4620],
    *(unsigned __int8 *)(dword_60C99DD4 + 72 * v10 + 320));
  FIELD_U8(a1, 0x288)[664] = FIELD_U8(a1, 0x54);
  *(_DWORD *)&a1[2]._.collisionMgr[1688] = 0;
  *(_DWORD *)&a1[2]._.collisionMgr[1692] = 0;
  return a1;
}
