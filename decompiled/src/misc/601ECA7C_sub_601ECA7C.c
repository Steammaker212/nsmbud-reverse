/* sub_601ECA7C
 * address: 0x601ECA7C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601ECA7C(_DWORD *a1, int *a2)
{
  int v4; // r7
  int *v5; // r0
  int v6; // r6
  int v7; // r0
  int (**v9)(); // [sp+8h] [bp-50h] BYREF
  int *v10; // [sp+Ch] [bp-4Ch]
  int v11; // [sp+10h] [bp-48h]
  int v12; // [sp+14h] [bp-44h] BYREF
  _DWORD v13[9]; // [sp+34h] [bp-24h] BYREF

  v10 = &v12;
  v9 = &BufferedSafeStringBase_char_vtable_probably;
  v11 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v9);
  *(_BYTE *)v10 = 0;
  v9 = &off_60BD4C20;
  sub_6040E074(&v9, *a2, a2[1]);
  v4 = *a2;
  ((void (__fastcall *)(int (***)()))v9[3])(&v9);
  v5 = sub_601E0404(v4, -1, (int)v10);
  a1[20] = v5[18];
  a1[21] = v5[19];
  a1[22] = v5[20];
  v6 = *a2;
  sub_601A02B0(dword_60C89E00, a1 + 82, v6, 0, (int)&v9);
  v13[0] = v6;
  v13[1] = 0;
  v7 = sub_601A443C(dword_60C89E18, v6, 0);
  v13[2] = sub_60181AB4(v7, &v9);
  return sub_6019EC34(a1 + 97, v13);
}
