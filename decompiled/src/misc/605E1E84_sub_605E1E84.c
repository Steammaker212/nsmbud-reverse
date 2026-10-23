/* sub_605E1E84
 * address: 0x605E1E84   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1E84(_BYTE *a1, _DWORD *a2, int a3)
{
  char v6; // r1
  int result; // r0

  v6 = a1[6267];
  result = 0;
  if ( (v6 & 8) != 0 )
  {
    sub_605D79D0((int)a1, (StateBase *)&unk_60CB1788, 0);
    sub_605E3BA4(a1);
    sub_605E398C(a1, &dword_60CB1AA4);
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 424))(a1);
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 432))(a1);
    sub_605E5144(a1);
    sub_605D845C(a1);
    *((_DWORD *)a1 + 1701) = 0;
    CollisionMgr_vf14((int)(a1 + 648));
    sub_605DEEC4(a1);
    *((_DWORD *)a1 + 20) = a3;
    *((_DWORD *)a1 + 27) = *a2;
    *((_DWORD *)a1 + 28) = a2[1];
    *((_DWORD *)a1 + 29) = a2[2];
    *((_DWORD *)a1 + 146) = *a2;
    *((_DWORD *)a1 + 147) = a2[1];
    *((_DWORD *)a1 + 148) = a2[2];
    *((_DWORD *)a1 + 152) = *a2;
    *((_DWORD *)a1 + 153) = a2[1];
    *((_DWORD *)a1 + 154) = a2[2];
    *((_DWORD *)a1 + 2005) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB1A64);
    return 1;
  }
  return result;
}
