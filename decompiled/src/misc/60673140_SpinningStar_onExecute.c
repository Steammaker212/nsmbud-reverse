/* SpinningStar_onExecute
 * address: 0x60673140   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SpinningStar_onExecute(int a1)
{
  int v1; // r7
  char v3; // r10
  _DWORD *v4; // r9
  float v5; // s16
  bool v6; // zf
  int v7; // r0
  char v8; // r3
  __int16 v9; // r0
  unsigned int v10; // r1
  int v11; // r7
  char v12; // r3
  int v13; // r7
  int v14; // r1
  char v15; // r3
  float v16; // s2
  __int16 *v18; // [sp+4h] [bp-7Ch]
  float *v19; // [sp+8h] [bp-78h]
  int v20; // [sp+Ch] [bp-74h] BYREF
  _BYTE v21[112]; // [sp+10h] [bp-70h] BYREF

  SpinningStar_onExecute_helper_674470(a1 + 7584, a1 + 144);
  v3 = 0;
  v18 = (__int16 *)(a1 + 7610);
  FIELD_U16(a1, 7614) = FIELD_U16(a1, 7610);
  FIELD_U16(a1, 7616) = FIELD_U16(a1, 7612);
  v19 = (float *)(a1 + 6100);
  FIELD_U16(a1, 7608) = 0;
  v4 = *(_DWORD **)(a1 + 6392);
  if ( v4 )
  {
    v3 = 0;
    v5 = *v19;
    do
    {
      v6 = *v4 == 0;
      if ( *v4 )
      {
        v1 = *(_DWORD *)(*v4 + 2196);
        v6 = v1 == 0;
      }
      if ( !v6 )
      {
        memset(v21, 0, 64);
        v20 = 0;
        v7 = sub_606C5B88(v21, v1, 0, &v20);
        FIELD_U16(a1, 7608) |= v20;
        if ( FIELD_F32(v1, 108) < v5 )
          v7 = -v7;
        v3 += v7;
      }
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 );
  }
  FIELD_U8(a1, 7622) = v3;
  SpinningStar_onExecute_helper(a1);
  v8 = -1;
  v9 = *v18;
  v10 = FIELD_U16(a1, 7612);
  v11 = (v10 >> 1) & 1;
  if ( (*v18 & 1) == 0 )
    v8 = v10 & 1;
  if ( (v9 & 2) != 0 )
    LOBYTE(v11) = -1;
  v12 = v11 + v8;
  v13 = (v10 >> 2) & 1;
  v14 = (v10 >> 3) & 1;
  if ( (v9 & 4) != 0 )
    LOBYTE(v13) = -1;
  v15 = v12 + v13;
  if ( (v9 & 8) != 0 )
    LOBYTE(v14) = -1;
  FIELD_U8(a1, 7621) = v15 + v14;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_60672DC8((float *)a1);
  v16 = FIELD_F32(a1, 6104) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 6308) = *v19 - FIELD_F32(a1, 108);
  FIELD_F32(a1, 6312) = v16;
  FIELD_U32(a1, 6380) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6136));
  StageActor__cullCheck((StageActor *)a1, 0);
  FIELD_U8(a1, 7618) = 0;
  FIELD_U8(a1, 7625) = 0;
  return 1;
}
