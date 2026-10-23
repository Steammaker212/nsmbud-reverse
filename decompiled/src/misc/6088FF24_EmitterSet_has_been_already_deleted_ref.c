/* EmitterSet_has_been_already_deleted_ref
 * address: 0x6088FF24   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall EmitterSet_has_been_already_deleted_ref(int a1, int a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r2

  if ( FIELD_U8(a2, 8) )
  {
    nn__os__LockMutex(a1 + 3376);
    v4 = FIELD_U32(a1, 1144);
    v5 = FIELD_U32(a1, 1140);
    if ( v4 < 1 )
    {
LABEL_6:
      *(_DWORD *)(v5 + 4 * v4) = a2;
      ++FIELD_U32(a1, 1144);
    }
    else
    {
      v6 = 0;
      while ( *(_DWORD *)(v5 + 4 * v6) != a2 )
      {
        if ( ++v6 >= v4 )
          goto LABEL_6;
      }
    }
    nn__os__UnlockMutex(a1 + 3376);
  }
  else
  {
    debugPrintRelated3("EmitterSet has been already deleted.\n");
  }
}
