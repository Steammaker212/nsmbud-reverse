/* sub_60882124
 * address: 0x60882124   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60882124(int a1, int a2)
{
  if ( a2 == 1 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)dword_60CC7FE8 + 12))(dword_60CC7FE8, a1);
  nn__os__LockMutex(&unk_60CC7FFC);
  *(_DWORD *)(dword_60CC7FF0 + 4 * dword_60CC7FF4++) = a1;
  return nn__os__UnlockMutex(&unk_60CC7FFC);
}
