/* sub_601C5EEC
 * address: 0x601C5EEC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C5EEC(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r5
  bool v5; // zf
  int v6; // r0
  bool v7; // zf

  v2 = sub_601CF9C0(dword_60C8AEF0);
  v3 = (_DWORD *)v2;
  v4 = 0;
  v5 = v2 == 0;
  if ( v2 )
    v5 = v2 == (_DWORD)a1;
  if ( !v5 )
  {
    v4 = 0;
    do
    {
      v6 = (*(int (__fastcall **)(_DWORD *))(*v3 + 92))(v3);
      v3 = (_DWORD *)v3[68];
      if ( v6 )
        ++v4;
      v7 = v3 == 0;
      if ( v3 )
        v7 = v3 == a1;
    }
    while ( !v7 );
  }
  return v4;
}
