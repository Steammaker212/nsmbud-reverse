/* sub_605F43EC
 * address: 0x605F43EC   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605F43EC(int a1, int a2)
{
  int v4; // r5
  unsigned int v6; // r0
  float v7; // r2
  float v8; // r0
  _BYTE *v9; // r0
  unsigned int v10; // r0
  unsigned __int8 *v11; // r2
  __int16 v12; // r1
  __int16 v13; // r3
  _DWORD *v14; // r5
  int v15; // s0
  char v16; // r0
  unsigned __int8 v17; // r0
  ActiveCollider *v18; // r6
  ActiveCollider *v19; // r1
  ActiveColliderMgr *v20; // r4
  unsigned __int8 v21[4]; // [sp+8h] [bp-20h] BYREF
  __int16 v22; // [sp+Ch] [bp-1Ch]
  unsigned __int8 v23; // [sp+Eh] [bp-1Ah]

  v4 = 0;
  if ( FIELD_U8(dword_60CC6D78, 109032) || FIELD_U8(dword_60C9A1F0, 6517) )
    return v4;
  v6 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6136) = (unsigned __int16)v6 >> 12;
  FIELD_U32(a1, 6140) = (v6 >> 8) & 0xF;
  FIELD_U32(a1, 6144) = (v6 >> 20) & 1;
  v7 = FIELD_F32(a1, 108);
  FIELD_F32(a1, 6108) = v7;
  v8 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6112) = v8;
  FIELD_U32(a1, 6116) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 112) = v8 + -3.0;
  if ( sub_603FD6E0(dword_60C99DF4, FIELD_U8(LevelInfo_instance, 18), v7, v8) )
  {
    if ( !a2 )
    {
      v9 = *(_BYTE **)(a1 + 632);
      if ( v9 )
        *v9 = 1;
    }
    return v4;
  }
  FIELD_U32(a1, 6132) = 0;
  v10 = FIELD_U32(a1, 6136);
  if ( v10 > 2 )
    goto LABEL_13;
  v4 = 0;
  v11 = (unsigned __int8 *)dword_60C99DD4;
  if ( (FIELD_U8(dword_60C99DD4, 736) & (unsigned __int8)(1 << v10)) != 0 )
    FIELD_U32(a1, 6132) = 1;
  v12 = v11[733];
  v13 = v11[734];
  v23 = v11[735];
  v22 = v12 | (v13 << 8);
  if ( *((unsigned __int8 *)&v22 + v10) == 255 )
  {
LABEL_13:
    v14 = (_DWORD *)(a1 + 6140);
    sub_605F46C0(a1);
    v15 = -985956352;
    if ( !FIELD_U8(a1, 86) )
    {
      FIELD_U32(a1, 116) = 1141473280;
      if ( *v14 != 1 )
      {
        if ( *v14 != 2 )
          goto LABEL_15;
        v15 = -998637568;
      }
    }
    FIELD_U32(a1, 116) = v15;
LABEL_15:
    if ( FIELD_U8(a1, 540) )
    {
      v16 = 54;
      if ( FIELD_U32(a1, 6144) )
        v16 = 0;
    }
    else
    {
      v16 = 0;
    }
    FIELD_U8(a1, 6165) = v16;
    FIELD_U8(a1, 6164) = -1;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 160) = FIELD_U32(dword_60CBD894, 32);
    v17 = 3;
    if ( (*v14 | 2) != 2 )
      v17 = byte_60B05DE8[*v14 & 1];
    v21[0] = v17;
    v18 = (ActiveCollider *)(a1 + 188);
    ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, &StarCoin_ActiveColliderInfo, v21, 0);
    v19 = (ActiveCollider *)(a1 + 188);
    v20 = ActiveColliderMgr_instance;
    v4 = 1;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v19)
      && !ActiveColliderMgr_isInCreateList(v20, v18) )
    {
      ActiveColliderMgr_addToCreateList(v20, v18);
    }
  }
  return v4;
}
