/* sub_601D0230
 * address: 0x601D0230   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601D0230(int a1, int a2, int a3)
{
  int v5; // r6
  char v6; // r12
  char v7; // r1
  char v8; // r2
  int v9; // r0

  v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612513904 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C88AAC) == 1 )
  {
    do
    {
      v7 = FIELD_U8(v5, 216);
      v8 = v7 | 2;
      v9 = a2;
      if ( (FIELD_U32(v5, 264) | 1) == 7 )
        v9 = a3;
      if ( v9 )
        v8 = v7 & 0xFD;
      FIELD_U8(v5, 216) = v8;
      v5 = FIELD_U32(v5, 272);
    }
    while ( v5 );
  }
}
