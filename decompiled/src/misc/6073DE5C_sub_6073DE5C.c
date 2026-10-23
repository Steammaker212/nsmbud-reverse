/* sub_6073DE5C
 * address: 0x6073DE5C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073DE5C(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // s4
  TileCheck *v5; // r0
  float v6; // s0
  _WORD *v7; // r5
  float v8; // s2
  StateBase *v9; // r1
  StateMethodExecuter *result; // r0
  Vec2 positionOffset; // [sp+8h] [bp-78h] BYREF
  Vec2 a3; // [sp+10h] [bp-70h] BYREF
  TileCheck v13; // [sp+18h] [bp-68h] BYREF
  TileCheck_Param v14; // [sp+64h] [bp-1Ch] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = byte_60B0A488[FIELD_U32(a1, 80)];
  *(_WORD *)&v14.field_0 = 0;
  a3.x = v2 + (float)((float)v4 * 10.0);
  positionOffset.x = a3.x;
  a3.y = v3 + 2.0;
  positionOffset.y = v3 + -2.0;
  v14.field_2 = FIELD_U8(a1, 86);
  v14.field_3 = FIELD_U8(a1, 87);
  v14.field_4 = 0;
  v14.field_8 = 0;
  v5 = TileCheck_ctor(&v13, &v14);
  if ( !TileCheck_check(v5, 0, &a3, &positionOffset, 15) )
  {
    v9 = (StateBase *)&dword_60CBE0D0;
    return sub_605D79D0(a1, v9, 0);
  }
  v6 = sub_6073D8A8(a1);
  v7 = (_WORD *)(a1 + 8046);
  if ( !FIELD_U16(a1, 8046) )
  {
    v8 = FIELD_F32(a1, 108);
    if ( (float)(v6 + -32.0) < v8 || v8 < (float)(FIELD_F32(dword_60CC6484, 112) + 32.0) )
    {
      v9 = (StateBase *)&dword_60CBE0D0;
      return sub_605D79D0(a1, v9, 0);
    }
  }
  if ( FIELD_U8(a1, 8077) && !FIELD_U16(a1, 8046) )
  {
    v9 = (StateBase *)&dword_60CBE0D0;
    return sub_605D79D0(a1, v9, 0);
  }
  if ( FIELD_U16(a1, 8044) )
    sub_605D79D0(a1, (StateBase *)&dword_60CBE0AC, 0);
  if ( (FIELD_U8(a1, 6804) & 1) == 0 )
  {
    v9 = &stru_60CB16D8;
    return sub_605D79D0(a1, v9, 0);
  }
  result = (StateMethodExecuter *)FIELD_U16(a1, 8042);
  if ( !FIELD_U16(a1, 8042) )
  {
    result = (StateMethodExecuter *)(unsigned __int16)*v7;
    if ( !*v7 )
    {
      if ( (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0x80000000) != 0 || FIELD_U16(a1, 8050) )
        v9 = (StateBase *)&dword_60CBE0D0;
      else
        v9 = (StateBase *)&dword_60CBE0AC;
      return sub_605D79D0(a1, v9, 0);
    }
  }
  return result;
}
