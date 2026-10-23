/* sub_60384770
 * address: 0x60384770   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60384770(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r6
  int v6; // r1
  int v7; // r0
  float v8; // s0
  int v9; // r3
  int v10; // r5
  float v11; // s6

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C96AA0 & ~(1614301068 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA0) )
  {
    dword_60C96A9C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96AA0);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C96A9C) == 1 )
  {
    v6 = 0;
    v7 = FIELD_U32(v4, 6300);
    if ( v7 )
    {
      v8 = FIELD_F32(a3, 4);
      v9 = FIELD_U32(v4, 6328);
      while ( 1 )
      {
        v10 = *(_DWORD *)(FIELD_U32(v4, 6304) + 4 * v7);
        if ( FIELD_U8(v10, 128) )
        {
          v11 = FIELD_F32(v10, 76);
          if ( v8 >= (float)(v11 + -12.0) && v8 < (float)(v11 + 12.0) )
            break;
        }
        --v7;
        --v9;
        if ( !v7 )
          goto LABEL_14;
      }
      v6 = v9;
    }
LABEL_14:
    sub_60381950(v4, v6);
  }
  return 1;
}
