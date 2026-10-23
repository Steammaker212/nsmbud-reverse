/* sub_603190FC
 * address: 0x603190FC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603190FC(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12

  v2 = FIELD_U32(a1, 6408);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C93528 & ~(1613861184 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
    {
      dword_60C93524 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C93528);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C93524) == 1 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(v3, 6352);
        FIELD_U32(a1, 112) = FIELD_U32(v3, 6356);
        FIELD_U32(a1, 116) = FIELD_U32(v3, 6360);
        if ( FIELD_U8(v3, 536) )
        {
          if ( FIELD_U8(a1, 535) )
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93620);
          else
            FIELD_U8(a1, 19) = 1;
        }
      }
    }
  }
}
