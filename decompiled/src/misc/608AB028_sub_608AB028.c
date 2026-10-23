/* sub_608AB028
 * address: 0x608AB028   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AB028(int a1)
{
  int v2; // r0
  int v3; // r0
  unsigned int v4; // r5
  void *v5; // r4

  v2 = sub_608AB0D4();
  sub_608C6FEC(v2);
  if ( FIELD_U8(a1, 404) )
  {
    v3 = sub_608AB0D4();
    sub_608C7018(v3);
  }
  if ( FIELD_U32(a1, 32) )
  {
    v4 = 0;
    do
      sub_608AC6C8(FIELD_U32(a1, 36) + 92 * (v4++ & 0xFFFFFF));
    while ( v4 < FIELD_U32(a1, 32) );
  }
  sub_608B9FD0(a1 + 40);
  if ( FIELD_U8(a1, 406) )
    sub_608AE93C(a1 + 232);
  else
    sub_608CD220(a1 + 160);
  sub_608C1A1C(a1 + 264);
  v5 = sub_608C3B10();
  sub_608C2A1C();
  return sub_608C2A9C(v5, 0, 0);
}
