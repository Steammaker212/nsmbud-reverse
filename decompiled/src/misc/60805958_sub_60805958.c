/* sub_60805958
 * address: 0x60805958   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60805958(int *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    *a1 = 0;
  }
  v3 = a1[1];
  if ( v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    a1[1] = 0;
  }
  v4 = a1[2];
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    a1[2] = 0;
  }
  v5 = a1[3];
  if ( v5 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
    a1[3] = 0;
  }
  v6 = (_DWORD *)a1[4];
  if ( v6 )
  {
    v7 = sub_60806960(v6);
    operator_delete(v7);
    a1[4] = 0;
  }
  return a1;
}
