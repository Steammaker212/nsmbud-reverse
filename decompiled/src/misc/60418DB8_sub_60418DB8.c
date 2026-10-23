/* sub_60418DB8
 * address: 0x60418DB8   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418DB8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r0
  void *v5; // r0
  int v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0

  v2 = a1[509];
  if ( v2 )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 40))(v2, 0);
    v3 = a1[509];
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    a1[509] = 0;
  }
  sub_60419F48(a1);
  a1[200] = 0;
  a1[197] = 0;
  if ( a1[196] )
  {
    a1[196] = 0;
    sub_6086EFC4(a1[195], FIELD_U32(dword_60CCFC8C, 24));
    a1[195] = 0;
  }
  sub_6083E150(a1 + 115, FIELD_U32(dword_60CCFC8C, 24));
  sub_60913ABC(a1 + 190);
  sub_60913AD4(a1 + 190);
  v4 = (void *)a1[116];
  if ( v4 )
    operator_delete(v4);
  sub_6083CD6C(a1 + 106, FIELD_U32(dword_60CCFC8C, 24));
  v5 = (void *)a1[114];
  if ( v5 )
    operator_delete(v5);
  if ( a1[55] )
  {
    sub_6091D490(a1[56]);
    sub_6091D010(a1[56]);
    sub_6091CB90(a1[56]);
    a1[56] = 0;
    v6 = a1[55];
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    a1[55] = 0;
  }
  sub_6083EACC(a1 + 51, FIELD_U32(dword_60CCFC8C, 24));
  v7 = (void *)a1[54];
  if ( v7 )
    operator_delete(v7);
  v8 = (void *)a1[52];
  if ( v8 )
    operator_delete(v8);
  sub_60916668(dword_60CCFC8C, a1[46]);
  a1[46] = -1;
  a1[47] = -1;
  sub_6083B4C8(a1 + 16, FIELD_U32(dword_60CCFC8C, 24));
  nullsub_1345(a1 + 8, FIELD_U32(dword_60CCFC8C, 24));
  v9 = (void *)a1[13];
  if ( v9 )
    operator_delete(v9);
  v10 = (void *)a1[11];
  if ( v10 )
    operator_delete(v10);
  v11 = (void *)a1[9];
  if ( v11 )
    operator_delete(v11);
  return nullsub_124(a1 + 655);
}
