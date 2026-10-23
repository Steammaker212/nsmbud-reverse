/* sub_6050A660
 * address: 0x6050A660   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050A660(int a1)
{
  int **v2; // r1
  int v3; // r1
  void (*v4)(void); // r1
  _DWORD v6[4]; // [sp+8h] [bp-10h] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = dword_60CA7DBC;
  if ( sub_6047467C((_DWORD *)(a1 + 48), 2u, v6, (int)&unk_60CA7DA8, 1.0, 0) == 1 )
  {
    v2 = *(int ***)(a1 + 3560);
    if ( FIELD_U32(a1, 3556) > 2u )
      v2 += 10;
    v3 = **v2;
    if ( FIELD_U8(a1, 7213) )
      v4 = *(void (**)(void))(v3 + 104);
    else
      v4 = *(void (**)(void))(v3 + 108);
    v4();
  }
  FIELD_U32(a1, 36) = 1;
  return 1;
}
