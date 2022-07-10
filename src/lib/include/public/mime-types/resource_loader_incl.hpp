#ifndef A0A3E1E4_BB7C_42F3_B328_A70C0E90764E
#define A0A3E1E4_BB7C_42F3_B328_A70C0E90764E

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <mime-types/mime_mapper.hpp>
#include <mime-types/resource_loader.hpp>

namespace mime_types {

inline resource_loader::resource_map_type resource_loader::load() const {
  return resource_loader::resource_map_type{
      {"application/andrew-inset", std::vector<std::string>{"ez"}},
      {"application/applixware", std::vector<std::string>{"aw"}},
      {"application/atom+xml", std::vector<std::string>{"atom"}},
      {"application/atomcat+xml", std::vector<std::string>{"atomcat"}},
      {"application/atomdeleted+xml", std::vector<std::string>{"atomdeleted"}},
      {"application/atomsvc+xml", std::vector<std::string>{"atomsvc"}},
      {"application/atsc-dwd+xml", std::vector<std::string>{"dwd"}},
      {"application/atsc-held+xml", std::vector<std::string>{"held"}},
      {"application/atsc-rsat+xml", std::vector<std::string>{"rsat"}},
      {"application/bdoc", std::vector<std::string>{"bdoc"}},
      {"application/calendar+xml", std::vector<std::string>{"xcs"}},
      {"application/ccxml+xml", std::vector<std::string>{"ccxml"}},
      {"application/cdfx+xml", std::vector<std::string>{"cdfx"}},
      {"application/cdmi-capability", std::vector<std::string>{"cdmia"}},
      {"application/cdmi-container", std::vector<std::string>{"cdmic"}},
      {"application/cdmi-domain", std::vector<std::string>{"cdmid"}},
      {"application/cdmi-object", std::vector<std::string>{"cdmio"}},
      {"application/cdmi-queue", std::vector<std::string>{"cdmiq"}},
      {"application/cu-seeme", std::vector<std::string>{"cu"}},
      {"application/dash+xml", std::vector<std::string>{"mpd"}},
      {"application/davmount+xml", std::vector<std::string>{"davmount"}},
      {"application/docbook+xml", std::vector<std::string>{"dbk"}},
      {"application/dssc+der", std::vector<std::string>{"dssc"}},
      {"application/dssc+xml", std::vector<std::string>{"xdssc"}},
      {"application/ecmascript", std::vector<std::string>{"es", "ecma"}},
      {"application/emma+xml", std::vector<std::string>{"emma"}},
      {"application/emotionml+xml", std::vector<std::string>{"emotionml"}},
      {"application/epub+zip", std::vector<std::string>{"epub"}},
      {"application/exi", std::vector<std::string>{"exi"}},
      {"application/express", std::vector<std::string>{"exp"}},
      {"application/fdt+xml", std::vector<std::string>{"fdt"}},
      {"application/font-tdpfr", std::vector<std::string>{"pfr"}},
      {"application/geo+json", std::vector<std::string>{"geojson"}},
      {"application/gml+xml", std::vector<std::string>{"gml"}},
      {"application/gpx+xml", std::vector<std::string>{"gpx"}},
      {"application/gxf", std::vector<std::string>{"gxf"}},
      {"application/gzip", std::vector<std::string>{"gz"}},
      {"application/hjson", std::vector<std::string>{"hjson"}},
      {"application/hyperstudio", std::vector<std::string>{"stk"}},
      {"application/inkml+xml", std::vector<std::string>{"ink", "inkml"}},
      {"application/ipfix", std::vector<std::string>{"ipfix"}},
      {"application/its+xml", std::vector<std::string>{"its"}},
      {"application/java-archive",
       std::vector<std::string>{"jar", "war", "ear"}},
      {"application/java-serialized-object", std::vector<std::string>{"ser"}},
      {"application/java-vm", std::vector<std::string>{"class"}},
      {"application/javascript", std::vector<std::string>{"js", "mjs"}},
      {"application/json", std::vector<std::string>{"json", "map"}},
      {"application/json5", std::vector<std::string>{"json5"}},
      {"application/jsonml+json", std::vector<std::string>{"jsonml"}},
      {"application/ld+json", std::vector<std::string>{"jsonld"}},
      {"application/lgr+xml", std::vector<std::string>{"lgr"}},
      {"application/lost+xml", std::vector<std::string>{"lostxml"}},
      {"application/mac-binhex40", std::vector<std::string>{"hqx"}},
      {"application/mac-compactpro", std::vector<std::string>{"cpt"}},
      {"application/mads+xml", std::vector<std::string>{"mads"}},
      {"application/manifest+json", std::vector<std::string>{"webmanifest"}},
      {"application/marc", std::vector<std::string>{"mrc"}},
      {"application/marcxml+xml", std::vector<std::string>{"mrcx"}},
      {"application/mathematica", std::vector<std::string>{"ma", "nb", "mb"}},
      {"application/mathml+xml", std::vector<std::string>{"mathml"}},
      {"application/mbox", std::vector<std::string>{"mbox"}},
      {"application/mediaservercontrol+xml", std::vector<std::string>{"mscml"}},
      {"application/metalink+xml", std::vector<std::string>{"metalink"}},
      {"application/metalink4+xml", std::vector<std::string>{"meta4"}},
      {"application/mets+xml", std::vector<std::string>{"mets"}},
      {"application/mmt-aei+xml", std::vector<std::string>{"maei"}},
      {"application/mmt-usd+xml", std::vector<std::string>{"musd"}},
      {"application/mods+xml", std::vector<std::string>{"mods"}},
      {"application/mp21", std::vector<std::string>{"m21", "mp21"}},
      {"application/mp4", std::vector<std::string>{"mp4s", "m4p"}},
      {"application/msword", std::vector<std::string>{"doc", "dot"}},
      {"application/mxf", std::vector<std::string>{"mxf"}},
      {"application/n-quads", std::vector<std::string>{"nq"}},
      {"application/n-triples", std::vector<std::string>{"nt"}},
      {"application/node", std::vector<std::string>{"cjs"}},
      {"application/octet-stream",
       std::vector<std::string>{"bin",   "dms", "lrf", "mar",   "so",  "dist",
                                "distz", "pkg", "bpk", "dump",  "elc", "deploy",
                                "exe",   "dll", "deb", "dmg",   "iso", "img",
                                "msi",   "msp", "msm", "buffer"}},
      {"application/oda", std::vector<std::string>{"oda"}},
      {"application/oebps-package+xml", std::vector<std::string>{"opf"}},
      {"application/ogg", std::vector<std::string>{"ogx"}},
      {"application/omdoc+xml", std::vector<std::string>{"omdoc"}},
      {"application/onenote",
       std::vector<std::string>{"onetoc", "onetoc2", "onetmp", "onepkg"}},
      {"application/oxps", std::vector<std::string>{"oxps"}},
      {"application/p2p-overlay+xml", std::vector<std::string>{"relo"}},
      {"application/patch-ops-error+xml", std::vector<std::string>{"xer"}},
      {"application/pdf", std::vector<std::string>{"pdf"}},
      {"application/pgp-encrypted", std::vector<std::string>{"pgp"}},
      {"application/pgp-signature", std::vector<std::string>{"asc", "sig"}},
      {"application/pics-rules", std::vector<std::string>{"prf"}},
      {"application/pkcs10", std::vector<std::string>{"p10"}},
      {"application/pkcs7-mime", std::vector<std::string>{"p7m", "p7c"}},
      {"application/pkcs7-signature", std::vector<std::string>{"p7s"}},
      {"application/pkcs8", std::vector<std::string>{"p8"}},
      {"application/pkix-attr-cert", std::vector<std::string>{"ac"}},
      {"application/pkix-cert", std::vector<std::string>{"cer"}},
      {"application/pkix-crl", std::vector<std::string>{"crl"}},
      {"application/pkix-pkipath", std::vector<std::string>{"pkipath"}},
      {"application/pkixcmp", std::vector<std::string>{"pki"}},
      {"application/pls+xml", std::vector<std::string>{"pls"}},
      {"application/postscript", std::vector<std::string>{"ai", "eps", "ps"}},
      {"application/provenance+xml", std::vector<std::string>{"provx"}},
      {"application/pskc+xml", std::vector<std::string>{"pskcxml"}},
      {"application/raml+yaml", std::vector<std::string>{"raml"}},
      {"application/rdf+xml", std::vector<std::string>{"rdf", "owl"}},
      {"application/reginfo+xml", std::vector<std::string>{"rif"}},
      {"application/relax-ng-compact-syntax", std::vector<std::string>{"rnc"}},
      {"application/resource-lists+xml", std::vector<std::string>{"rl"}},
      {"application/resource-lists-diff+xml", std::vector<std::string>{"rld"}},
      {"application/rls-services+xml", std::vector<std::string>{"rs"}},
      {"application/route-apd+xml", std::vector<std::string>{"rapd"}},
      {"application/route-s-tsid+xml", std::vector<std::string>{"sls"}},
      {"application/route-usd+xml", std::vector<std::string>{"rusd"}},
      {"application/rpki-ghostbusters", std::vector<std::string>{"gbr"}},
      {"application/rpki-manifest", std::vector<std::string>{"mft"}},
      {"application/rpki-roa", std::vector<std::string>{"roa"}},
      {"application/rsd+xml", std::vector<std::string>{"rsd"}},
      {"application/rss+xml", std::vector<std::string>{"rss"}},
      {"application/rtf", std::vector<std::string>{"rtf"}},
      {"application/sbml+xml", std::vector<std::string>{"sbml"}},
      {"application/scvp-cv-request", std::vector<std::string>{"scq"}},
      {"application/scvp-cv-response", std::vector<std::string>{"scs"}},
      {"application/scvp-vp-request", std::vector<std::string>{"spq"}},
      {"application/scvp-vp-response", std::vector<std::string>{"spp"}},
      {"application/sdp", std::vector<std::string>{"sdp"}},
      {"application/senml+xml", std::vector<std::string>{"senmlx"}},
      {"application/sensml+xml", std::vector<std::string>{"sensmlx"}},
      {"application/set-payment-initiation",
       std::vector<std::string>{"setpay"}},
      {"application/set-registration-initiation",
       std::vector<std::string>{"setreg"}},
      {"application/shf+xml", std::vector<std::string>{"shf"}},
      {"application/sieve", std::vector<std::string>{"siv", "sieve"}},
      {"application/smil+xml", std::vector<std::string>{"smi", "smil"}},
      {"application/sparql-query", std::vector<std::string>{"rq"}},
      {"application/sparql-results+xml", std::vector<std::string>{"srx"}},
      {"application/srgs", std::vector<std::string>{"gram"}},
      {"application/srgs+xml", std::vector<std::string>{"grxml"}},
      {"application/sru+xml", std::vector<std::string>{"sru"}},
      {"application/ssdl+xml", std::vector<std::string>{"ssdl"}},
      {"application/ssml+xml", std::vector<std::string>{"ssml"}},
      {"application/swid+xml", std::vector<std::string>{"swidtag"}},
      {"application/tei+xml", std::vector<std::string>{"tei", "teicorpus"}},
      {"application/thraud+xml", std::vector<std::string>{"tfi"}},
      {"application/timestamped-data", std::vector<std::string>{"tsd"}},
      {"application/toml", std::vector<std::string>{"toml"}},
      {"application/trig", std::vector<std::string>{"trig"}},
      {"application/ttml+xml", std::vector<std::string>{"ttml"}},
      {"application/ubjson", std::vector<std::string>{"ubj"}},
      {"application/urc-ressheet+xml", std::vector<std::string>{"rsheet"}},
      {"application/urc-targetdesc+xml", std::vector<std::string>{"td"}},
      {"application/voicexml+xml", std::vector<std::string>{"vxml"}},
      {"application/wasm", std::vector<std::string>{"wasm"}},
      {"application/widget", std::vector<std::string>{"wgt"}},
      {"application/winhlp", std::vector<std::string>{"hlp"}},
      {"application/wsdl+xml", std::vector<std::string>{"wsdl"}},
      {"application/wspolicy+xml", std::vector<std::string>{"wspolicy"}},
      {"application/xaml+xml", std::vector<std::string>{"xaml"}},
      {"application/xcap-att+xml", std::vector<std::string>{"xav"}},
      {"application/xcap-caps+xml", std::vector<std::string>{"xca"}},
      {"application/xcap-diff+xml", std::vector<std::string>{"xdf"}},
      {"application/xcap-el+xml", std::vector<std::string>{"xel"}},
      {"application/xcap-ns+xml", std::vector<std::string>{"xns"}},
      {"application/xenc+xml", std::vector<std::string>{"xenc"}},
      {"application/xhtml+xml", std::vector<std::string>{"xhtml", "xht"}},
      {"application/xliff+xml", std::vector<std::string>{"xlf"}},
      {"application/xml", std::vector<std::string>{"xml", "xsl", "xsd", "rng"}},
      {"application/xml-dtd", std::vector<std::string>{"dtd"}},
      {"application/xop+xml", std::vector<std::string>{"xop"}},
      {"application/xproc+xml", std::vector<std::string>{"xpl"}},
      {"application/xslt+xml", std::vector<std::string>{"*xsl", "xslt"}},
      {"application/xspf+xml", std::vector<std::string>{"xspf"}},
      {"application/xv+xml",
       std::vector<std::string>{"mxml", "xhvml", "xvml", "xvm"}},
      {"application/yang", std::vector<std::string>{"yang"}},
      {"application/yin+xml", std::vector<std::string>{"yin"}},
      {"application/zip", std::vector<std::string>{"zip"}},
      {"audio/3gpp", std::vector<std::string>{"*3gpp"}},
      {"audio/adpcm", std::vector<std::string>{"adp"}},
      {"audio/amr", std::vector<std::string>{"amr"}},
      {"audio/basic", std::vector<std::string>{"au", "snd"}},
      {"audio/midi", std::vector<std::string>{"mid", "midi", "kar", "rmi"}},
      {"audio/mobile-xmf", std::vector<std::string>{"mxmf"}},
      {"audio/mp3", std::vector<std::string>{"*mp3"}},
      {"audio/mp4", std::vector<std::string>{"m4a", "mp4a"}},
      {"audio/mpeg",
       std::vector<std::string>{"mpga", "mp2", "mp2a", "mp3", "m2a", "m3a"}},
      {"audio/ogg", std::vector<std::string>{"oga", "ogg", "spx", "opus"}},
      {"audio/s3m", std::vector<std::string>{"s3m"}},
      {"audio/silk", std::vector<std::string>{"sil"}},
      {"audio/wav", std::vector<std::string>{"wav"}},
      {"audio/wave", std::vector<std::string>{"*wav"}},
      {"audio/webm", std::vector<std::string>{"weba"}},
      {"audio/xm", std::vector<std::string>{"xm"}},
      {"font/collection", std::vector<std::string>{"ttc"}},
      {"font/otf", std::vector<std::string>{"otf"}},
      {"font/ttf", std::vector<std::string>{"ttf"}},
      {"font/woff", std::vector<std::string>{"woff"}},
      {"font/woff2", std::vector<std::string>{"woff2"}},
      {"image/aces", std::vector<std::string>{"exr"}},
      {"image/apng", std::vector<std::string>{"apng"}},
      {"image/avif", std::vector<std::string>{"avif"}},
      {"image/bmp", std::vector<std::string>{"bmp"}},
      {"image/cgm", std::vector<std::string>{"cgm"}},
      {"image/dicom-rle", std::vector<std::string>{"drle"}},
      {"image/emf", std::vector<std::string>{"emf"}},
      {"image/fits", std::vector<std::string>{"fits"}},
      {"image/g3fax", std::vector<std::string>{"g3"}},
      {"image/gif", std::vector<std::string>{"gif"}},
      {"image/heic", std::vector<std::string>{"heic"}},
      {"image/heic-sequence", std::vector<std::string>{"heics"}},
      {"image/heif", std::vector<std::string>{"heif"}},
      {"image/heif-sequence", std::vector<std::string>{"heifs"}},
      {"image/hej2k", std::vector<std::string>{"hej2"}},
      {"image/hsj2", std::vector<std::string>{"hsj2"}},
      {"image/ief", std::vector<std::string>{"ief"}},
      {"image/jls", std::vector<std::string>{"jls"}},
      {"image/jp2", std::vector<std::string>{"jp2", "jpg2"}},
      {"image/jpeg", std::vector<std::string>{"jpeg", "jpg", "jpe"}},
      {"image/jph", std::vector<std::string>{"jph"}},
      {"image/jphc", std::vector<std::string>{"jhc"}},
      {"image/jpm", std::vector<std::string>{"jpm"}},
      {"image/jpx", std::vector<std::string>{"jpx", "jpf"}},
      {"image/jxr", std::vector<std::string>{"jxr"}},
      {"image/jxra", std::vector<std::string>{"jxra"}},
      {"image/jxrs", std::vector<std::string>{"jxrs"}},
      {"image/jxs", std::vector<std::string>{"jxs"}},
      {"image/jxsc", std::vector<std::string>{"jxsc"}},
      {"image/jxsi", std::vector<std::string>{"jxsi"}},
      {"image/jxss", std::vector<std::string>{"jxss"}},
      {"image/ktx", std::vector<std::string>{"ktx"}},
      {"image/ktx2", std::vector<std::string>{"ktx2"}},
      {"image/png", std::vector<std::string>{"png"}},
      {"image/sgi", std::vector<std::string>{"sgi"}},
      {"image/svg+xml", std::vector<std::string>{"svg", "svgz"}},
      {"image/t38", std::vector<std::string>{"t38"}},
      {"image/tiff", std::vector<std::string>{"tif", "tiff"}},
      {"image/tiff-fx", std::vector<std::string>{"tfx"}},
      {"image/webp", std::vector<std::string>{"webp"}},
      {"image/wmf", std::vector<std::string>{"wmf"}},
      {"message/disposition-notification",
       std::vector<std::string>{"disposition-notification"}},
      {"message/global", std::vector<std::string>{"u8msg"}},
      {"message/global-delivery-status", std::vector<std::string>{"u8dsn"}},
      {"message/global-disposition-notification",
       std::vector<std::string>{"u8mdn"}},
      {"message/global-headers", std::vector<std::string>{"u8hdr"}},
      {"message/rfc822", std::vector<std::string>{"eml", "mime"}},
      {"model/3mf", std::vector<std::string>{"3mf"}},
      {"model/gltf+json", std::vector<std::string>{"gltf"}},
      {"model/gltf-binary", std::vector<std::string>{"glb"}},
      {"model/iges", std::vector<std::string>{"igs", "iges"}},
      {"model/mesh", std::vector<std::string>{"msh", "mesh", "silo"}},
      {"model/mtl", std::vector<std::string>{"mtl"}},
      {"model/obj", std::vector<std::string>{"obj"}},
      {"model/step+xml", std::vector<std::string>{"stpx"}},
      {"model/step+zip", std::vector<std::string>{"stpz"}},
      {"model/step-xml+zip", std::vector<std::string>{"stpxz"}},
      {"model/stl", std::vector<std::string>{"stl"}},
      {"model/vrml", std::vector<std::string>{"wrl", "vrml"}},
      {"model/x3d+binary", std::vector<std::string>{"*x3db", "x3dbz"}},
      {"model/x3d+fastinfoset", std::vector<std::string>{"x3db"}},
      {"model/x3d+vrml", std::vector<std::string>{"*x3dv", "x3dvz"}},
      {"model/x3d+xml", std::vector<std::string>{"x3d", "x3dz"}},
      {"model/x3d-vrml", std::vector<std::string>{"x3dv"}},
      {"text/cache-manifest", std::vector<std::string>{"appcache", "manifest"}},
      {"text/calendar", std::vector<std::string>{"ics", "ifb"}},
      {"text/coffeescript", std::vector<std::string>{"coffee", "litcoffee"}},
      {"text/css", std::vector<std::string>{"css"}},
      {"text/csv", std::vector<std::string>{"csv"}},
      {"text/html", std::vector<std::string>{"html", "htm", "shtml"}},
      {"text/jade", std::vector<std::string>{"jade"}},
      {"text/jsx", std::vector<std::string>{"jsx"}},
      {"text/less", std::vector<std::string>{"less"}},
      {"text/markdown", std::vector<std::string>{"markdown", "md"}},
      {"text/mathml", std::vector<std::string>{"mml"}},
      {"text/mdx", std::vector<std::string>{"mdx"}},
      {"text/n3", std::vector<std::string>{"n3"}},
      {"text/plain", std::vector<std::string>{"txt", "text", "conf", "def",
                                              "list", "log", "in", "ini"}},
      {"text/richtext", std::vector<std::string>{"rtx"}},
      {"text/rtf", std::vector<std::string>{"*rtf"}},
      {"text/sgml", std::vector<std::string>{"sgml", "sgm"}},
      {"text/shex", std::vector<std::string>{"shex"}},
      {"text/slim", std::vector<std::string>{"slim", "slm"}},
      {"text/spdx", std::vector<std::string>{"spdx"}},
      {"text/stylus", std::vector<std::string>{"stylus", "styl"}},
      {"text/tab-separated-values", std::vector<std::string>{"tsv"}},
      {"text/troff",
       std::vector<std::string>{"t", "tr", "roff", "man", "me", "ms"}},
      {"text/turtle", std::vector<std::string>{"ttl"}},
      {"text/uri-list", std::vector<std::string>{"uri", "uris", "urls"}},
      {"text/vcard", std::vector<std::string>{"vcard"}},
      {"text/vtt", std::vector<std::string>{"vtt"}},
      {"text/xml", std::vector<std::string>{"*xml"}},
      {"text/yaml", std::vector<std::string>{"yaml", "yml"}},
      {"video/3gpp", std::vector<std::string>{"3gp", "3gpp"}},
      {"video/3gpp2", std::vector<std::string>{"3g2"}},
      {"video/h261", std::vector<std::string>{"h261"}},
      {"video/h263", std::vector<std::string>{"h263"}},
      {"video/h264", std::vector<std::string>{"h264"}},
      {"video/iso.segment", std::vector<std::string>{"m4s"}},
      {"video/jpeg", std::vector<std::string>{"jpgv"}},
      {"video/jpm", std::vector<std::string>{"*jpm", "jpgm"}},
      {"video/mj2", std::vector<std::string>{"mj2", "mjp2"}},
      {"video/mp2t", std::vector<std::string>{"ts"}},
      {"video/mp4", std::vector<std::string>{"mp4", "mp4v", "mpg4"}},
      {"video/mpeg",
       std::vector<std::string>{"mpeg", "mpg", "mpe", "m1v", "m2v"}},
      {"video/ogg", std::vector<std::string>{"ogv"}},
      {"video/quicktime", std::vector<std::string>{"qt", "mov"}},
      {"video/webm", std::vector<std::string>{"webm"}}};
}

} // namespace mime_types

#endif /* A0A3E1E4_BB7C_42F3_B328_A70C0E90764E */
