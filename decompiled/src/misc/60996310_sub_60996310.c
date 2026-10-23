/* sub_60996310
 * address: 0x60996310   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60996310(int a1)
{
  int v1; // r1
  bool v2; // zf
  int v3; // r1
  unsigned int v4; // r2
  _DWORD *v5; // r1
  _DWORD *v6; // r3
  int v7; // r0

  v1 = FIELD_U8(a1, 84);
  v2 = v1 == 5;
  if ( v1 != 5 )
    v2 = v1 == 3;
  if ( v2 )
  {
    v3 = FIELD_U32(a1, 44);
    v4 = FIELD_U32(v3, 4);
    v5 = *(_DWORD **)(v3 + 8);
    v6 = v5;
    if ( v4 > 6 )
      v6 = v5 + 6;
    if ( *v6 )
      goto LABEL_11;
    if ( v4 > 7 )
      v5 += 7;
    if ( *v5 )
    {
LABEL_11:
      v7 = sub_60991414(a1, 6u);
      (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v7 + 84))(v7, 0, 1.0);
    }
  }
  else
  {
    nullsub_2423();
  }
}
