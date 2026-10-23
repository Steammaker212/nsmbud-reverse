/* sub_605DE7D4
 * address: 0x605DE7D4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DE7D4(int a1, float *a2)
{
  float v4; // s16
  int v5; // r6
  float v6; // s18
  float v7; // s0
  int v8; // s2
  int result; // r0

  v4 = 0.0;
  v5 = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1) == 1 )
  {
    v6 = 0.0;
    if ( FIELD_U8(a1, 6956) )
    {
      v5 = 1;
      v6 = (float)(FIELD_F32(a1, 6944) * FIELD_F32(a1, 6948)) + 0.0;
    }
  }
  else
  {
    v6 = 0.0;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1) == 1 && FIELD_U8(a1, 6972) )
  {
    v5 = 1;
    v4 = (float)(FIELD_F32(a1, 6960) * FIELD_F32(a1, 6964)) + 0.0;
  }
  v7 = -0.5;
  if ( v6 >= -0.5 )
  {
    v7 = v6;
    if ( v6 > 0.5 )
      v7 = 0.5;
  }
  v8 = -1097229926;
  if ( v4 >= -0.3 )
  {
    v8 = LODWORD(v4);
    if ( v4 > 0.3 )
      v8 = 1050253722;
  }
  result = 0;
  if ( v5 == 1 )
  {
    result = 1;
    if ( a2 )
    {
      a2[2] = 0.0;
      *a2 = v7;
      *((_DWORD *)a2 + 1) = v8;
    }
  }
  return result;
}
