/* sub_605F6EB4
 * address: 0x605F6EB4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F6EB4(ModelWrapper **a1)
{
  signed int v2; // r1
  int result; // r0
  int v4; // r0

  v2 = sub_605F43EC((int)a1, 0);
  result = 2;
  if ( v2 == 1 )
  {
    a1[1547] = a1[27];
    a1[1548] = a1[28];
    v4 = *((unsigned __int8 *)a1 + 28);
    *((_BYTE *)a1 + 6196) = v4;
    a1[41] = (ModelWrapper *)(v4 << 27);
    ((void (__fastcall *)(ModelWrapper **, int *))(*a1)[4].model)(a1, &dword_60CB21E0);
    StarCoinBase_updateModel(a1);
    return 1;
  }
  return result;
}
