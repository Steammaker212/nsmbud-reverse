/* sub_6073ABC8
 * address: 0x6073ABC8   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073ABC8(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  int result; // r0
  _BYTE *v7; // r8
  unsigned __int8 v8; // r7
  int v9; // r0
  StateBase *CurrentState; // r0
  int v11; // r6
  int v12; // r1
  bool v13; // zf
  char v14; // r1
  unsigned __int8 v15; // r7
  int v16; // r0
  int v17; // r1

  v7 = (_BYTE *)(a1 + 6102);
  result = FIELD_U8(a1, 6102);
  if ( !result )
  {
    sub_6073B6B0(a1);
    sub_6073B8E8(a1);
    if ( FIELD_U8(a1, 6108) )
    {
      v15 = 0;
      do
      {
        v16 = sub_6073AFA4(a1, v15);
        v17 = a1;
        if ( v15 < 5u )
          v17 = a1 + v15;
        sub_60737DC8(v16, FIELD_U8(v17, 6200), FIELD_S8(v17, 6205), FIELD_F32(a1, 6104));
        ++v15;
      }
      while ( v15 < (unsigned int)FIELD_U8(a1, 6108) );
    }
    goto LABEL_17;
  }
  if ( result != 1 )
    return result;
  if ( !FIELD_U8(a1, 6108) )
  {
LABEL_7:
    v12 = FIELD_U8(a1, 6125);
    v13 = v12 == 0;
    if ( FIELD_U8(a1, 6125) )
    {
      v14 = v12 - 1;
      FIELD_U8(a1, 6125) = v14;
      v13 = v14 == 0;
    }
    if ( !v13 )
    {
      a5.n64_u32[0] = 5.0;
      *(float *)&a2 = FIELD_F32(a1, 6104) - FIELD_F32(a1, 6132);
      FIELD_U32(a1, 6104) = vmax_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
      result = 0;
LABEL_18:
      *v7 = result;
      return result;
    }
    FIELD_U8(a1, 6111) = 1;
LABEL_17:
    result = (unsigned __int8)*v7 + 1;
    goto LABEL_18;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = sub_6073AFA4(a1, v8);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (__fastcall **)(int *))(dword_60CBDEA0 + 8))(&dword_60CBDEA0);
    if ( v11 != result )
      return result;
    if ( ++v8 >= (unsigned int)FIELD_U8(a1, 6108) )
      goto LABEL_7;
  }
}
