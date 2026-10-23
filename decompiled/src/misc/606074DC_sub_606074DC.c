/* sub_606074DC
 * address: 0x606074DC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606074DC(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r4
  int v6; // r6
  float v7; // s4
  int v8; // r0
  float v9; // s0
  float v10; // s2
  int v11; // r0

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CB2BD8 & ~(1616934136 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2BD8) )
  {
    dword_60CB2BD4 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB2BD8);
  }
  v6 = 0;
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CB2BD4) == 1 )
  {
    v7 = FIELD_F32(v4, 112);
    v8 = 2;
    v9 = FIELD_F32(v4, 6812) + 48.0;
    v10 = FIELD_F32(a3, 4);
    if ( v10 < (float)(v7 + (float)(v9 + v9)) )
      v8 = v10 >= (float)(v7 + v9);
    v11 = v4 + 4 * v8;
    v6 = 1;
    if ( !FIELD_U32(v11, 12956) )
    {
      FIELD_U32(v11, 12956) = 16;
      FIELD_U32(v11, 12932) = 0;
    }
  }
  return v6;
}
