/* sub_605F7FF4
 * address: 0x605F7FF4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F7FF4(_DWORD *a1)
{
  int v2; // r5

  if ( FIELD_U32(dword_60C99DD4, 764) != 4 || (v2 = 2, (*((_BYTE *)a1 + 23) & 1) == 0) )
  {
    a1[19] |= 2u;
    a1[36] = 1065353216;
    a1[37] = 1065353216;
    a1[38] = 1065353216;
    a1[143] = 0;
    a1[144] = 1103101952;
    a1[145] = 0;
    a1[123] = 0;
    a1[124] = 1103101952;
    a1[125] = 1107296256;
    a1[126] = 1111490560;
    a1[129] = 1124073472;
    a1[130] = 1124073472;
    a1[131] = 1124073472;
    a1[132] = 1124073472;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 700))(a1);
    v2 = 1;
    *((_BYTE *)a1 + 534) = 1;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 696))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 704))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
    a1[1580] = (4 * a1[5]) & 0xC000;
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB2430);
    sub_605F814C(a1);
    if ( ((int (__fastcall *)(int, _DWORD *))loc_6077B520)(dword_60CBFBC0, a1 + 27) == 1 )
      sub_6077B760(dword_60CBFBC0, a1);
  }
  return v2;
}
