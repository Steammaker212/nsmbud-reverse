/* sub_6036A904
 * address: 0x6036A904   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6036A904(int a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r0
  int v5; // r7
  int v6; // r9
  Actor *v7; // r5
  float v8; // s16

  v3 = FIELD_U32(a1, 36);
  v4 = a1 + 32;
  if ( v3 == v4 )
  {
LABEL_5:
    v7 = 0;
  }
  else
  {
    v5 = FIELD_U32(a1, 44);
    v6 = v4 - v5;
    v7 = (Actor *)(v3 - v5);
    while ( Actor__getProfileId(v7) != 526 )
    {
      v3 = FIELD_U32(v3, 4);
      v7 = (Actor *)(v3 - v5);
      if ( v3 - v5 == v6 )
        goto LABEL_5;
    }
  }
  if ( ((unsigned int)&dword_60C95E10 & ~(1614195052 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C95E10) )
  {
    dword_60C95E0C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C95E10);
  }
  if ( v7 && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &dword_60C95E0C) == 1 && sub_6036BBC8(v7) == 1 )
  {
    v8 = FIELD_F32(a1, 120);
    Actor__removeChild((Actor *)a1, v7);
    sub_6036BCB8(v7, v8 < 0.0);
  }
}
