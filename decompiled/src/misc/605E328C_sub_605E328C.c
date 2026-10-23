/* sub_605E328C
 * address: 0x605E328C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605E328C(int a1, int a2)
{
  char v3; // r0
  bool v4; // zf
  int v6; // r5
  char v7; // r12
  int v8; // r0

  v3 = FIELD_U8(a1, 6261);
  v4 = (v3 & 8) == 0;
  if ( (v3 & 8) != 0 )
  {
    a2 = FIELD_U32(a1, 620);
    v4 = a2 == 0;
  }
  if ( v4 )
    goto LABEL_5;
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a2, 8));
  if ( ((unsigned int)&dword_60C7B408 & ~(1616786152 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B404) == 1 )
  {
    v8 = FIELD_U32(v6, 80);
    if ( (v8 | 1) == 1 )
      FIELD_U32(a1, 80) = v8;
    return sub_605D840C(a1, 402653184);
  }
  else
  {
LABEL_5:
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
}
