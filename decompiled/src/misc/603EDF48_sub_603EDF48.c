/* sub_603EDF48
 * address: 0x603EDF48   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EDF48(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r6
  int v5; // r7
  _BYTE *v6; // r0

  v2 = FIELD_U32(a1, 44);
  v3 = a1 + 40;
  if ( v2 != v3 )
  {
    v4 = FIELD_U32(a1, 52);
    v5 = v3 - v4;
    v6 = (_BYTE *)(v2 - v4);
    do
    {
      if ( !v6[16] )
        (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v6 + 8))(v6);
      v2 = FIELD_U32(v2, 4);
      v6 = (_BYTE *)(v2 - v4);
    }
    while ( v2 - v4 != v5 );
  }
  FIELD_U8(a1, 56) = 1;
  return 1;
}
