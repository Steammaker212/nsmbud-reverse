/* sub_60564BFC
 * address: 0x60564BFC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60564BFC(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  bool v5; // zf
  int *p_a2; // r3
  int v7; // r5
  Actor *v8; // r1
  Actor **v9; // r5
  Actor *v10; // t1
  int a2; // [sp+0h] [bp-30h] BYREF
  _DWORD v12[11]; // [sp+4h] [bp-2Ch] BYREF

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = sub_605B5054(a1);
    if ( !result )
      return result;
  }
  else
  {
    result = sub_605B4CC4(a1);
    if ( !result )
      return result;
  }
  if ( FIELD_U8(a1, 6841) || FIELD_U32(a1, 6828) || (result = FIELD_U32(a1, 6824), result != -1) )
  {
    if ( FIELD_U8(a1, 6878) )
    {
      memset(v12, 0, 28);
      a2 = 0;
      v3 = FIELD_U32(a1, 40);
      if ( v3 >= 1 )
      {
        v4 = FIELD_U32(a1, 36);
        v5 = v4 == 0;
        if ( v4 )
        {
          v3 = FIELD_U32(a1, 44);
          v4 -= v3;
          v5 = v4 == 0;
        }
        if ( !v5 )
        {
          p_a2 = &a2;
          do
          {
            *p_a2++ = v4;
            v7 = *(_DWORD *)(v4 + v3 + 4);
            v4 = v7 - v3;
            if ( v7 == a1 + 32 )
              v4 = 0;
          }
          while ( v4 );
          v8 = (Actor *)a2;
          if ( a2 )
          {
            v9 = (Actor **)v12;
            do
            {
              Actor__removeChild((Actor *)a1, v8);
              v10 = *v9++;
              v8 = v10;
            }
            while ( v10 );
          }
        }
      }
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 380))(a1);
  }
  return result;
}
