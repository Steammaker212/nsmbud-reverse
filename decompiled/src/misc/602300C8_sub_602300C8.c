/* sub_602300C8
 * address: 0x602300C8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602300C8(int a1, _DWORD *a2)
{
  _DWORD *v4; // r6
  int v5; // r6
  int v6; // r1
  int v7; // r2
  int i; // r6
  int result; // r0

  v4 = (_DWORD *)(a1 + 40);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 40) + 12))(a1 + 40);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v5 = v4[1];
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = a2[1];
  if ( v5 == v6 )
    return 1;
  v7 = FIELD_U32(a1, 44);
  for ( i = 1; ; i += 2 )
  {
    result = 0;
    if ( *(unsigned __int8 *)(v7 + i - 1) != *(unsigned __int8 *)(v6 + i - 1) )
      break;
    if ( !*(_BYTE *)(v7 + i - 1) )
      return 1;
    if ( i > 0x80000 )
      break;
    if ( *(unsigned __int8 *)(v7 + i) != *(unsigned __int8 *)(v6 + i) )
      break;
    result = 1;
    if ( !*(_BYTE *)(v7 + i) )
      break;
  }
  return result;
}
