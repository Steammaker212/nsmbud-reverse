/* sub_604364A0
 * address: 0x604364A0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604364A0(int result, int a2, int a3)
{
  int v3; // r12
  int v4; // lr
  int (__fastcall *v5)(int); // r12

  v3 = FIELD_U32(result, 44);
  v4 = *(_DWORD *)(v3 + 4 * (a2 >> 5));
  *(_DWORD *)(v3 + 4 * (a2 >> 5)) = v4 & ~(1 << (a2 & 0x1F)) | (a3 << (a2 & 0x1F));
  v5 = *(int (__fastcall **)(int))(result + 100);
  if ( v5 )
  {
    if ( (((v4 & (1 << (a2 & 0x1F))) != 0) ^ a3) == 1 )
      return v5(result + 40);
  }
  return result;
}
