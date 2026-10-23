/* sub_605D0218
 * address: 0x605D0218   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D0218(int a1)
{
  int v2; // r4
  int v3; // r1

  v2 = 0;
  if ( (FIELD_U8(a1, 6260) & 1) != 0 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    v2 = 1;
    FIELD_U8(a1, 19) = 1;
    if ( FIELD_U8(a1, 7339) )
      ++FIELD_U32(dword_60CAF15C, 33812);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 336))(a1);
    v3 = FIELD_U32(a1, 7308);
    if ( v3 )
      sub_6058568C(dword_60CAF15C, v3, FIELD_U32(a1, 7316));
  }
  return v2;
}
