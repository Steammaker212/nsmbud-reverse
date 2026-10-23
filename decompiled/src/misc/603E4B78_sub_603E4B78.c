/* sub_603E4B78
 * address: 0x603E4B78   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E4B78(int a1, Actor *a2)
{
  char v2; // r12
  unsigned int v4; // r1
  int v5; // r1
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  bool v9; // zf

  v4 = FIELD_U32(a1, 24);
  if ( v4 >= 4 )
    v4 = 0;
  v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
  if ( v5 )
  {
    if ( (Actor *)v5 == a2 )
      return 1;
    v6 = FIELD_U8(a1, 30);
    v7 = v6 == 0;
    if ( v6 )
      v7 = FIELD_U8(v5, 12012) == 0;
    if ( !v7 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1614695384 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( a2 )
      {
        v8 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(a2, 0x0))(a2, &dword_60C7B370);
        v9 = v8 == 1;
        if ( v8 == 1 )
          v9 = (a2[15].isDeleted & 8) == 0;
        if ( v9 )
          return 1;
      }
    }
  }
  return Actor__getProfileId(a2) == 394 || Actor__getProfileId(a2) == 402;
}
