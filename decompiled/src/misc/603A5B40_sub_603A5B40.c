/* sub_603A5B40
 * address: 0x603A5B40   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603A5B40(int a1, int a2)
{
  char v2; // r12
  int v3; // r5
  int v4; // r4
  int v5; // r0
  unsigned int v6; // r6
  int v7; // r0
  unsigned int v8; // r0
  int v9; // r3

  v3 = FIELD_U32(a1, 144);
  if ( FIELD_U32(v3, 23608) == 1 )
    return;
  v4 = FIELD_U32(a2, 2196);
  v5 = FIELD_U8(v4, 533);
  if ( v5 == 2 )
  {
    v6 = FIELD_S8(v4, 84);
    if ( v6 == -1 )
      return;
    goto LABEL_12;
  }
  if ( v5 == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1614437248 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B370) == 1 )
    {
      v6 = FIELD_S8(v4, 84);
      v7 = sub_6079D894(v4);
      if ( v7 )
      {
        v8 = FIELD_S8(v7, 84);
        goto LABEL_13;
      }
LABEL_12:
      v8 = -1;
LABEL_13:
      if ( v6 != -1 )
      {
        v9 = v3;
        if ( v6 < 4 )
          v9 = v3 + v6;
        FIELD_U8(v9, 23620) = 1;
        if ( v8 != -1 )
        {
          if ( v8 < 4 )
            v3 += v8;
          FIELD_U8(v3, 23620) = 1;
        }
        sub_6040B3B0(dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6542));
      }
    }
  }
}
