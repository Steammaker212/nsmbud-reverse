/* sub_602CF1C0
 * address: 0x602CF1C0   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CF1C0(int a1)
{
  float v2; // s4
  float v3; // s0
  float v4; // s10
  float v5; // s14
  int v6; // r0
  float v7; // s12
  float v8; // s10
  int v9; // r0
  float v10; // s12
  float v11; // s10
  int v12; // r0
  float v13; // s12
  float v14; // s10
  int v15; // r0
  float v16; // s12
  float v17; // s2
  int v18; // r1
  __int16 v19; // r1
  int *v20; // r0
  float v21; // s0
  int v22; // r0
  int v23; // r1
  int v24; // r1
  int v25; // r1
  _DWORD **v26; // r4
  int *v27; // t1
  int v28; // r0
  int (__fastcall *v29)(int, int (***)()); // r2
  int v30; // r0
  int v32; // [sp+8h] [bp-50h] BYREF
  int (**v33)(); // [sp+Ch] [bp-4Ch] BYREF
  const char *v34; // [sp+10h] [bp-48h]
  int v35; // [sp+14h] [bp-44h]
  float v36; // [sp+18h] [bp-40h]
  StateVirtual *v37; // [sp+1Ch] [bp-3Ch]
  char v38; // [sp+20h] [bp-38h]
  int v39; // [sp+24h] [bp-34h]
  float v40; // [sp+28h] [bp-30h]
  float v41; // [sp+38h] [bp-20h]
  Vec3 v42; // [sp+3Ch] [bp-1Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 6328);
  v5 = (float)(FIELD_F32(a1, 6324) + 0.0) - v2;
  FIELD_F32(a1, 6716) = v5;
  FIELD_F32(a1, 6720) = (float)(v4 + 13.0) - v3;
  FIELD_F32(a1, 7020) = v5;
  FIELD_F32(a1, 7024) = (float)(v4 + 4.0) - v3;
  v6 = FIELD_U32(a1, 6436);
  v7 = FIELD_F32(v6, 12);
  v8 = (float)(FIELD_F32(v6, 8) + 0.0) - v2;
  FIELD_F32(a1, 7324) = v8;
  FIELD_F32(a1, 7328) = (float)(v7 + 13.0) - v3;
  FIELD_F32(a1, 7628) = v8;
  FIELD_F32(a1, 7632) = (float)(v7 + 4.0) - v3;
  v9 = FIELD_U32(v6, 120);
  v10 = FIELD_F32(v9, 12);
  v11 = (float)(FIELD_F32(v9, 8) + 0.0) - v2;
  FIELD_F32(a1, 7932) = v11;
  FIELD_F32(a1, 7936) = (float)(v10 + 13.0) - v3;
  FIELD_F32(a1, 8236) = v11;
  FIELD_F32(a1, 8240) = (float)(v10 + 4.0) - v3;
  v12 = FIELD_U32(v9, 120);
  v13 = FIELD_F32(v12, 12);
  v14 = (float)(FIELD_F32(v12, 8) + 0.0) - v2;
  FIELD_F32(a1, 8540) = v14;
  FIELD_F32(a1, 8544) = (float)(v13 + 13.0) - v3;
  FIELD_F32(a1, 8844) = v14;
  FIELD_F32(a1, 8848) = (float)(v13 + 4.0) - v3;
  v15 = FIELD_U32(v12, 120);
  v16 = FIELD_F32(v15, 12);
  v17 = (float)(FIELD_F32(v15, 8) + 0.0) - v2;
  FIELD_F32(a1, 9148) = v17;
  FIELD_F32(a1, 9152) = (float)(v16 + 13.0) - v3;
  FIELD_F32(a1, 9452) = v17;
  FIELD_F32(a1, 9456) = (float)(v16 + 4.0) - v3;
  v18 = FIELD_S16(a1, 6564);
  if ( v18 < 1 )
  {
    v21 = 1.0;
  }
  else
  {
    v19 = v18 - 1;
    FIELD_U16(a1, 6564) = v19;
    v20 = dword_602CF588;
    if ( (v19 & 4) != 0 )
      v20 = &dword_602CF588[1];
    v21 = *(float *)v20 + FIELD_F32(a1, 6568);
    FIELD_F32(a1, 6568) = v21;
  }
  FIELD_F32(a1, 144) = v21;
  FIELD_F32(a1, 148) = v21;
  FIELD_F32(a1, 152) = v21;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v22 == 1 )
    FIELD_U8(a1, 19) = 1;
  sub_602A33AC((_BYTE *)a1);
  v23 = FIELD_U32(a1, 6588);
  if ( v23 )
    FIELD_U32(a1, 6588) = v23 - 1;
  v24 = FIELD_U32(a1, 6596);
  if ( !v24 || (v25 = v24 - 1, (FIELD_U32(a1, 6596) = v25) == 0) )
    FIELD_U32(a1, 6592) = 0;
  v32 = 0;
  if ( sub_602CF5A4(a1, &v32) == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    v33 = 0;
    v34 = 0;
    v35 = -1065353216;
    v36 = unk_60C906E8;
    v37 = &stru_60C90710;
    v38 = 0;
    v39 = 0;
    LOBYTE(v40) = -1;
    sub_602A852C(a1 + 6104, &v33);
  }
  if ( FIELD_U8(a1, 6584) )
  {
    v27 = *(int **)(a1 + 6320);
    v26 = (_DWORD **)(a1 + 6320);
    v28 = *v27;
    v29 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)*v27 + 84);
    v33 = &sead__SafeStringBase__vtable;
    v34 = "nose";
    v30 = v29(v28, &v33);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v26 + 108))(**v26, v30, &v33);
    v42.x = v36;
    v42.y = v40;
    v42.z = v41;
    EffectWrapper_update((EffectWrapper *)(v26 + 30), 859, &v42, 0, 0);
  }
  return 1;
}
