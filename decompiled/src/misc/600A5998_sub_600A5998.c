/* sub_600A5998
 * address: 0x600A5998   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A5998(int a1)
{
  int v2; // r5
  int v3; // r0
  int result; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  result = sub_600B33DC(a1, v3);
  if ( result )
  {
    v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
      v5 += v6;
    result = sub_60418548(*v5 + 4);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82C98);
  }
  return result;
}
