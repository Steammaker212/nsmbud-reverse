/* sub_6099BBD4
 * address: 0x6099BBD4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6099BBD4(int a1)
{
  int v2; // r0

  *(_DWORD *)a1 = off_60C60BA0;
  if ( FIELD_U8(a1, 785) == 1 )
  {
    nn__os__LockMutex(a1 + 1432);
    v2 = FIELD_U32(a1, 788);
    if ( !v2 )
    {
      sub_608CF7BC(a1 + 720);
      v2 = FIELD_U32(a1, 788);
    }
    FIELD_U32(a1, 788) = v2 + 1;
    nn__os__UnlockMutex(a1 + 1432);
  }
  if ( FIELD_U8(a1, 784) )
  {
    sub_608CF868(a1 + 720);
    FIELD_U8(a1, 784) = 0;
  }
  sub_608A99B0(a1);
  nn__os__FinalizeMutex(a1 + 1432);
  nn_atk_SoundArchive__vf0();
}
