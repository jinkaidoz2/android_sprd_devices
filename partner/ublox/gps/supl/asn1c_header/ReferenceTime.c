/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "rrlp-components.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#include "ReferenceTime.h"

static asn_TYPE_member_t asn_MBR_ReferenceTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceTime, gpsTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsTime"
		},
	{ ATF_POINTER, 2, offsetof(struct ReferenceTime, gsmTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GSMTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsmTime"
		},
	{ ATF_POINTER, 1, offsetof(struct ReferenceTime, gpsTowAssist),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSTOWAssist,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsTowAssist"
		},
};
static int asn_MAP_ReferenceTime_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_ReferenceTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ReferenceTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gpsTime at 481 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gsmTime at 482 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gpsTowAssist at 483 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReferenceTime_specs_1 = {
	sizeof(struct ReferenceTime),
	offsetof(struct ReferenceTime, _asn_ctx),
	asn_MAP_ReferenceTime_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ReferenceTime_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ReferenceTime = {
	"ReferenceTime",
	"ReferenceTime",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ReferenceTime_tags_1,
	sizeof(asn_DEF_ReferenceTime_tags_1)
		/sizeof(asn_DEF_ReferenceTime_tags_1[0]), /* 1 */
	asn_DEF_ReferenceTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReferenceTime_tags_1)
		/sizeof(asn_DEF_ReferenceTime_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ReferenceTime_1,
	3,	/* Elements count */
	&asn_SPC_ReferenceTime_specs_1	/* Additional specs */
};

