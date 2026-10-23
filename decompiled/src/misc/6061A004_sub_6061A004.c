/* sub_6061A004
 * address: 0x6061A004   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061A004(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  int v4; // r4
  int v5; // t1
  void ***v6; // r3

  v3 = (_DWORD *)(a1 + 6100);
  v2 = *(_DWORD **)(a1 + 6100);
  v2[1] = 1117782016;
  v5 = FIELD_U32(a1, 108);
  v4 = a1 + 108;
  v2[3] = v5;
  v2[4] = FIELD_U32(v4, 4);
  v2[5] = FIELD_U32(v4, 8);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 4))(*v3);
  v6 = (void ***)(v4 + 56);
  if ( (*(_DWORD *)(v4 - 88) & 1) != 0 )
    v6 = (void ***)(v4 + 6516);
  return sub_60606978(*(ModelWrapper ***)(v4 + 6032), (void **)v4, *v6, 1.0);
}
