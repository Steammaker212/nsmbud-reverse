/* sub_601180E8
 * address: 0x601180E8   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601180E8(_BYTE *a1)
{
  int v2; // r0
  float v3; // s0

  if ( !a1[9327] )
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 780))(a1, 1);
  if ( *((_DWORD *)a1 + 2308) )
  {
    v2 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 628))(a1);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 1036))(v2, *((_DWORD *)a1 + 20));
  }
  *((_DWORD *)a1 + 2299) = 1;
  v3 = fabsf(
         sqrtf(
           (float)(*((float *)a1 + 2262) * *((float *)a1 + 2262))
         + (float)(*((float *)a1 + 2261) * *((float *)a1 + 2261)))
       / 60.0);
  *((float *)a1 + 2318) = v3;
  if ( a1[9322] )
  {
    a1[9322] = 0;
    v3 = *((float *)a1 + 2301);
    *((float *)a1 + 2318) = v3;
  }
  else
  {
    *((float *)a1 + 2301) = v3;
  }
  *((float *)a1 + 2319) = v3 / 60.0;
  *((_DWORD *)a1 + 2335) = 1;
  *((_DWORD *)a1 + 2303) = 0;
  a1[9318] = 0;
  a1[9240] = 0;
  a1[9242] = 1;
  return 9242;
}
